module mem_wb_regs #(
    DATA_WIDTH = 64,
    NUM_REGS_LOG = 5
) (
    input wire clk,
    input wire reset,
    input wire [6:0] wb_control_in,                     // control signals for writeback stage
    input wire [DATA_WIDTH-1:0] alu_in,                 // ALU result from ex stage
    input wire [DATA_WIDTH-1:0] mem_data_in,            // Mem result from mem stage
    output wire [DATA_WIDTH-1:0] alu_out,
    output wire [DATA_WIDTH-1:0] mem_data_out,
    output wire [6:0] wb_control_out
);

    // Internal registers to store values
    wb_control wb_ctrl(
        .clk(clk),
        .reset(reset),
        .reg_write_in(wb_control_in[6]),
        .mem_to_reg_in(wb_control_in[5]),
        .dest_in(wb_control_out[4:0]),
        .reg_write_out(wb_control_out[6]), 
        .mem_to_reg_out(wb_control_out[5]),
        .dest_out(wb_control_out[4:0])
    );

    logic [DATA_WIDTH-1:0] alu;
    logic [DATA_WIDTH-1:0] mem_data;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            alu         <= '0;  
            mem_data    <= '0;
        end else begin
            alu         <= alu_in;
            mem_data    <= mem_data_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        alu_out         = alu_reg;
        mem_data_out    = mem_data_reg;
    end

endmodule
