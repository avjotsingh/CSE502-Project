module mem_control (
    input wire clk,
    input wire reset,
    input wire branch_in,                       // control signal -> whether or not branch is taken
    input wire mem_read_in,                     // control signal -> whether or not to read from memory
    input wire mem_write_in,                    // control signal -> whether or not to write to memory
    
    output wire branch_out,
    output wire mem_read_out,
    output wire mem_write_out
);

    // Internal registers to store values
    logic branch;
    logic mem_read;
    logic mem_write;

    // Sequential logic to update registers on every clock cycle
    always_ff @(posedge clk) begin
        if (reset) begin
            branch      <= '0;   // Reset all registers to zero
            mem_read    <= '0;
            mem_write   <= '0;
        end else begin
            branch      <= branch_in;
            mem_read    <= mem_read_in;
            mem_write   <= mem_write_in;
        end
    end

    // Continuous assignments to output the register values
    always_comb begin
        branch_out          = branch
        mem_read_out        = mem_read;
        mem_write_out       = mem_write;
    end
endmodule
