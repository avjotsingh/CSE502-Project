module mem_wb_control (
    input wire clk,
    input wire reset,
    input wire reg_write_in,                    // control signal -> whether or not to write back to register file
    input wire mem_to_reg_in,                   // control signal -> whether writeback value comes from memory or ALU result
  
    output write reg_write_out,
    output wire mem_to_reg_out,
);

    // Internal registers to store values
    logic reg_write;
    logic mem_to_reg;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            reg_write   <= '0;   // Reset all registers to zero
            mem_to_reg  <= '0;
        end else begin
            reg_write   <= reg_write_in;
            mem_to_reg  <= mem_to_reg_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        reg_write_out   = reg_write;
        mem_to_reg_out  = mem_to_reg;
    end
endmodule
