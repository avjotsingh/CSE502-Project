module ex_mem_regs #(
    DATA_WIDTH = 64
) (
    input wire clk,
    input wire reset,
    input wire [DATA_WIDTH-1:0] target_in,                          // Branch target computed by ALU
    input wire branch_decision_in,                                  // Branch decision taken by ALU
    input wire [DATA_WIDTH-1:0] alu_res_in,                         // ALU result
    input wire [DATA_WIDTH-1:0] write_data_in,                      // Data to write to memory
    input wire [REG_ID_WIDTH-1:0] dest_in,                          // Destination register ID for writeback stage
    input wire [2:0] mem_control_in,
    input wire [1:0] wb_control_in,

    output wire [DATA_WIDTH-1:0] target_out,
    output wire branch_decision_out,
    output wire [DATA_WIDTH-1:0] alu_res_out,
    output wire [DATA_WIDTH-1:0] write_data_out,
    output wire [2:0] mem_control_out,
    output wire [1:0] wb_control_out
    output wire [REG_ID_WIDTH-1:0] dest_out
);

    // Internal registers to store values

    ex_mem_control ex_mem_ctrl(
        .clk(clk),
        .reset(reset),
        .branch_in(mem_control_in[2]),
        .mem_read_in(mem_control_in[1]),
        .mem_write_in(mem_control_in[0]),
        .branch_out(mem_control_out[2]),
        .mem_read_out(mem_control_out[1]),
        .mem_write_out(mem_control_out[0]),
    )

    mem_wb_control mem_wb_ctrl(
        .clk(clk),
        .reset(reset),
        .reg_write_in(wb_control_in[1]),
        .mem_to_reg_in(wb_control_in[0]),
        .reg_write_out(wb_control_out[1]), 
        .mem_to_reg_out(wb_control_out[0])
    );


    logic [DATA_WIDTH-1:0] target;
    logic branch_decision;
    logic [DATA_WIDTH-1:0] alu_res;
    logic [DATA_WIDTH-1:0] write_data;
    logic [REG_ID_WIDTH-1:0] dest;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            target              <= '0;  // Reset all registers to zero
            branch_decision     <= '0;
            alu_res             <= '0;
            write_data          <= '0;
            dest                <= '0;
        end else begin
            target              <= target_in;
            branch_decision     <= branch_decision_in;
            alu_res             <= alu_res_in;
            write_data          <= write_data_in;
            dest                <=  dest_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        target_out              = target;
        branch_decision_out     = branch_decision;
        alu_res_out             = alu_res;
        write_data_out          = write_data;
        dest_out                = dest;
    end

endmodule
