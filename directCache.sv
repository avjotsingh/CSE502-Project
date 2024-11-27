module directCache
#(
    TAG_LENGTH = 49, //I just made up #s here
    INDEX_LENGTH = 10, //I just made up #s here
    OFFSET_LENGTH = 5, //I just made up #s here
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    //TODO: Make this non-variable in construction
    STATE_BITS = 1 // {Valid}
)
(
    input wire clk,
    input wire reset,
    
    //cpu wires

    input wire avalid,
    input wire [ADDR_WIDTH-1:0] aaddr,
    input wire load,
    input wire [DATA_WIDTH-1:0] data_from_cpu,

    output wire [DATA_WIDTH-1:0] data_to_cpu,
    output wire hit,

    //memory bus wires:
    output wire command_valid,
    output wire command_store,
    output wire command_rready,
    output wire [ADDR_WIDTH-1:0] command_addr,
    //TODO: confirm the size of this array
    output wire [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] data_to_bus,
    input wire [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] data_from_bus,
    input wire bus_valid,
    input wire bus_ready
);


    wire [ADDR_WIDTH-1:0] dirty_addr;

    wire [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] dirty_data;
    //combinational parsing of the input
    wire [TAG_LENGTH-1:0] tag;
    wire [INDEX_LENGTH-1:0] index;
    wire [OFFSET_LENGTH-1:0] offset;

    wire curr_valid;

    wire [DATA_WIDTH * (2**OFFSET_LENGTH) -1 : 0] new_cache_data;
    wire [DATA_WIDTH-1:0] new_data;


    //makes the new cache state
    modifyOne #(OFFSET_LENGTH, DATA_WIDTH) store_modifier 
        (.data(cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:STATE_BITS + TAG_LENGTH]), 
        .new_data(data_from_cpu), .sel(offset), .final_data(new_cache_data));

    assign tag = data_from_cpu[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH];
    assign index = data_from_cpu[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH];
    assign offset = data_from_cpu[OFFSET_LENGTH-1:0];

    assign curr_valid = cache[index][TAG_LENGTH] == 1;
    assign hit = tag == cache[index][TAG_LENGTH-1:0] && curr_valid;
    
    //{{32-OFFSET_LENGTH{1'b0}}, offset} is just 0-padding offset to 32 bits for math purposes 
    //assign data_to_cpu = hit ? cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH] : 1 /*this is a debug bit rn*/;
    assign data_to_cpu = cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH];

    enum {IDLE, DIRTY_WRITEBACK, LOADING} state, next_state;

    logic [2**INDEX_LENGTH-1:0] [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cache;

    //state, cache, dirty_data, dirty_addr
    always_ff @ (posedge clk) begin
        if (reset) begin
            cache <= '{default: '0};
            dirty_addr <= 0;
            dirty_data <= 0;
            state <= IDLE;
        end else begin
            state <= next_state;
            case (state)
                IDLE: begin
                    if (avalid) begin
                        if (!hit && curr_valid) begin
                            dirty_data <= cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH * (2**OFFSET_LENGTH)];
                            dirty_addr <= {index, cache[index][TAG_LENGTH - 1:0], {OFFSET_LENGTH{1'b0}}}; 
                        end else if (hit) begin
                            if (!load) begin
                                cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH] <= data_from_cpu;
                            end
                        end
                    end
                end
                DIRTY_WRITEBACK: begin end
                LOADING: begin
                    if (bus_valid) begin
                        cache[index] <= {data_from_bus, 1'b1, tag};
                    end
                end

            endcase
        end
    end

    //output to bus logic
    always_comb begin
        if (reset) begin
        end else begin
            case (state)
                IDLE: begin
                    command_addr = 0;
                    command_valid = 0;
                    command_store = 0;
                    command_rready = 0;
                end
                DIRTY_WRITEBACK: begin 
                    command_addr = {dirty_addr[ADDR_WIDTH-1:OFFSET_LENGTH], {OFFSET_LENGTH{1'b0}}};
                    command_valid = 1;
                    command_store = 1;
                    command_rready = 0;
                end
                LOADING: begin
                    command_addr = {tag, index, {OFFSET_LENGTH{1'b0}}};
                    command_valid = 1;
                    command_store = 0;
                    command_rready = 1;
                end
            endcase
        end
    end


    //next state logic
    always_comb begin
        case (state)
            IDLE: next_state = avalid ? (hit ? IDLE : LOADING) : IDLE;
            DIRTY_WRITEBACK: next_state = bus_ready ? IDLE : DIRTY_WRITEBACK;
            LOADING: next_state = bus_valid ? (curr_valid ? DIRTY_WRITEBACK : IDLE) : LOADING;
        endcase
    end
endmodule