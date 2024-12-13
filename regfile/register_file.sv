module register_file #(
    DATA_WIDTH=64,
    NUM_REGS=32,
    NUM_REGS_LOG=$clog2(NUM_REGS)
) (
    input clk,
    input reset,
    input wire [NUM_REGS_LOG-1:0] read1,  
    input wire [NUM_REGS_LOG-1:0] read2,
    input wire [NUM_REGS_LOG-1:0] write_reg,
    input wire [DATA_WIDTH-1:0] write_data,
    output wire [DATA_WIDTH-1:0] data1,
    output wire [DATA_WIDTH-1:0] data2
);

    logic [DATA_WIDTH-1:0] registers [NUM_REGS-1:0];
    
    assign data1 = registers[read1];
    assign data2 = registers[read2];
    
    always_ff @ (posedge clk) begin
        if (reset) begin
            foreach(registers[i]) registers[i] <= 0;
            //initial stack pointer
            registers[2] <= write_data;
        end else begin 
            if (write_reg != 0) begin 
                registers[write_reg] <= write_data;
            end else begin
                registers[write_reg] <= 0;
            end
        end
    end
endmodule