// TODO: add control signals for loading/storing byte/word etc.
// TODO: add control signals for choosing between rs1 and pc (for auipc, and jalr)

module decoder #(
    DATA_WIDTH = 64,
    INSTR_WIDTH = 32,
    ALU_OP_WIDTH = 7,
    ALU_FUNC3_WIDTH = 3,
    ALU_FUNC7_WIDTH = 7,
    REG_ID_WIDTH = 5
) (
    input wire [INSTR_WIDTH-1:0] instr,
    output wire [ALU_OP_WIDTH-1:0] alu_op,                                                  // ALU opcode
    output wire [ALU_FUNC3_WIDTH-1:0] func3,                                                // Func3 field for ALU
    output wire [ALU_FUNC7_WIDTH-1:0] func7,                                                // Func7 field for ALU
    output wire [DATA_WIDTH-1:0] imm,                                                        // Immediate for ALU
    output wire [REG_ID_WIDTH-1:0] rs1,                                                     // Source register 1
    output wire [REG_ID_WIDTH-1:0] rs2,                                                     // Source register 2
    output wire [REG_ID_WIDTH-1:0] rd,                                                      // Destination register
    output wire reg_to_pc,                                                                  // ALU control signal -> chooses b/w register 1 value and PC (0 for register value, 1 for PC)
    output wire alu_src,                                                                    // ALU control signal -> chooses b/w register 2 value and immediate (0 for register value, 1 for immediate)
    output wire mem_read,                                                                   // MEM control signal -> read memory?
    output wire mem_write,                                                                  // MEM control signal -> write memory?
    output wire reg_write,                                                                  // WB control signal -> write to register?
    output wire mem_to_reg                                                                  // WB control signal -> value being written comes from memory or ALU result? (0 for memory, 1 for ALU res)
);

    logic [INSTR_WIDTH-1:0] instr_;
    logic [ALU_OP_WIDTH-1:0] alu_op_;
    logic [ALU_FUNC3_WIDTH-1:0] func3_;
    logic [ALU_FUNC7_WIDTH-1:0] func7_;
    logic [DATA_WIDTH-1:0] imm_;
    logic [REG_ID_WIDTH-1:0] rs1_;
    logic [REG_ID_WIDTH-1:0] rs2_;
    logic [REG_ID_WIDTH-1:0] rd_;
    logic reg_to_pc_;
    logic alu_src_;
    logic mem_read_;
    logic mem_write_;
    logic reg_write_;
    logic mem_to_reg_;

    assign alu_op = alu_op_;
    assign func3 = func3_;
    assign func7 = func7_;
    assign imm = imm_;
    assign rs1 = rs1_;
    assign rs2 = rs2_;
    assign rd = rd_;
    assign reg_to_pc = reg_to_pc_;
    assign alu_src = alu_src_;
    assign mem_read = mem_read_;
    assign mem_write = mem_write_;
    assign reg_write = reg_write_;
    assign mem_to_reg = mem_to_reg_;
    
    always_comb begin
        instr_ = instr;
        alu_op_ = instr[6:0];
        func3_ = 0;
        func7_ = 0;
        imm_ = 0;
        rs1_ = 0;
        rs2_ = 0;
        rd_ = 0;
        reg_to_pc_ = 0;
        alu_src_ = 0;
        mem_read_ = 0;
        mem_write_ = 0;
        reg_write_ = 0;
        mem_to_reg_ = 0;

        case (alu_op)
            7'b0110011, 7'b0111011: begin
                // RV32I R-type instructions (add, sub, xor, or, and, sll, srl, sra, slt, sltu)
                // RV32M R-type instructions (mul, mulh, mulhsu, mulhu, div, divu, rem, remu)
                // RV64I R-type instructions (addw, subw, sllw, srlw, sraw)
                rd_ = instr_[11:7];
                func3_ = instr_[14:12];
                rs1_ = instr_[19:15];
                rs2_ = instr_[24:20];
                func7_ = instr_[31:25];

                reg_write_ = 1;
                mem_to_reg_ = 1;
            end
            7'b0010011, 7'b0011011: begin
                // RV32I I-type instructions (addi, xori, ori, andi, slli, srli, srai, slti, sltiu)
                // RV64I I-type instructions (addiw, slliw, srliw, sraiw)
                rd_ = instr_[11:7];
                func3_ = instr_[14:12];
                rs1_ = instr_[19:15];
                imm_ = { {52{instr_[31]}}, instr_[31:20]};
                if (func3_ == 3'b001 || func3_ == 3'b101)
                    func7_ = imm_[11:5];
                
                alu_src_ = 1;
                reg_write_ = 1;
                mem_to_reg_ = 1;
            end
            7'b0000011, 7'b1100111: begin
                // RV32I I-type instructions (lb, lh, lw, lbu, lhu)
                // RV32I I-type instruction (jalr)
                // RV64I I-type instructions (lwu, ld)
                rd_ = instr_[11:7];
                func3_ = instr_[14:12];
                rs1_ = instr_[19:15];
                imm_ = { {52{instr_[31]}}, instr_[31:20]};
                
                reg_to_pc_ = alu_op != 7'b1100111 ? 0 : 1;
                alu_src_ = 1;
                mem_read_ = alu_op != 7'b1100111 ? 1 : 0;
                reg_write_ = 1;
                mem_to_reg_ = 0;
            end
            7'b0100011: begin
                // RV32I S-type instructions (sb, sh, sw)
                // RV64I S-type instruction (sd)
                imm_ = { {52{instr_[31]}}, instr_[31:25], instr_[11:7] };
                func3_ = instr_[14:12];
                rs1_ = instr_[19:15];
                rs2_ = instr_[24:20];

                alu_src_ = 1;
                mem_write_ = 1;
            end
            7'b1100011: begin
                // RV32I B-type instructions (beq, bne, blt, bge, bltu, bgeu)
                imm_ = { {52{instr_[31]}}, instr_[7], instr_[30:25], instr_[11:8], 1'b0 };
                func3_ = instr_[14:12];
                rs1_ = instr_[19:15];
                rs2_ = instr_[24:20];
            end
            7'b1101111: begin
                // RV32I J-type instruction (jal)
                rd_ = instr_[11:7];
                imm_ = { {44{instr_[31]}}, instr_[19:12], instr_[20], instr_[30:21], 1'b0 };

                reg_to_pc_ = 1;
                alu_src_ = 1;
                reg_write_ = 1;
                mem_to_reg_ = 1;
            end
            7'b0110111, 7'b0010111: begin
                // RV32I U-type instructions (lui, auipc)
                rd_ = instr_[11:7];
                imm_ = { {32{instr_[31]}}, instr_[31:12], {12{1'b0}}};

                reg_to_pc_ = 1;
                alu_src_ = 1;
                reg_write_ = 1;
                mem_to_reg_ = 1;
            end
            7'b1110011: begin
                // RV32I I-type instructions (ecall, ebreak)
                func3_ = instr_[14:12];
                imm_ = { {52{instr_[31]}}, instr_[31:20]};
                func7_ = imm_[ALU_FUNC7_WIDTH-1:0];
            end
            default: ;
        endcase
    end
endmodule

