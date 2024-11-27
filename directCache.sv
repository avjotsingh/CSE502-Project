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
    //if not, then store
    input wire load,

    input wire dready,
    input wire [DATA_WIDTH-1:0] data_from_cpu,

    output wire aready,
    output wire dvalid,
    output wire [DATA_WIDTH-1:0] data_to_cpu,

    //memory bus wires:
    output wire command_valid,
    output wire command_store,
    output wire command_rready,
    output wire [ADDR_WIDTH-1:0] command_addr,
    //TODO: confirm the size of this array
    output wire [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] data_to_bus,
    input wire bus_valid,
    input wire bus_ready
);

    //register for the current address we are dealing with
    wire [ADDR_WIDTH-1:0] cache_addr;

    wire [ADDR_WIDTH-1:0] dirty_addr;

    //combinational parsing of the input
    wire [TAG_LENGTH-1:0] tag;
    wire [INDEX_LENGTH-1:0] index;
    wire [OFFSET_LENGTH-1:0] offset;

    wire hit;

    //TODO: make this better
    wire [DATA_WIDTH * (2**OFFSET_LENGTH) -1 : 0] new_cache_data;

    wire [DATA_WIDTH-1:0] new_data;

    //this needs logic for data from memory
    assign new_data = data_from_cpu;

    //makes the new cache state
    modifyOne #(OFFSET_LENGTH, DATA_WIDTH) store_modifier 
        (.data(cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:STATE_BITS + TAG_LENGTH]), 
        .new_data(new_data), .sel(offset), .final_data(new_cache_data));

    assign tag = cache_addr[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH];
    assign index = cache_addr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH];
    assign offset = cache_addr[OFFSET_LENGTH-1:0];

    assign hit = tag == cache[index][TAG_LENGTH-1:0] && cache[index][TAG_LENGTH] == 1;

    //{{32-OFFSET_LENGTH{1'b0}}, offset} is just 0-padding offset to 32 bits for math purposes 
    //assign data_to_cpu = hit ? cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH] : 1 /*this is a debug bit rn*/;
    assign data_to_cpu = cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH]

    enum {IDLE, OUTPUT, IDLE_BUSY, OUTPUT_BUSY, LOADING, STALL_LOAD, STALL_STORE} state, next_state;
    enum {BUS_IDLE, BUS_STORE_VALID, BUS_LOAD_VALID, BUS_LOAD_READY} bus_state, next_bus_state;
    
    //TODO: Communicate with the memory bus

    //did_we_just_finish_our_memory_operation? probably replace with a wire that communicates with the bus
    wire mod;
    assign mod = command_valid && bus_ready;

    logic [2**INDEX_LENGTH-1:0] [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cache;
    
    always_ff @ (posedge clk) begin
        if (reset) begin
            //TODO: Found this line on stack overflow, should fully understand what this is doing
            cache <= '{default: '0};
            cache_addr <= 0;
            data_to_bus <= 0;
            state <= IDLE;
            bus_state <= BUS_IDLE;
        end else begin
            state <= next_state;
            bus_state <= next_bus_state;
            case (state)
                IDLE: begin
                    if (avalid) begin
                        cache_addr <= aaddr;
                        //if miss by invalid
                        if (!hit && cache[index][TAG_LENGTH] == 0) begin
                            if (!load) begin
                                //load memory into cache, then overwrite the correct part with data_in      
                                cache[index] <= {new_cache_data,1'b1,tag};  
                            end
                        end else if (!hit) begin
                            data_to_bus <= cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH * (2**OFFSET_LENGTH)];
                        end
                    end else begin 
                        cache_addr <= 0;
                    end
                end
                OUTPUT: begin
                    
                end
                IDLE_BUSY: begin
                    if (!hit && cache[index][TAG_LENGTH] == 0) begin
                        if (!load) begin
                            //load memory into cache, then overwrite the correct part with data_in        
                        end
                    end else if (!hit) begin
                        data_to_bus <= cache[index][DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH * (2**OFFSET_LENGTH)];
                    end
                end
                OUTPUT_BUSY: begin
                    
                end
                LOADING: begin
                    
                end
                STALL_LOAD: begin
                    
                end
                STALL_STORE: begin
                    
                end
            endcase
        end
    end

    //output to cpu logic
    /*
        wires that need pushing:
        aready, dvalid
    */
    always_comb begin
        if (reset) begin
        end else begin
            case (state)
                IDLE: begin
                    aready = 1;
                    dvalid = 0;
                end
                OUTPUT: begin
                    aready = 0;
                    dvalid = 1;
                end
                IDLE_BUSY: begin
                    aready = 1;
                    dvalid = 0;
                end
                OUTPUT_BUSY: begin
                    aready = 0;
                    dvalid = 1;
                end
                LOADING: begin
                    aready = 0;
                    dvalid = 0;
                end
                STALL_LOAD: begin
                    aready = 0;                    
                    dvalid = 0;
                end
                STALL_STORE: begin
                    aready = 0;
                    dvalid = 0;
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
                    command_addr = aaddr;
                end
                OUTPUT: begin
                    command_addr = 0;
                end
                IDLE_BUSY: begin
                    command_addr = dirty_addr;
                end
                OUTPUT_BUSY: begin
                    command_addr = dirty_addr;  
                end
                LOADING: begin
                    command_addr = cache_addr;  
                end
                STALL_LOAD: begin
                    command_addr = dirty_addr; 
                end
                STALL_STORE: begin
                    command_addr = dirty_addr; 
                end
            endcase
        end
    end


    //next state logic
    always_comb begin
        case (state)
            IDLE: next_state = avalid ? (hit ? (load ? OUTPUT : IDLE) : (load ? OUTPUT_BUSY : IDLE_BUSY)) : IDLE; 
            OUTPUT: next_state = dready ? IDLE : OUTPUT;
            IDLE_BUSY: next_state = mod ? (avalid ? (hit ? (load ? OUTPUT : IDLE) : (load ? OUTPUT_BUSY : IDLE_BUSY)) : IDLE) : 
                (avalid ? (hit ? (load ? OUTPUT_BUSY : IDLE_BUSY) : (load ? STALL_LOAD : STALL_STORE)) : IDLE_BUSY); 
            OUTPUT_BUSY: next_state = mod ? (dready ? IDLE : OUTPUT) : (dready ? IDLE_BUSY : OUTPUT_BUSY);
            LOADING: next_state = bus_valid ? OUTPUT_BUSY : LOADING;
            STALL_LOAD: next_state = mod ? LOADING : STALL_LOAD; 
            STALL_STORE: next_state = mod ? IDLE_BUSY : STALL_STORE; 
        endcase
    end
endmodule