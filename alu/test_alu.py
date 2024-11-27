# file: test_mux.py
import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_mux_basic(alu):
    # Test case 1: add
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x0
    alu.func7.value = 0x0
    alu.data1.value = 0x00000000ffffffff
    alu.data2.value = 0xffffffff00000001
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0x0, f"Failed for add, got {alu.alu_res.value}"

    # Test case 2: sub
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x0
    alu.func7.value = 0x20
    alu.data1.value = 0xffffffff00000000
    alu.data2.value = 0x00000000ffffffff
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xfffffffe00000001, f"Failed for sub, got {alu.alu_res.value}"

    # Test case 3: xor
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x4
    alu.func7.value = 0x0
    alu.data1.value = 0xf0f0ffff00000000
    alu.data2.value = 0x00000000ffffffff
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xf0f0ffffffffffff, f"Failed for xor, got {alu.alu_res.value}"

    # Test case 4: sll
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x1
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeefdeadbeef
    alu.data2.value = 0x0000000000000020
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xdeadbeef00000000, f"Failed for sll, got {alu.alu_res.value}"

    # Test case 5: srl
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x5
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeefdeadbeef
    alu.data2.value = 0x0000000000000020
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xdeadbeef, f"Failed for srl, got {alu.alu_res.value}"

    # Test case 6: sra
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x5
    alu.func7.value = 0x20
    alu.data1.value = 0xfeadbeeffeadbeed
    alu.data2.value = 0x0000000000000008
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xfffeadbeeffeadbe, f"Failed for sra, got {alu.alu_res.value}"

    # Test case 7: slt
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x2
    alu.func7.value = 0x0
    alu.data1.value = 0xf0f0ffff00000000
    alu.data2.value = 0x00000000ffffffff
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0x1, f"Failed for slt, got {alu.alu_res.value}"

    # Test case 8: sltu
    alu.alu_op.value = 0b0110011
    alu.func3.value = 0x3
    alu.func7.value = 0x20
    alu.data1.value = 0xffffffffffffffff
    alu.data2.value = 0x0000000000000001
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0x0, f"Failed for sltu, got {alu.alu_res.value}"

    # Test case 9: lhu
    alu.alu_op.value = 0b0000011
    alu.func3.value = 0x5
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeefdeadbeef
    alu.data2.value = 0xffffffffffffff9c
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xdeadbeefdeadbe8b, f"Failed for lhu, got {alu.alu_res.value}"

    # Test case 10: sw
    alu.alu_op.value = 0b0100011
    alu.func3.value = 0x2
    alu.func7.value = 0x0
    alu.data1.value = 0x00000000ffffffff
    alu.data2.value = 0x000000000000000f
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0x10000000e, f"Failed for sw, got {alu.alu_res.value}"

    # Test case 11: beq
    alu.alu_op.value = 0b1100011
    alu.func3.value = 0x0
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeefdeadbeef
    alu.data2.value = 0xdeadbeefdeadbeef
    await Timer(1, units="ns")
    assert alu.branch_decision.value == 0x1, f"Failed for beq, got {alu.branch_decision.value}"

    # Test case 12: bne
    alu.alu_op.value = 0b1100011
    alu.func3.value = 0x1
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeef
    alu.data2.value = 0xdeadbeef
    await Timer(1, units="ns")
    assert alu.branch_decision.value == 0x0, f"Failed for bne, got {alu.branch_decision.value}"

    # Test case 13: blt
    alu.alu_op.value = 0b1100011
    alu.func3.value = 0x4
    alu.func7.value = 0x0
    alu.data1.value = 0xfffffffffffffff0
    alu.data2.value = 0x000000000000000f
    await Timer(1, units="ns")
    assert alu.branch_decision.value == 0x1, f"Failed for blt, got {alu.branch_decision.value}"
    
    # Test case 14: bge
    alu.alu_op.value = 0b1100011
    alu.func3.value = 0x5
    alu.func7.value = 0x0
    alu.data1.value = 0xfffffffffffffff0
    alu.data2.value = 0x000000000000000f
    await Timer(1, units="ns")
    assert alu.branch_decision.value == 0x0, f"Failed for bge, got {alu.branch_decision.value}"

    # Test case 15: bltu
    alu.alu_op.value = 0b1100011
    alu.func3.value = 0x6
    alu.func7.value = 0x0
    alu.data1.value = 0xfffffffffffffff0
    alu.data2.value = 0x000000000000000f
    await Timer(1, units="ns")
    assert alu.branch_decision.value == 0x0, f"Failed for bltu, got {alu.branch_decision.value}"

    # Test case 16: bgeu
    alu.alu_op.value = 0b1100011
    alu.func3.value = 0x7
    alu.func7.value = 0x0
    alu.data1.value = 0xfffffffffffffff0
    alu.data2.value = 0x000000000000000f
    await Timer(1, units="ns")
    assert alu.branch_decision.value == 0x1, f"Failed for bgeu, got {alu.branch_decision.value}"

    # Test case 17: addw
    alu.alu_op.value = 0b0111011
    alu.func3.value = 0x0
    alu.func7.value = 0x0
    alu.data1.value = 0xfffffffffeadbee0
    alu.data2.value = 0xffffffff0000000f
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xfffffffffeadbeef, f"Failed for bgeu, got {alu.alu_res.value}"

    # Test case 18: subw
    alu.alu_op.value = 0b0111011
    alu.func3.value = 0x0
    alu.func7.value = 0x20
    alu.data1.value = 0x0000000000000008
    alu.data2.value = 0x00000000000000f0
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xffffffffffffff18, f"Failed for bgeu, got {alu.alu_res.value}"

    # Test case 19: sllw
    alu.alu_op.value = 0b0111011
    alu.func3.value = 0x1
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeefdeadfeef
    alu.data2.value = 0x0000000000000010
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xfffffffffeef0000, f"Failed for bgeu, got {alu.alu_res.value}"

    # Test case 20: srlw
    alu.alu_op.value = 0b0111011
    alu.func3.value = 0x5
    alu.func7.value = 0x0
    alu.data1.value = 0xdeadbeefdeadbeef
    alu.data2.value = 0x0000000000000010
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xdead, f"Failed for bgeu, got {alu.alu_res.value}"

    # Test case 21: sraw
    alu.alu_op.value = 0b0111011
    alu.func3.value = 0x5
    alu.func7.value = 0x20
    alu.data1.value = 0xfeadbeeffeadbeef
    alu.data2.value = 0x0000000000000010
    await Timer(1, units="ns")
    assert alu.alu_res.value == 0xfffffffffffffead, f"Failed for bgeu, got {alu.alu_res.value}"
