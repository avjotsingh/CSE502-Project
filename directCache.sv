module directCache
#(
    TAG_LENGTH = 49, //I just made up #s here
    INDEX_LENGTH = 10, //I just made up #s here
    OFFSET_LENGTH = 5, //I just made up #s here
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    //TODO: Make this non-variable in construction
    STATE_BITS = 2 // {Valid,Dirty}
)
(
    input wire clk,
    input wire reset,
    
    input wire avalid,
    input wire [ADDR_WIDTH-1:0] aaddr,
    //if not, then store
    input wire load,

    input wire dready,

    output wire aready,
    output wire dvalid,
    output wire [DATA_WIDTH-1:0] data_out,

    //memory bus wires:
    output wire command_valid,
    output wire command_store,
    output wire command_rready,
    output wire [ADDR_WIDTH-1:0] command_addr,
    //TODO: confirm the size of this array
    output wire [DATA_WIDTH*(2**OFFSET_LENGTH)-1:0] data_in,
    input wire bus_valid,
    input wire bus_ready
);

    //register for the current address we are dealing with
    wire [ADDR_WIDTH-1:0] internal_addr;

    //combinational parsing of the input
    wire [TAG_LENGTH-1:0] tag;
    wire [INDEX_LENGTH-1:0] index;
    wire [OFFSET_LENGTH-1:0] offset;


    wire hit;

    assign tag = internal_addr[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH];
    assign index = internal_addr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH];
    assign offset = internal_addr[OFFSET_LENGTH-1:0];

    assign hit = tag == cache[index][TAG_LENGTH-1:0] && cache[index][TAG_LENGTH] == 1;
    //the below line doesn't compile becaus of the variable on both sides of the [a:b] 
    //assign data_out = hit ? cache[index][(offset + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1: offset * DATA_WIDTH + STATE_BITS + TAG_LENGTH] : 1 /*this is a debug bit rn*/;

    //{{32-OFFSET_LENGTH{1'b0}}, offset} is just 0-padding offset to 32 bits for math purposes 
    assign data_out = hit ? cache[index][({{32-OFFSET_LENGTH{1'b0}}, offset} + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1 -: DATA_WIDTH] : 1 /*this is a debug bit rn*/;



    enum {IDLE, OUTPUT, IDLE_BUSY, OUTPUT_BUSY, LOADING, STALL_LOAD, STALL_STORE} state, next_state;
    
    //TODO: Communicate with the memory bus

    //did_we_just_finish_our_memory_operation? probably replace with a wire that communicates with the bus
    wire mod;

    logic [2**INDEX_LENGTH-1:0] [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cache;
    
    always_ff @ (posedge clk) begin
        if (reset) begin
            //TODO: Found this line on stack overflow, should fully understand what this is doing
            cache <= '{default: '0};
            internal_addr <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (avalid) begin
                        internal_addr <= aaddr;
                    end else begin 
                        internal_addr <= 0;
                    end
                end
                OUTPUT: begin
                    
                end
                IDLE_BUSY: begin
                    
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

    //output logic
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


    //next state logic
    always_comb begin
        case (state)
            IDLE: next_state = avalid ? (hit ? (load ? OUTPUT : IDLE) : (load ? OUTPUT_BUSY : IDLE_BUSY)) : IDLE; 
            OUTPUT: next_state = dready ? IDLE : OUTPUT;
            IDLE_BUSY: next_state = mod ? (avalid ? (hit ? (load ? OUTPUT : IDLE) : (load ? OUTPUT_BUSY : IDLE_BUSY)) : IDLE) : 
                (avalid ? (hit ? (load ? OUTPUT_BUSY : IDLE_BUSY) : (load ? STALL_LOAD : STALL_STORE)) : IDLE_BUSY); 
            OUTPUT_BUSY: next_state = mod ? (dready ? IDLE : OUTPUT) : (dready ? IDLE_BUSY : OUTPUT_BUSY);
            //TODO: replace with a wire that (is connected to/communicates with) the memory bus ≡ rdone
            // next_state = rdone ? OUTPUT_BUSY : LOADING;
            LOADING: next_state = OUTPUT_BUSY;
            //TODO: I think I'm overloading the load variable here, maybe need another register that remembers the previous
            //FIX: Add a new state to differentiate the two
            STALL_LOAD: next_state = mod ? LOADING : STALL_LOAD; 
            STALL_STORE: next_state = mod ? IDLE_BUSY : STALL_STORE; 
        endcase
    end



endmodule