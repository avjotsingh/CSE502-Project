module minimum
//this module outputs the position of the lowest value 1 in the input array
//tested correctly!
#(
    LOG_INPUTS = 1
)
(
    input wire [2**LOG_INPUTS-1:0] in,
    output wire [LOG_INPUTS-1:0] out
);
    wire [$size(out)-1:0] i;
    
    always_comb begin
        i = 0;
        out = 0;
        do begin
            out = in[i] ? i : out;
            i = i+1; 
        end while (i != 0);
    end
endmodule

//1001 -> 11
//1111 -> 11
//0011 -> 01
//0010 -> 01
//0001 -> 00

//0000 -> 00