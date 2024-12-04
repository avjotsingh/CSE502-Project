import cocotb
from cocotb.triggers import Timer
# 16 0s: 0000000000000000

# TODO: make each Test it's own function

async def tick_tock(bus):
    await Timer(1, units="ns")
    bus.clk.value = 1
    await Timer(1, units="ns")
    bus.clk.value = 0

@cocotb.test()
async def test_1(bus):
    # Test 1: reset state
    bus.reset.value = 1
    await tick_tock(bus)
    assert bus.state.value == 0
    assert bus.bus_valid.value == 0b00
    assert bus.bus_ready.value == 0b00,f"1.should be not ready at all, is {bus.state.value}"

    # TODO: Test 2: IDLE -> IDLE, (0 requests)


    # Test 3: IDLE -> L_ADDR, 1 request
    bus.reset.value = 0
    await tick_tock(bus)
    bus.command_addr.value = 0x00000000000000000123456789abcdef
    bus.command_valid.value = 0b10
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b10
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 1
    assert bus.state.value == 0x1,f"3.should be L_ADDR, is {bus.state.value}"
    #insert testing output to memory as part of test 3

    # Test 4: L_ADDR -> L_ADDR
    # Test 5: L_ADDR -> L_READ
    # Test 6: L_READ -> L_READ -> L_READ -> ... -> L_DONE
    # Test 7: L_DONE -> L_DONE (might be unneccesary)
    # Test 8: L_DONE -> IDLE
    # Test 9: IDLE -> S_ADDR, 1 request
    # Test 10: S_ADDR -> S_ADDR
    # Test 11: S_WRITE -> S_WRITE -> S_WRITE -> ... -> IDLE
    # Test 12: IDLE -> L_ADDR, 2 requests
    # Test 13: IDLE -> S_ADDR, 2 requests