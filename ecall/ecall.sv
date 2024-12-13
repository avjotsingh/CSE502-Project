module ecall #(
    DATA_WIDTH = 64
) (
    input wire clk,
    input wire reset,

    input wire [DATA_WIDTH-1:0] a0,
    input wire [DATA_WIDTH-1:0] a1,
    input wire [DATA_WIDTH-1:0] a2,
    input wire [DATA_WIDTH-1:0] a3,
    input wire [DATA_WIDTH-1:0] a4,
    input wire [DATA_WIDTH-1:0] a5,
    input wire [DATA_WIDTH-1:0] a6,
    input wire [DATA_WIDTH-1:0] a7,
    input wire trigger,
    output wire [DATA_WIDTH-1:0] a0_
);

always_ff @(posedge clk) begin
    if (!reset && trigger) begin
        do_ecall(a7,a0,a1,a2,a3,a4,a5,a6,a0_);
    end
end

endmodule