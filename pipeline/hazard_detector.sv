module hazard_detector #(
    DATA_WIDTH = 64,
    REG_ID_WIDTH = 5
) (
    input wire mem_read_ex,
    input wire [REG_ID_WIDTH-1:0] rd_ex,                                        // destination register from EX stage
    input wire [REG_ID_WIDTH-1:0] reg1_id,                                      // register source 1 from ID stage
    input wire [REG_ID_WIDTH-1:0] reg2_id,                                      // register source 2 from ID stage
    input wire branch_dec_ex,                                                   // branch decision from the EX stage
    input wire [DATA_WIDTH-1:0] target_ex,                                      // target PC from EX stage
    input wire [DATA_WIDTH-1:0] pc_id,                                          // PC value from ID stage
    output wire mem_hazard,                                                     // mem data hazard? (memory loads into a destination which the younger instr reads from)
    output wire mispredict,                                                     // branch misprection?
);

    logic mem_hazard_;
    logic mispredict_;
    
    assign mem_hazard = mem_hazard_;
    assign mispredict = mispredict_;

    always_comb begin
        mem_hazard_ = 1'b0;
        mispredict_ = 1'b0;

        if (mem_read_ex && (rd_ex == reg1_id || rd_ex == reg2_id)) begin        // data hazard (memory loads to a destination which a younger instr reads from)
            mem_hazard_ = 1'b1;
        end

        else if (branch_dec_ex && (target_ex != pc_id)) begin                   // branch mispredict
            mispredict_ = 1'b1;
        end
    end
endmodule