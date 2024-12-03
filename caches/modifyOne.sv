module modifyOne
#(
    REG_LOG = 5,
    DATA_WIDTH = 64
)
(
    input wire [2**REG_LOG-1:0][DATA_WIDTH-1:0] data,
    input wire [DATA_WIDTH-1:0] new_data,
    input wire [REG_LOG-1:0] sel,
    output reg [2**REG_LOG-1:0][DATA_WIDTH-1:0] final_data
);

    always_ff begin    
        foreach (final_data[j]) begin
            if (j[REG_LOG-1:0] == sel) begin
                final_data[j] = new_data;
            end else begin 
                final_data[j] = data[j];
            end
        end
    end
endmodule