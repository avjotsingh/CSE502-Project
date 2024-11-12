module exmem_regs #(
    INSTR_WIDTH = 32,
    DATA_WIDTH = 64,
    CONTROL_WIDTH = 16          // TBD
) (
    input  wire                  clk,
    input  wire                  reset,
    input  wire [DATA_WIDTH-1:0] target_in,
    input  wire [DATA_WIDTH-1:0] alu_res_in,
    input  wire [DATA_WIDTH-1:0] val_b_in,
    input  wire [DATA_WIDTH-1:0] control_in,
    output wire [DATA_WIDTH-1:0] target_out,
    output wire [DATA_WIDTH-1:0] alu_res_out,
    output wire [DATA_WIDTH-1:0] val_b_out,
    output wire [DATA_WIDTH-1:0] control_out
);

    // Internal registers to store values
    logic [INSTR_WIDTH-1:0] target;
    logic [DATA_WIDTH-1:0] alu_res;
    logic [DATA_WIDTH-1:0] val_b;
    logic [CONTROL_WIDTH-1:0] control;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            target   <= 0;  // Reset all registers to zero
            alu_res  <= 0;
            val_b    <= 0;
            control  <= 0;
        end else begin
            target   <= target_in;
            alu_res  <= alu_res_in;
            val_b    <= val_b_in;
            control  <= control_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        target_out   = target;
        alu_res_out  = alu_res;
        val_b_out    = val_b;
        control_out  = control;
    end

endmodule
