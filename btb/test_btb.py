import cocotb
from cocotb.regression import TestFactory
from cocotb.triggers import RisingEdge, FallingEdge
from cocotb.clock import Clock

@cocotb.test
async def test_btb(dut):
    # Create a 10 ns clock period
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset the DUT
    dut.reset.value = 1
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    await RisingEdge(dut.clk)

    # Test 1
    dut.pc_if.value = 0x000000001111ffff
    dut.pc_ex.value = 0x000000001111ffe8
    dut.branch_taken_ex.value = 0
    dut.target_addr_ex.value = 0x000000001111fff0
    await RisingEdge(dut.clk)
    assert dut.hit.value == 0, f"got hit {dut.hit.value}"
    assert dut.predicted_target.value == 0x0, f"got target {dut.predicted_target.value}"

    # Test 2
    dut.pc_if.value = 0x000000001111ffff
    dut.pc_ex.value = 0x000000001111ffe8
    dut.branch_taken_ex.value = 1
    dut.target_addr_ex.value = 0x000000002222fff0
    await RisingEdge(dut.clk)
    assert dut.hit.value == 0, f"got hit {dut.hit.value}"
    assert dut.predicted_target.value == 0x0, f"got target {dut.predicted_target.value}"

    # Test 3
    dut.pc_if.value = 0x000000001111ffe8
    dut.pc_ex.value = 0x000000002222ffe8
    dut.branch_taken_ex.value = 0
    dut.target_addr_ex.value = 0x000000002222fff0
    await RisingEdge(dut.clk)
    assert dut.hit.value == 1, f"got hit {dut.hit.value}"
    assert dut.predicted_target.value == 0x000000002222fff0, f"got target {dut.predicted_target.value}"

    # Test 4
    dut.pc_if.value = 0x000000004444ffe8
    dut.pc_ex.value = 0x000000004444ffe8
    dut.branch_taken_ex.value = 1
    dut.target_addr_ex.value = 0x000000005555fff0
    await RisingEdge(dut.clk)
    assert dut.hit.value == 1, f"got hit {dut.hit.value}"
    assert dut.predicted_target.value == 0x000000005555fff0, f"got target {dut.predicted_target.value}"