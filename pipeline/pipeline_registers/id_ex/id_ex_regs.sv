module id_ex_regs #(
    DATA_WIDTH = 64,
    REG_ID_WIDTH = 5,
    ALU_OP_WIDTH = 7,
    ALU_FUNC3_WIDTH = 3,
    ALU_FUNC7_WIDTH = 7
) (
    input wire clk,
    input wire reset,
    input wire [DATA_WIDTH-1:0] pc_in,
    input wire [DATA_WIDTH-1:0] data1_in,
    input wire [DATA_WIDTH-1:0] data2_in,
    input wire [DATA_WIDTH-1:0] imm_in,
    input wire [REG_ID_WIDTH-1:0] dest_in,
    input wire [REG_ID_WIDTH-1:0] reg1_in,
    input wire [REG_ID_WIDTH-1:0] reg2_in,
    input wire [ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH+1:0] ex_control_in,
    input wire [2:0] mem_control_in,
    input wire [1:0] wb_control_in,

    output wire [DATA_WIDTH-1:0] pc_out,
    output wire [DATA_WIDTH-1:0] data1_out,
    output wire [DATA_WIDTH-1:0] data2_out,
    output wire [DATA_WIDTH-1:0] imm_out,
    output wire [REG_ID_WIDTH-1:0] dest_out,
    output wire [REG_ID_WIDTH-1:0] reg1_out,
    output wire [REG_ID_WIDTH-1:0] reg2_out,
    output wire [ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH+1:0] ex_control_out,
    output wire [2:0] mem_control_out,
    output wire [1:0] wb_control_out
);

    id_ex_control id_ex_ctrl(
        .clk(clk),
        .reset(reset),
        .reg_to_pc_in(ex_control_in[ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH+1]),
        .alu_src_in(ex_control_in[ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH]),
        .alu_op_in(ex_control_in[ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH-1:ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH]),
        .alu_func3_in(ex_control_in[ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH-1:ALU_FUNC7_WIDTH]),
        .alu_func7_in(ex_control_in[ALU_FUNC7_WIDTH-1:0]),
        .reg_to_pc_out(ex_control_out[ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH+1]),
        .alu_src_out(ex_control_out[ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH]),
        .alu_op_out(ex_control_out[ALU_OP_WIDTH+ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH-1:ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH]),
        .alu_func3_out(ex_control_out[ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH-1:ALU_FUNC7_WIDTH]),
        .alu_func7_out(ex_control_out[ALU_FUNC7_WIDTH-1:0])
    );

    ex_mem_control ex_mem_ctrl(
        .clk(clk),
        .reset(reset),
        .branch_in(mem_control_in[2]),
        .mem_read_in(mem_control_in[1]),
        .mem_write_in(mem_control_in[0]),
        .branch_out(mem_control_out[2]),
        .mem_read_out(mem_control_out[1]),
        .mem_write_out(mem_control_out[0])
    );

    mem_wb_control mem_wb_ctrl(
        .clk(clk),
        .reset(reset),
        .reg_write_in(wb_control_in[1]),
        .mem_to_reg_in(wb_control_in[0]),
        .reg_write_out(wb_control_out[1]), 
        .mem_to_reg_out(wb_control_out[0])
    );

    logic [DATA_WIDTH-1:0] pc;
    logic [DATA_WIDTH-1:0] data1;
    logic [DATA_WIDTH-1:0] data2;
    logic [DATA_WIDTH-1:0] imm;
    logic [REG_ID_WIDTH-1:0] dest;
    logic [REG_ID_WIDTH-1:0] reg1;
    logic [REG_ID_WIDTH-1:0] reg2;

    assign pc_out          = pc;
    assign data1_out       = data1;
    assign data2_out       = data2;
    assign imm_out         = imm;
    assign dest_out        = dest;
    assign reg1_out        = reg1;
    assign reg2_out        = reg2;

    always_ff @(posedge clk) begin
        if (reset) begin
            pc          <= '0;
            data1       <= '0;
            data2       <= '0;
            imm         <= '0;
            dest        <= '0;
            reg1        <= '0;
            reg2        <= '0;
        end else begin
            pc          <= pc_in;
            data1       <= data1_in;
            data2       <= data2_in;
            imm         <= imm_in;
            dest        <= dest_in;
            reg1        <= reg1_in;
            reg2        <= reg2_in;
        end
    end
endmodule