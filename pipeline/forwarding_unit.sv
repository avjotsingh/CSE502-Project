module forwarding_unit #(
    parameter int REG_ID_WIDTH = 5
) (
    input wire [REG_ID_WIDTH-1:0] id_ex_reg1,
    input wire [REG_ID_WIDTH-1:0] id_ex_reg2,
    input wire ex_mem_reg_write,
    input wire [REG_ID_WIDTH-1:0] ex_mem_dest,
    input wire mem_wb_reg_write,
    input wire [REG_ID_WIDTH-1:0] mem_wb_dest,

    output wire [1:0] forward1,
    output wire [1:0] forward2
);

    // Hazard signals
    logic ex_hazard1;
    logic ex_hazard2;
    logic mem_hazard1;
    logic mem_hazard2;

    // Intermediate signals for outputs
    logic [1:0] forward1_int;
    logic [1:0] forward2_int;

    // Assign outputs
    assign forward1 = forward1_int;
    assign forward2 = forward2_int;

    always_comb begin
        // Initialize hazards
        ex_hazard1   = 0;
        ex_hazard2   = 0;
        mem_hazard1  = 0;
        mem_hazard2  = 0;

        // Initialize forwarding signals
        forward1_int = 2'b00;
        forward2_int = 2'b00;

        // Check hazards for reg1
        if (mem_wb_reg_write && mem_wb_dest != 0 && mem_wb_dest == id_ex_reg1) begin
            mem_hazard1 = 1;
        end
        if (ex_mem_reg_write && ex_mem_dest != 0 && ex_mem_dest == id_ex_reg1) begin
            ex_hazard1 = 1;
        end

        // Check hazards for reg2
        if (mem_wb_reg_write && mem_wb_dest != 0 && mem_wb_dest == id_ex_reg2) begin
            mem_hazard2 = 1;
        end
        if (ex_mem_reg_write && ex_mem_dest != 0 && ex_mem_dest == id_ex_reg2) begin
            ex_hazard2 = 1;
        end

        // Forwarding logic for reg1
        if (ex_hazard1)
            forward1_int = 2'b10;
        else if (mem_hazard1)
            forward1_int = 2'b01;

        // Forwarding logic for reg2
        if (ex_hazard2)
            forward2_int = 2'b10;
        else if (mem_hazard2)
            forward2_int = 2'b01;
    end
endmodule