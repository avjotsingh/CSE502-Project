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
    input wire [ADDR_WIDTH-1:0] addr,
    input wire arvalid,
    input wire load,
    output wire arready,
    output wire dvalid,
    output wire [DATA_WIDTH-1:0] data_out
);

    wire [ADDR_WIDTH-1:0] internal_addr;
    assign tag = internal_addr[ADDR_WIDTH-1:OFFSET_LENGTH + INDEX_LENGTH];
    assign index = internal_addr[INDEX_LENGTH + OFFSET_LENGTH -1:OFFSET_LENGTH];
    assign offset = internal_addr[OFFSET_LENGTH-1:0];
    
    assign hit = tag == cache[index][TAG_LENGTH-1:0];
    assign data_out = hit ? cache[index][(offset + 1) * DATA_WIDTH + STATE_BITS + TAG_LENGTH - 1: offset * DATA_WIDTH + STATE_BITS + TAG_LENGTH] : 1 /*this is a debug bit rn*/;

    enum {RESET, STANDBY, LOAD, STORE, MISS} state, next_state;	
    logic [2**INDEX_LENGTH-1:0] [DATA_WIDTH * (2**OFFSET_LENGTH) + STATE_BITS + TAG_LENGTH - 1:0] cache;
    
    always_ff @ (posedge clk) begin
        case (state)
            RESET: internal_addr <= 0;
            STANDBY: internal_addr <= addr;
            LOAD: begin 
                internal_addr <= internal_addr;
            end
            STORE: internal_addr <= internal_addr;
            MISS: internal_addr <= internal_addr;
        endcase
    end

    //output logic
    always_comb begin
        case (state)
        RESET: begin
            arready = 0; 
            dvalid = 0;
            data_out = 0;
        end
        STANDBY : begin 
            arready = 1;
            dvalid = 0;
            data_out = 0;
        end
        LOAD : begin
            cache[]
        end
        endcase
    end

    //next state logic
    always_comb begin
        case (state)
        RESET: next_state = reset ? RESET : STANDBY;
        STANDBY: next_state = arvalid ? (load ? LOAD : STORE) : STANDBY;
        LOAD: next_state = miss ? MISS : STANDBY;
        STORE: next_state = miss ? MISS : STANDBY;
        MISS: next_state = found ? STANDBY : MISS;

        endcase
    end



endmodule