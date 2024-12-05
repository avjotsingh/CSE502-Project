import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_minimum_inverse(min):
    min.sel.value = 1
    await Timer(1, units="ns")
    assert min.broadcast.value == 0b10

    min.sel.value = 0
    await Timer(1, units="ns")
    assert min.broadcast.value == 0b01

