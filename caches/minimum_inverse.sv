module minimum_inverse
//this module outputs the position of the lowest value 1 in the input array
#(
    LOG_INPUTS = 1
)
(
    input wire [LOG_INPUTS-1:0] in,
    output wire [2**LOG_INPUTS-1:0] out
);
    wire unsigned [$size(out)-1:0] i;
    always_comb begin
        out = 2**in;
    end
endmodule