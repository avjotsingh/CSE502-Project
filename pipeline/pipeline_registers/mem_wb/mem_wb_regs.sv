module mem_wb_regs #(
    DATA_WIDTH = 64,
    REG_ID_WIDTH = 5
) (
    input wire clk,
    input wire reset,
    input wire [DATA_WIDTH-1:0] alu_in,                 // ALU result from ex stage
    input wire [DATA_WIDTH-1:0] mem_data_in,            // Mem result from mem stage
    input wire [REG_ID_WIDTH-1:0] dest_in,
    input wire [1:0] wb_control_in,                     // control signals for writeback stage


    output wire [DATA_WIDTH-1:0] alu_out,
    output wire [DATA_WIDTH-1:0] mem_data_out,
    output wire [REG_ID_WIDTH-1:0] dest_out,
    output wire [1:0] wb_control_out
);

    // Internal registers to store values
    mem_wb_control mem_wb_ctrl(
        .clk(clk),
        .reset(reset),
        .reg_write_in(wb_control_in[1]),
        .mem_to_reg_in(wb_control_in[0]),
        .reg_write_out(wb_control_out[1]), 
        .mem_to_reg_out(wb_control_out[0])
    );

    logic [DATA_WIDTH-1:0] alu;
    logic [DATA_WIDTH-1:0] mem_data;
    logic [REG_ID_WIDTH-1:0] dest;

    assign alu_out         = alu;
    assign mem_data_out    = mem_data;
    assign dest_out        = dest;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            alu         <= '0;  
            mem_data    <= '0;
            dest        <= '0;
        end else begin
            alu         <= alu_in;
            mem_data    <= mem_data_in;
            dest        <= dest_in;
        end
    end
endmodule
