module directCache
#(
    TAG_LENGTH = 49, //I just made up #s here
    INDEX_LENGTH = 10, //I just made up #s here
    OFFSET_LENGTH = 5, //I just made up #s here
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    STATE_BITS = 1
)
(
    input wire clk,
    input wire reset,
    
    input wire avalid,
    input wire [ADDR_WIDTH-1:0] aaddr,
    //if not, then store
    input wire load,

    input wire dready,

    output wire dvalid,
    output wire [DATA_WIDTH-1:0] data_out
);

    wire [ADDR_WIDTH-1:0] internal_addr;
    assign tag = internal_addr[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH];
    assign index = internal_addr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH];
    assign offset = internal_addr[OFFSET_LENGTH-1:0];
    
    assign hit = tag == cache[index][TAG_LENGTH-1:0];
    assign data_out = hit ? cache[index][(offset + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1: offset * DATA_WIDTH + STATE_BITS + TAG_LENGTH] : 1 /*this is a debug bit rn*/;

    //did_we_just_finish_our_memory_operation? probably replace with a wire that communicates with the bus
    wire mod;

    enum {IDLE, OUTPUT, IDLE_BUSY, OUTPUT_BUSY, LOADING, STALL_LOAD, STALL_STORE} state, next_state;	
    logic [2**INDEX_LENGTH-1:0] [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cache;
    
    always_ff @ (posedge clk) begin
        if (reset) begin
        end else begin
            case (state)
                IDLE: begin
                    
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
    always_comb begin
        case (state)
            IDLE: begin
                
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