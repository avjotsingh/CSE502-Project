module pending_write #(
    ADDR_WIDTH = 64,
    DATA_WIDTH = 64
)(
    input wire clk,
    input wire reset,
    input wire [ADDR_WIDTH-1:0] address,
    input wire [DATA_WIDTH-1:0] value,
    input wire trigger
);

always_ff @(posedge clk) begin
    if (!reset && trigger) begin
        do_pending_write(address, value, 8);
    end
end

endmodule