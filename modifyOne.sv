module modifyOne
#(
    REG_LOG = 5,
    DATA_WIDTH = 64
)
(
    input wire [2**REG_LOG-1:0][DATA_WIDTH-1:0] data,
    input wire [DATA_WIDTH-1:0] new_data,
    input wire [REG_LOG-1:0] sel,
    output wire [2**REG_LOG-1:0][DATA_WIDTH-1:0] final_data
);
    wire [REG_LOG-1:0] i;
    always_ff begin
        for (i = 0; i < 2**REG_LOG; i++) begin
            if (i == sel) begin
                final_data[i] = new_data;
            end else begin
                final_data[i] = data[i];
            end
        end
    end

endmodule