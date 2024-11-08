module registerFile
#(
    DATA_WIDTH = 64,
    REGISTER_AMOUNT_LOG = 5
)
(
    input wire clk,
    input wire reset,
    input wire [REGISTER_AMOUNT_LOG-1:0] read1,  
    input wire [REGISTER_AMOUNT_LOG-1:0] read2,
    input wire [REGISTER_AMOUNT_LOG-1:0] write_reg,
    input wire [DATA_WIDTH-1:0] write_data,
    input wire dump,
    output wire [DATA_WIDTH-1:0] out1,
    output wire [DATA_WIDTH-1:0] out2
);

    logic [2**REGISTER_AMOUNT_LOG-1:0] [DATA_WIDTH-1:0] registers;
    always_ff @ (posedge clk) begin
        if (reset) begin
            foreach(registers[i]) registers[i] <= 0;
        end else if (dump) begin
            foreach(registers[i]) $display("register %d contains the value 0x%x",i,registers[i]);
        end else begin 
            if (write_reg != 0) begin 
                registers[write_reg] <= write_data;
            end else begin
                registers[write_reg] <= 0; //write_reg is 0 here
            end
        end
    end

    always_comb begin
        out1 = registers[read1];
        out2 = registers[read2];
    end

endmodule