module hazard_detector #(
    REG_ID_WIDTH = 5
) (
    input wire mem_read,
    input wire [REG_ID_WIDTH-1:0] dest,
    input wire [REG_ID_WIDTH-1:0] id_ex_reg1,
    input wire [REG_ID_WIDTH-1:0] id_ex_reg2,
    output wire stall
);

    logic stall_int;
    assign stall = stall_int;

    always_comb begin
        stall_int = '0;

        if (mem_read && (dest == id_ex_reg1 || dest == id_ex_reg2)) stall_int = '1;
    end
endmodule