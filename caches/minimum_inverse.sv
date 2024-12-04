module minimum_inverse
//this module outputs the position of the lowest value 1 in the input array
#(
    LOG_INPUTS = 1
)
(
    input wire [LOG_INPUTS-1:0] sel,
    output reg [2**LOG_INPUTS-1:0] broadcast
);
    logic [$size(broadcast)-1:0] i;
    always_comb begin
        broadcast = 2**sel;
    end
endmodule