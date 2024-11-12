module mux #(
    N = 2, ``````               // Number of inputs
    SEL_WIDTH = $clog2(N)       // Width of the selection bits
    DATA_WIDTH = 64             // Width of each mux line
) (
    input  logic [N-1:0][DATA_WIDTH-1:0] in,
    input  logic [SEL_WIDTH-1:0] sel,
    output logic [31:0] out
);

    always_comb begin
        out = '0;  // Default output
        for (i = 0; i < N; i++) begin
            if (sel == i) begin
                out = in[i];
            end
        end
    end

endmodule
