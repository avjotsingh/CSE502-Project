module pipeline_stage_regs #(
    DATA_WIDTH = 64,
    CONTROL_WIDTH = 16      // TBD
) (
    input  wire                 clk,
    input  wire                 reset,
    input  wire [DATA_WIDTH-1:0] alu_in,
    input  wire [DATA_WIDTH-1:0] mem_data_in,
    input  wire [CONTROL_WIDTH-1:0] control_in,
    output wire [DATA_WIDTH-1:0] alu_out,
    output wire [DATA_WIDTH-1:0] mem_data_out,
    output wire [CONTROL_WIDTH-1:0] control_out
);

    // Internal registers to store values
    logic [DATA_WIDTH-1:0] alu;
    logic [DATA_WIDTH-1:0] mem_data;
    logic [CONTROL_WIDTH-1:0] control;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            alu      <= '0;  // Reset all registers to zero
            mem_data <= '0;
            control  <= '0;
        end else begin
            alu      <= alu_in;
            mem_data <= mem_data_in;
            control  <= control_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        alu_out      = alu_reg;
        mem_data_out = mem_data_reg;
        control_out  = control_reg;
    end

endmodule
