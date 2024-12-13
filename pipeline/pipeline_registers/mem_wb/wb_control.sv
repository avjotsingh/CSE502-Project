module wb_control (
    input wire clk,
    input wire reset,
    input wire flush,
    input wire stall,
    input wire is_ecall_in,                     // control signal -> is ecall?
    input wire reg_write_in,                    // control signal -> whether or not to write back to register file (0 for no writeback, 1 for writeback)
    input wire mem_to_reg_in,                   // control signal -> whether writeback value comes from memory or ALU result (0 for memory, 1 for ALU)

    output wire is_ecall_out,
    output wire reg_write_out,
    output wire mem_to_reg_out
);

    // Internal registers to store values
    logic reg_write;
    logic mem_to_reg;
    logic is_ecall;

    assign reg_write_out   = reg_write;
    assign mem_to_reg_out  = mem_to_reg;
    assign is_ecall_out    = is_ecall;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset || flush) begin
            reg_write   <= '0;   // Reset all registers to zero
            mem_to_reg  <= '0;
            is_ecall    <= '0;
        end else if (!stall) begin
            reg_write   <= reg_write_in;
            mem_to_reg  <= mem_to_reg_in;
            is_ecall    <= is_ecall_in;
        end
    end
endmodule
