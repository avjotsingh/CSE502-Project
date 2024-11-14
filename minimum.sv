module minimum
//this module outputs the position of the lowest value 1 in the input array
#(
    LOG_INPUTS = 1
)
(
    input wire [2**LOG_INPUTS-1:0] in,
    output wire [LOG_INPUTS-1:0] out
);
    wire unsigned [$size(out)-1:0] i;
    always_comb begin
        out = 0;
        i = 0;
        do begin
            out = in[i] == 0 ? i : out;
            i = i+1; 
        end while (i != 0);
    end
endmodule