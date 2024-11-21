module wb_control #(
    ALU_OP_WIDTH = 7,
    ALU_FUNC3_WIDTH = 3
    ALU_FUNC7_WIDTH = 7
) (
    input wire clk,
    input wire reset,
    input wire alu_src_in,                              // control signal -> whether second operand is an immediate or register value
    input wire [ALU_OP_WIDTH-1:0] alu_op_in,            // control signal -> specifies the type of ALU operation (R, I, S, B, U, J)
    input wire [ALU_FUNC3_WIDHT-1:0] alu_func3_in,      // control signal -> specifies the exact operation to perform depending on ALU op
    input wire [ALU_FUNC7_WIDHT-1:0] alu_func7_in,      // control signal -> specifies the exact operation to perform depending on ALU op
    output wire alu_src_out,
    output wire [ALU_OP_WIDTH-1:0] alu_op_out,
    output wire [ALU_FUNC3_WIDHT-1:0] alu_func3_out,
    output wire [ALU_FUNC7_WIDHT-1:0] alu_func7_out,
);

    // Internal registers to store values
    logic alu_src;
    logic [ALU_OP_WIDTH-1:0] alu_op;
    logic [ALU_FUNC3_WIDHT-1:0] alu_func3;
    logic [ALU_FUNC7_WIDHT-1:0] alu_func7;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            alu_src         <= '0;   // Reset all registers to zero
            alu_op          <= '0;
            alu_func3       <= '0;
            alu_func7       <= '0;
        end else begin
            alu_src         <= alu_src_in;
            alu_op          <= alu_op_in;
            alu_func3       <= alu_func3_in;
            alu_func7       <= alu_func7_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        alu_src_out         = reg_write;
        alu_op_out          = alu_op;
        alu_func3_out       = alu_func3;
        alu_func7_out       = alu_func7;
    end
endmodule
