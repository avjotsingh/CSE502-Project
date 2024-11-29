# file: test_mux.py
import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_decoder(dut):
    # Test case 1: R-type
    dut.instr.value = 0b00000000010001100000000100110011
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b0110011, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0b00010, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0b000, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0b01100, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0b00100, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0b0000000, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0x0, f"got imm {dut.imm.value}"
    assert dut.alu_src == 0, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 1, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 1, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 2: I-type (arithmetic)
    dut.instr.value = 0b11110000010001100000000100010011
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b0010011, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0b00010, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0b000, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0b01100, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0x0, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0xffffffffffffff04, f"got imm {dut.imm.value}"
    assert dut.alu_src == 1, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 1, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 1, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 3: I-type (loads)
    dut.instr.value = 0b00000000010001100000000100000011
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b0000011, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0b00010, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0b000, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0b01100, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0x0, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0x4, f"got imm {dut.imm.value}"
    assert dut.alu_src == 1, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 1, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 1, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 0, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 4: S-type (stores)
    dut.instr.value = 0b10000000010001100100000100100011
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b0100011, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0x0, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0b100, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0b01100, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0b00100, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0xfffffffffffff802, f"got imm {dut.imm.value}"
    assert dut.alu_src == 1, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 1, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 0, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 0, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 5: B-type (branches)
    dut.instr.value = 0b01000000010001100101000101100011
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b1100011, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0x0, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0b101, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0b01100, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0b00100, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0x402, f"got imm {dut.imm.value}"
    assert dut.alu_src == 0, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 0, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 0, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 6: J-type (jal)
    dut.instr.value = 0b01000000010001100101000101101111
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b1101111, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0b00010, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0x0, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0x0, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0x0, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0x65404, f"got imm {dut.imm.value}"
    assert dut.reg_to_pc == 1, f"got reg_to_pc {dut.reg_to_pc.value}"
    assert dut.alu_src == 1, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 1, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 1, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 6: U-type (lui)
    dut.instr.value = 0b01000000010001100101000100110111
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b0110111, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0b00010, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0x0, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0x0, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0x0, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0x40465000, f"got imm {dut.imm.value}"
    assert dut.reg_to_pc == 1, f"got reg_to_pc {dut.reg_to_pc.value}"
    assert dut.alu_src == 1, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 1, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 1, f"got mem_to_reg {dut.mem_to_reg.value}"

    # Test case 6: U-type (auipc)
    dut.instr.value = 0b01000000010001100101000100010111
    await Timer(1, units="ns")
    assert dut.alu_op.value == 0b0010111, f"got opcode {dut.alu_op.value}"
    assert dut.rd.value == 0b00010, f"got rd {dut.rd.value}"
    assert dut.func3.value == 0x0, f"got func3 {dut.func3.value}"
    assert dut.rs1.value == 0x0, f"got rs1 {dut.rs1.value}"
    assert dut.rs2.value == 0x0, f"got rs2 {dut.rs2.value}"
    assert dut.func7.value == 0x0, f"got func7 {dut.func7.value}"
    assert dut.imm.value == 0x40465000, f"got imm {dut.imm.value}"
    assert dut.reg_to_pc == 1, f"got reg_to_pc {dut.reg_to_pc.value}"
    assert dut.alu_src == 1, f"got alu_src {dut.alu_src.value}"
    assert dut.mem_read == 0, f"got mem_read {dut.mem_read.value}"
    assert dut.mem_write == 0, f"got mem_write {dut.mem_write.value}"
    assert dut.reg_write == 1, f"got reg_write {dut.reg_write.value}"
    assert dut.mem_to_reg == 1, f"got mem_to_reg {dut.mem_to_reg.value}"

