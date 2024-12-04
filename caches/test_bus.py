import cocotb
from cocotb.triggers import Timer
# 16 0s: 0000000000000000
async def tick_tock(bus, test_no):
    await Timer(1, units="ns")
    bus.clk.value = 1
    await Timer(1, units="ns")
    bus.clk.value = 0

@cocotb.test()
async def test_bus(bus):
    # Test 1: reset state
    bus.reset.value = 1
    await tick_tock(bus,1)
    assert bus.state.value == 0
    assert bus.bus_valid.value == 0b00
    assert bus.bus_ready.value == 0b00,f"1.should be not ready at all, is {bus.state.value}"
    
    # Test 2: choice works correctly
    bus.command_addr.value == 0x00000000000000000123456789abcdef
    bus.command_valid.value == 0b10
    bus.command_store.value == 0b00
    bus.command_rready.value == 0b10
    assert bus.busChoiceOut.value == 1

    bus.reset.value = 0
    await tick_tock(bus,2)
    # Test 3: Idle state -> L_ADDR, 1 request
    bus.reset.value = 0
    await tick_tock(bus,3)
    assert bus.state.value == 0x0
    bus.command_addr.value == 0x00000000000000000123456789abcdef
    bus.command_valid.value == 0b01
    bus.command_store.value == 0b00
    bus.command_rready.value == 0b01
    assert bus.busChoiceOut.value == 1
    await tick_tock(bus,3)
    assert bus.state.value == 0x1,f"3.should be L_ADDR, is {bus.state.value}"
