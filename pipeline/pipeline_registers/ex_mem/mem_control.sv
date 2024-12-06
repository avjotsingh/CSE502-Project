module mem_control (
    input wire clk,
    input wire reset,
    input wire flush,
    input wire stall,
    input wire mem_read_in,                     // control signal -> whether or not to read from memory
    input wire mem_write_in,                    // control signal -> whether or not to write to memory
    
    output wire mem_read_out,
    output wire mem_write_out
);

    // Internal registers to store values
    logic mem_read;
    logic mem_write;

    assign mem_read_out        = mem_read;
    assign mem_write_out       = mem_write;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset || flush) begin
            mem_read    <= '0;      // Reset all registers to zero
            mem_write   <= '0;
        end else if (!stall) begin
            mem_read    <= mem_read_in;
            mem_write   <= mem_write_in;
        end
    end
endmodule
