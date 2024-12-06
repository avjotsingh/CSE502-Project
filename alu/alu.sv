module alu #(
    DATA_WIDTH = 64,
    WORD_LENGTH = 32,
    ALU_OP_WIDTH = 7,
    ALU_FUNC3_WIDTH = 3,
    ALU_FUNC7_WIDTH = 7
) (
    input wire [ALU_FUNC7_WIDTH-1:0] alu_op,
    input wire [ALU_FUNC3_WIDTH-1:0] func3,
    input wire [ALU_FUNC7_WIDTH-1:0] func7,
    input wire [DATA_WIDTH-1:0] data1,              // data1 is either the register value or PC (for jal, jalr, lui, and auipc)
    input wire [DATA_WIDTH-1:0] data2,              // data2 is either the register value or the sign-extended immediate

    output [DATA_WIDTH-1:0] alu_res,
    output branch_decision
);

    logic signed [DATA_WIDTH - 1 : 0] signed_data1, signed_data2;
    logic [ALU_FUNC3_WIDTH+ALU_FUNC7_WIDTH+1:0] func;
    logic [5:0] shamt_6;
    logic [4:0] shamt_5;
    logic [WORD_LENGTH-1:0] data1_w, data2_w;
    
    logic [DATA_WIDTH-1:0] res;
    logic decision;
    logic [WORD_LENGTH-1:0] temp;

    always_comb begin
        signed_data1 = signed'(data1);
        signed_data2 = signed'(data2);
        func = {1'b0, func3, 1'b0, func7};
        shamt_6 = data2[5:0];
        shamt_5 = data2[4:0];
        data1_w = data1[WORD_LENGTH-1:0];
        data2_w = data2[WORD_LENGTH-1:0];
    end

    assign alu_res = res;
    assign branch_decision = decision;

    always_comb begin
        res = 0;
        decision = 0;
        case (alu_op)
            7'b0110011, 7'b0010011:
                case (func)
                    // RV32I
                    12'h000: res = data1 + data2;                                                   // add, addi
                    12'h020: res = data1 - data2;                                                   // sub
                    12'h400: res = data1 ^ data2;                                                   // xor, xori
                    12'h600: res = data1 | data2;                                                   // or, ori
                    12'h700: res = data1 & data2;                                                   // and, andi
                    12'h100: res = data1 << shamt_6;                                                // sll, slli
                    12'h500: res = data1 >> shamt_6;                                                // srl, srli
                    12'h520: res = signed_data1 >>> shamt_6;                                        // sra, srai
                    12'h200: res = (signed_data1 < signed_data2) ? 1 : 0;                           // slt, slti
                    12'h300: res = (data1 < data2) ? 1 : 0;                                         // sltu, sltiu
                    
                    // RV32M
                    12'h001: res = data1 * data2;                                                   // mul
                    12'h101: res = (signed_data1 * signed_data2) >> DATA_WIDTH;                     // mulh
                    12'h201: res = (signed_data1 * data2) >> DATA_WIDTH;                            // mulhsu
                    12'h301: res = (data1 * data2) >> DATA_WIDTH;                                   // mulhu
                    12'h401: res = signed_data1 / signed_data2;                                     // div
                    12'h501: res = data1 / data2;                                                   // divu
                    12'h601: res = signed_data1 % signed_data2;                                     // rem
                    12'h701: res = data1 % data2;                                                   // remu
                endcase
                 
            7'b0000011, 7'b0100011:
                // load and store instructions (only compute the effective address)
                // RV32I: lb, lh, lw, lbu, lhu, sb, sh, sw
                // RV64I: lwu, ld, sd
                res = data1 + data2;

            7'b1100011:
                case (func)
                    // RV32I
                    12'h000: decision = data1 == data2;                                          // beq
                    12'h100: decision = data1 != data2;                                          // bne
                    12'h400: decision = signed_data1 < signed_data2;                             // blt
                    12'h500: decision = signed_data1 >= signed_data2;                            // bge
                    12'h600: decision = data1 < data2;                                           // bltu
                    12'h700: decision = data1 >= data2;                                          // bgeu
                endcase

            7'b1101111, 7'b1100111:
                // RV32I
                res = data1 + 4;                                                                    // jal, jalr
                decision = 1'b1;
            
            7'b0110111:
                // RV32I
                res = data2;                                                                        // lui
            
            7'b0010111:
                // RV32I
                res = data1 + data2;                                                                // auipc
            
            7'b0111011, 7'b0011011:
                case (func)
                    // RV64I
                    12'h000: begin                                                                  // addw, addiw
                        temp = data1_w + data2_w;
                        res = signed'(temp[WORD_LENGTH-1:0]);
                    end
                    12'h020: begin                                                                  // subw
                        temp = data1_w - data2_w;
                        res = signed'(temp[WORD_LENGTH-1:0]);
                    end
                    12'h100: begin                                                                  // sllw, slliw
                        temp = data1_w << shamt_5;
                        res = signed'(temp[WORD_LENGTH-1:0]);    
                    end                
                    12'h500: begin                                                                  // srlw, srliw
                        temp = data1_w >> shamt_5;
                        res = signed'(temp[WORD_LENGTH-1:0]);
                    end
                    12'h520: begin                                                                  // sraw, sraiw
                        temp = signed'(data1_w) >>> shamt_5;
                        res = signed'(temp[WORD_LENGTH-1:0]);
                    end
                endcase
        endcase
    end
endmodule