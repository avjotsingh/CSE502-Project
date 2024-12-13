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
    output wire [DATA_WIDTH-1:0] data2,

    output wire a0,
    output wire a1,
    output wire a2,
    output wire a3,
    output wire a4,
    output wire a5,
    output wire a6,
    output wire a7
);

    logic [DATA_WIDTH-1:0] registers [NUM_REGS-1:0];
    
    assign data1 = registers[read1];
    assign data2 = registers[read2];

    assign a0 = registers[10];
    assign a1 = registers[11];
    assign a2 = registers[12];
    assign a3 = registers[13];
    assign a4 = registers[14];
    assign a5 = registers[15];
    assign a6 = registers[16];
    assign a7 = registers[17];
    
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