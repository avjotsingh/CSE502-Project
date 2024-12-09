module directCache
#(
    TAG_LENGTH = 50, //I just made up #s here
    INDEX_LENGTH = 10, //I just made up #s here
    OFFSET_LENGTH = 4, //I just made up #s here
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    //TODO: Make this non-variable in construction
    STATE_BITS = 1 // {Valid}
)
(
    input wire clk,
    input wire reset,
    
    //cpu wires
    input wire avalid,                                              //is the address valid
    input wire [ADDR_WIDTH-1:0] aaddr,                              //the address
    input wire load,                                                //load command? if not, then store command
    input wire [DATA_WIDTH-1:0] data_from_cpu,
    output reg [DATA_WIDTH-1:0] data_to_cpu,
    output reg hit,                                                 //this is also "dvalid", if this is 1 then the cpu is being given valid data

    //memory bus wires
    output reg command_valid,
    output reg command_store,
    output reg command_rready,
    output reg [ADDR_WIDTH-1:0] command_addr,
    //TODO: confirm the size of this array
    output reg [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] data_to_bus,
    input wire [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] data_from_bus,
    input wire bus_valid,
    input wire bus_ready,
    input wire invalidate,
    input wire [ADDR_WIDTH-1:0] invalidate_addr
);


    reg [ADDR_WIDTH-1:0] dirty_addr;

    reg [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] dirty_data;
    //combinational parsing of the input
    wire [TAG_LENGTH-1:0] tag;
    wire [INDEX_LENGTH-1:0] index;
    wire [OFFSET_LENGTH-1:0] offset;

    wire curr_valid;

    wire [DATA_WIDTH * (2**OFFSET_LENGTH) -1 : 0] new_cache_data;
    wire [DATA_WIDTH-1:0] new_data;

    assign tag = aaddr[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH];
    assign index = aaddr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH];
    assign offset = aaddr[OFFSET_LENGTH-1:2];
    
    assign curr_valid = cache[index][TAG_LENGTH] == 1;
    assign hit = tag == cache[index][TAG_LENGTH-1:0] && curr_valid;
    
    assign data_to_cpu = cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH];
    
    //test
    wire [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cacheline;
    assign cacheline = cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 : STATE_BITS + TAG_LENGTH];

    enum {IDLE, DIRTY_WRITEBACK, LOADING, LOADING_CLEAN} state, next_state;

    logic [2**INDEX_LENGTH-1:0] [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cache;

    always_ff @ (posedge clk) begin
        if (reset) begin
            cache <= 0;
            dirty_addr <= 0;
            dirty_data <= 0;
            state <= IDLE;
        end else begin
            if (invalidate && cache[invalidate_addr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH]][TAG_LENGTH-1:0] == invalidate_addr[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH]) begin
                cache[invalidate_addr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH]][TAG_LENGTH] <= 0;
            end else begin
                state <= next_state;
                case (state)

                    IDLE: begin 
                        if (avalid) begin
                            if (!hit && curr_valid) begin
                                dirty_data <= cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH * (2**OFFSET_LENGTH)];
                                dirty_addr <= {cache[index][TAG_LENGTH - 1:0], index, {OFFSET_LENGTH{1'b0}}}; 
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
                            cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH * (2**OFFSET_LENGTH)] <= data_from_bus;
                            cache[index][TAG_LENGTH - 1 : 0] <= tag;
                            if (!load) begin 
                                cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH] <= data_from_cpu;
                            end
                            cache[index][TAG_LENGTH] <= 1;
                        end
                    end
                    LOADING_CLEAN: begin
                        if (bus_valid) begin
                            cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH * (2**OFFSET_LENGTH)] <= data_from_bus;
                            cache[index][TAG_LENGTH - 1 : 0] <= tag;
                            if (!load) begin 
                                cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH] <= data_from_cpu;
                            end
                            cache[index][TAG_LENGTH] <= 1;
                        end
                    end
                endcase
            end
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
                LOADING_CLEAN: begin
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
            IDLE: next_state = !invalidate && avalid ? (hit ? IDLE : (curr_valid ? LOADING : LOADING_CLEAN)) : IDLE;
            DIRTY_WRITEBACK: next_state = bus_ready ? IDLE : DIRTY_WRITEBACK;
            LOADING: next_state = bus_valid ? DIRTY_WRITEBACK : LOADING;
            LOADING_CLEAN: next_state = bus_valid ? IDLE : LOADING_CLEAN;
        endcase
    end
endmodule