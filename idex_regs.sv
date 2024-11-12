module idex_regs #(
    INSTR_WIDTH = 32,
    DATA_WIDTH = 64,
    CONTROL_WIDTH = 16      // TBD
) (
    clk,
    reset,
    input [INSTR_WIDTH-1:0] pc_in,
    input [DATA_WIDTH-1:0] val_a_in,
    input [DATA_WIDTH-1:0] val_b_in,
    input [DATA_WIDTH-1:0] imm_in,
    input [CONTROL_WIDTH-1:0] control_in,
    output [INSTR_WIDTH-1:0] pc_out,
    output [DATA_WIDTH-1:0] val_a_out,
    output [DATA_WIDTH-1:0] val_b_out,
    output [DATA_WIDTH-1:0] imm_out,
    output [CONTROL_WIDTH-1:0] control_out
);

    logic [DATA_WIDTH-1:0] pc;
    logic [DATA_WIDTH-1:0] val_a;
    logic [DATA_WIDTH-1:0] val_b;
    logic [DATA_WIDTH-1:0] imm;
    logic [CONTROL_WIDTH-1:0] control;

    always_ff @posedge(clk) begin
        if (reset) begin
            pc <= 0;
            val_a <= 0;
            val_b <= 0;
            imm <= 0;
            control <= 0;
        end else
            pc <= pc_in;
            val_a <= val_a_in;
            val_b <= val_b_in;
            imm <= imm_in;
            control <= control_in;
        end
    end

    always_comb begin
        pc_out = pc;
        val_a_out = val_a;
        val_b_out = val_b;
        imm_out = imm;
        control_out = control;
    end
endmodule