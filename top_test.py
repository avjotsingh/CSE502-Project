import cocotb
from cocotb.triggers import Timer

async def tick_tock(top):
    await Timer(1, units="ns")
    top.clk.value = 1
    await Timer(1, units="ns")
    top.clk.value = 0

@cocotb.test()
async def test_top(top):
    top.reset.value = 1
    await tick_tock(top)
    top.reset.value = 0
    await tick_tock(top)
    await tick_tock(top)
    await tick_tock(top)