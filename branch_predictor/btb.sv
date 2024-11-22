module branch_target_buffer #(
    ADDR_WIDTH = 64,        // Width of addresses
    INDEX_WIDTH = 10,       // Number of entries = 2^INDEX_WIDTH
    TAG_WIDTH = ADDR_WIDTH - INDEX_WIDTH
) (
    input wire clk,
    input wire reset,
    input wire [ADDR_WIDTH-1:0] pc_if,                      // Program Counter from IF stage
    input wire [ADDR_WIDTH-1:0] pc_ex,                      // Program counter from EX stage
    input wire branch_taken_ex,                             // Branch decision from EX stage
    input wire [ADDR_WIDTH-1:0] target_addr_ex,             // Target address for branch from EX stage
    
    output wire [ADDR_WIDTH-1:0] predicted_target,          // Predicted target address for IF stage
    output wire hit                                         // Whether or not BTB hit for IF stage
);

    // Define BTB entry structure
    typedef struct {
        logic [TAG_WIDTH-1:0] tag;
        logic [ADDR_WIDTH-1:0] target;
        logic valid;
    } btb_entry;

    // BTB memory
    btb_entry btb_mem [0:(1 << INDEX_WIDTH) - 1];

    // Extract index and tag from PC
    logic [INDEX_WIDTH-1:0] index_if;
    logic [INDEX_WIDTH-1:0] index_ex;
    logic [TAG_WIDTH-1:0] pc_tag_if;
    logic [TAG_WIDTH-1:0] pc_tag_ex;

    assign index_if = pc_if[INDEX_WIDTH-1:0];
    assign pc_tag_if = pc_if[ADDR_WIDTH-1:INDEX_WIDTH];
    assign index_ex = pc_ex[INDEX_WIDTH-1:0];
    assign pc_tag_ex = pc_ex[ADDR_WIDTH-1:INDEX_WIDTH];

    // Read BTB entry
    btb_entry current_entry;

    // Predict target
    always_comb begin
        current_entry = btb_mem[index_if];

        if (pc_if == pc_ex && branch_taken) begin                   // Forwarding condition, if btb entry from EX stage is being updated at the same as a read from IF stage
            predicted_target             = target_addr_ex;
            hit                          = 1'b1;
        end else if (current_entry.valid && (current_entry.tag == pc_tag_if)) begin
            predicted_target = current_entry.target;
            hit = 1'b1;
        end else begin
            predicted_target = '0;
            hit = 1'b0;
        end
    end

    // Update BTB on branch taken
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            foreach (btb_mem[i]) begin
                btb_mem[i].valid        <= '0;
            end
        end else if (branch_taken) begin
            btb_mem[index_ex].tag          <= pc_tag_ex;
            btb_mem[index_ex].target       <= target_addr_ex;
            btb_mem[index_ex].valid        <= 1'b1;
        end
    end
endmodule
