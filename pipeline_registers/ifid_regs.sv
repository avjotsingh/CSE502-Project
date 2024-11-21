module ifid_regs #(
    INSTR_WIDTH = 32
    DATA_WIDTH = 64
) (
    clk,
    reset,;
    input wire [DATA_WIDTH-1:0] pc_in,
    input wire [INSTR_WIDTH-1:0] instruction_in,
    output wire [DATA_WIDTH-1:0] pc_out,
    output wire [INSTR_WIDTH-1:0] instruction_out
);

    logic [DATA_WIDTH-1:0] pc;
    logic [DATA_WIDTH-1:0] instruction;

    always_ff @posedge(clk) begin
        if (reset) begin
            pc <= 0;
            instruction <= 0;
        end else
            pc <= pc_in;
            instruction <= instruction_in;
        end
    end

    always_comb begin
        pc_out = pc;
        instruction_out = instruction;
    end
endmodule