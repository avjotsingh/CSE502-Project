import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_minimum(min):
    min.candidates.value = 0b11
    await Timer(1, units="ns")
    assert min.out.value == 1

    min.candidates.value = 0b10
    await Timer(1, units="ns")
    assert min.out.value == 1

    min.candidates.value = 0b01
    await Timer(1, units="ns")
    assert min.out.value == 0

    min.candidates.value = 0b00
    await Timer(1, units="ns")
    assert min.out.value == 0