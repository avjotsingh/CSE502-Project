module btb #(
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

    // BTB memory
    logic [TAG_WIDTH+ADDR_WIDTH:0] btb_mem[0:(1 << INDEX_WIDTH) - 1];

    logic [INDEX_WIDTH-1:0] index_if;
    logic [INDEX_WIDTH-1:0] index_ex;
    logic [TAG_WIDTH-1:0] pc_tag_if;
    logic [TAG_WIDTH-1:0] pc_tag_ex;
    logic [ADDR_WIDTH-1:0] predicted_target_;
    logic hit_;

    assign predicted_target = predicted_target_;
    assign hit = hit_;

    // Extract index and tag from PC
    always_comb begin
        index_if = pc_if[INDEX_WIDTH-1:0];
        pc_tag_if = pc_if[ADDR_WIDTH-1:INDEX_WIDTH];
        index_ex = pc_ex[INDEX_WIDTH-1:0];
        pc_tag_ex = pc_ex[ADDR_WIDTH-1:INDEX_WIDTH];
    end

    // Read BTB entry
    logic [TAG_WIDTH-1:0] current_tag;
    logic [ADDR_WIDTH-1:0] current_target;
    logic current_valid;

    // Predict target
    always_comb begin
        current_valid = btb_mem[index_if][0];
        current_target = btb_mem[index_if][ADDR_WIDTH:1];
        current_tag = btb_mem[index_if][TAG_WIDTH+ADDR_WIDTH:ADDR_WIDTH+1];
        if (pc_if == pc_ex && branch_taken_ex) begin                   // Forwarding condition, if btb entry from EX stage is being updated at the same as a read from IF stage
            predicted_target_             = target_addr_ex;
            hit_                          = 1'b1;
        end else if (current_valid && (current_tag == pc_tag_if)) begin
            predicted_target_ = current_target;
            hit_ = 1'b1;
        end else begin
            predicted_target_ = '0;
            hit_ = 1'b0;
        end
    end

    // Update BTB on branch taken
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            foreach (btb_mem[i]) begin
                btb_mem[i]                  =  {{TAG_WIDTH{1'b0}}, {ADDR_WIDTH{1'b0}}, 1'b0};        // work-around for error due to non-blocking assignment
            end
        end else if (branch_taken_ex) begin
            btb_mem[index_ex]               <= {pc_tag_ex, target_addr_ex, 1'b1};
        end
    end
endmodule
