import cocotb
from cocotb.triggers import Timer
# 16 0s: 0000000000000000

async def tick_tock(bus):
    await Timer(1, units="ns")
    bus.clk.value = 1
    await Timer(1, units="ns")
    bus.clk.value = 0

# Test 1: reset state
@cocotb.test()
async def test_reset(bus):
    bus.reset.value = 1
    await tick_tock(bus)
    assert bus.state.value == 0
    assert bus.bus_valid.value == 0b00
    assert bus.bus_ready.value == 0b00,f"should be not ready at all, is {bus.state.value}"

#Test 2: IDLE -> IDLE, (0 requests)
@cocotb.test()
async def test_idle_idle(bus):
    bus.reset.value = 1
    await tick_tock(bus)
    bus.reset.value = 0
    bus.command_valid.value = 0b00
    bus.command_addr.value = 0x12345648978965313
    bus.command_store.value = 0b11 
    await tick_tock(bus)
    assert bus.state.value == 0
    
# Test 3: IDLE -> L_ADDR, 1 request
@cocotb.test()
async def test_idle_laddr(bus):
    bus.reset.value = 1
    await tick_tock(bus)
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b10
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b10
    await tick_tock(bus)
    bus.reset.value = 0
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 1
    assert bus.state.value == 0x1,f"should be L_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 1
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 0
    assert bus.m_axi_araddr == 0x0123456789abcdef

    bus.reset.value = 1
    await tick_tock(bus)
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b01
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b01
    await tick_tock(bus)
    bus.reset.value = 0
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 0
    assert bus.addr_buffer == 0x1111111111111111,f"should be 16 1s, is {bus.m_axi_araddr.value}"
    assert bus.state.value == 0x1,f"should be L_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 1
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 0
    assert bus.m_axi_araddr.value == 0x1111111111111111,f"should be 16 1s, is {bus.m_axi_araddr.value}"

# Test 4: L_ADDR -> L_ADDR
@cocotb.test()
async def test_laddr_laddr(bus):
    bus.reset.value = 1
    await tick_tock(bus)
    bus.command_addr.value = 0x00
    bus.command_valid.value = 0b00
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b00
    await tick_tock(bus)
    bus.reset.value = 0
    assert bus.state.value == 0x0
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b01
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b01
    await tick_tock(bus)
    assert bus.state.value == 0x1
    await tick_tock(bus)
    assert bus.state.value == 0x1

# Test 5: L_ADDR -> L_READ
@cocotb.test()
async def test_laddr_lread(bus):
    bus.m_axi_arready.value = 1
    await tick_tock(bus)
    await tick_tock(bus)
    bus.m_axi_arready.value = 0
    assert bus.state.value == 0x2,f"state should be L_READ, is{bus.state.value}"
    assert bus.m_axi_rready.value == 1
# Test 6: L_READ -> L_READ -> L_READ -> ... -> L_DONE
@cocotb.test()
async def test_lread_lread_ldone(bus):
    await tick_tock(bus)
    assert bus.state.value == 0x2,f"state should be L_READ, is{bus.state.value}"
    assert bus.m_axi_rready.value == 1
    bus.command_valid.value = 0b00
    bus.command_store.value = 0b11
    bus.command_rready.value = 0b10
    bus.command_addr.value = 0x0
    await tick_tock(bus)
    assert bus.state.value == 0x2,f"state should be L_READ, is{bus.state.value}"
    assert bus.m_axi_rready.value == 1
    
    bus.command_valid.value = 0b00
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b00
    bus.command_addr.value = 0x0
    await tick_tock(bus)
    assert bus.state.value == 0x2,f"state should be L_READ, is{bus.state.value}"
    assert bus.m_axi_rready.value == 1

    bus.m_axi_rdata.value = 0x3141
    bus.m_axi_rvalid.value = 0x1
    await tick_tock(bus)
    assert bus.offsetCounter.value == 1,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 2,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 3,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 4,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 5,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 6,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 7,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 8,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 9,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 10,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 11,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 12,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 13,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 14,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 15,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    bus.m_axi_rlast.value = 1
    assert bus.offsetCounter.value == 0,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    bus.m_axi_rlast.value = 0
    bus.m_axi_rvalid.value = 0
    bus.m_axi_rdata.value = 0
    assert bus.state.value == 0x3,f"state should be L_DONE, is{bus.state.value}"

# Test 7: L_DONE -> L_DONE (might be unneccesary)
@cocotb.test()
async def test_ldone_ldone(bus):
    assert bus.data_out.value == 0x0000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141,f"should be 16 sets of 3141, is {bus.data_out.value}"
    assert bus.bus_valid.value == 0b01
    await tick_tock(bus)
    assert bus.data_out.value == 0x0000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141,f"should be 16 sets of 3141, is {bus.data_out.value}"
    assert bus.bus_valid.value == 0b01
    assert bus.state.value == 0x3
    await tick_tock(bus)

# Test 8: L_DONE -> IDLE 
@cocotb.test()
async def test_ldone_idle(bus):
    bus.command_rready.value = 0b10
    await tick_tock(bus)
    assert bus.data_out.value == 0x0000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141000000000000314100000000000031410000000000003141,f"should be 16 sets of 3141, is {bus.data_out.value}"
    assert bus.bus_valid.value == 0b01
    assert bus.state.value == 0x3
    bus.command_rready.value = 0b11
    #The other option also works:
    #bus.command_rready.value = 0b01
    await tick_tock(bus)
    assert bus.state.value == 0x0
    #assert bus.data_out.value == 0x0
    assert bus.bus_valid.value == 0b00
    await tick_tock(bus)
    assert bus.state.value == 0x0
    assert bus.data_out.value == 0x0
    assert bus.bus_valid.value == 0b00


# Test 9: IDLE -> S_ADDR, 1 request
@cocotb.test()
async def test_idle_saddr(bus):
    await tick_tock(bus)
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b10
    bus.command_store.value = 0b11
    bus.command_rready.value = 0b00
    bus.data_in.value = 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffcccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
    await tick_tock(bus)
    bus.reset.value = 0
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 1
    assert bus.state.value == 0x4,f"should be S_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 0
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 1
    assert bus.m_axi_awaddr == 0x0123456789abcdef
    assert bus.data_buffer.value == 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff,f"is {bus.data_buffer.value}"

    bus.reset.value = 1
    await tick_tock(bus)
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b01
    bus.command_store.value = 0b11
    bus.command_rready.value = 0b00
    bus.data_in.value = 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffcccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
    await tick_tock(bus)
    bus.reset.value = 0
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 0
    assert bus.state.value == 0x4,f"should be S_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 0
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 1
    assert bus.m_axi_awaddr == 0x1111111111111111
    assert bus.data_buffer.value == 0xcccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc,f"is {bus.data_buffer.value}"

    
# Test 10: S_ADDR -> S_ADDR
@cocotb.test()
async def test_saddr_saddr(bus):
    await tick_tock(bus)
    await tick_tock(bus)
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 0
    assert bus.addr_buffer == 0x1111111111111111,f"should be 16 1s, is {bus.m_axi_araddr.value}"
    assert bus.state.value == 0x4,f"should be S_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 0
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 1
    assert bus.m_axi_araddr.value == 0x1111111111111111,f"should be 16 1s, is {bus.m_axi_araddr.value}"

# Test 11 S_ADDR -> S_WRITE
@cocotb.test()
async def test_saddr_swrite(bus):
    await tick_tock(bus)
    bus.m_axi_awready.value = 1
    await tick_tock(bus)
    assert bus.state.value == 0x5,f"should be S_WRITE, is {bus.state.value}"
# Test 12: S_WRITE -> S_WRITE -> S_WRITE -> ... -> IDLE
@cocotb.test()
async def test_swrite_swrite_idle(bus):
    await tick_tock(bus)
    assert bus.state.value == 0x5,f"should be S_WRITE, is {bus.state.value}"
    assert bus.m_axi_wvalid.value == 1
    bus.command_valid.value = 0b00
    bus.command_store.value = 0b11
    bus.command_rready.value = 0b10
    bus.command_addr.value = 0x0
    await tick_tock(bus)
    assert bus.state.value == 0x5,f"should be S_WRITE, is {bus.state.value}"
    bus.command_valid.value = 0b00
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b00
    bus.command_addr.value = 0x0
    
    bus.m_axi_wready.value = 1
    assert bus.offsetCounter.value == 0,f"offset is {bus.offsetCounter.value}"

    await tick_tock(bus)
    assert bus.state.value == 0x5,f"should be S_WRITE, is {bus.state.value}"
    assert bus.m_axi_wvalid.value == 1

#    bus.m_axi_rdata.value = 0x3141
#    bus.m_axi_rvalid.value = 0x1
    assert bus.offsetCounter.value == 1,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 2,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 3,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 4,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 5,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 6,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 7,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 8,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 9,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 10,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 11,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 12,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 13,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 14,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    assert bus.offsetCounter.value == 15,f"offset is {bus.offsetCounter.value}"
    assert bus.m_axi_wlast.value == 1
    await tick_tock(bus)
    assert bus.offsetCounter.value == 0,f"offset is {bus.offsetCounter.value}"
    await tick_tock(bus)
    bus.m_axi_rlast.value = 0
    bus.m_axi_rvalid.value = 0
    bus.m_axi_rdata.value = 0
    assert bus.state.value == 0x0,f"state should be IDLE, is{bus.state.value}"

# Test 13: IDLE -> L_ADDR, 2 requests
@cocotb.test()
async def test_idle_laddr_multi(bus):
    bus.reset.value = 1
    await tick_tock(bus)
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b11
    bus.command_store.value = 0b00
    bus.command_rready.value = 0b11
    await tick_tock(bus)
    bus.reset.value = 0
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 1
    assert bus.state.value == 0x1,f"3.should be L_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 1
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 0
    assert bus.m_axi_araddr == 0x0123456789abcdef

# Test 14: IDLE -> S_ADDR, 2 requests
@cocotb.test()
async def test_idle_saddr_multi(bus):
    bus.reset.value = 1
    await tick_tock(bus)
    bus.command_addr.value = 0x0123456789abcdef1111111111111111
    bus.command_valid.value = 0b11
    bus.command_store.value = 0b11
    bus.command_rready.value = 0b00
    bus.data_in.value = 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffcccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
    await tick_tock(bus)
    bus.reset.value = 0
    await tick_tock(bus)
    assert bus.busChoiceOut.value == 1
    assert bus.state.value == 0x4,f"should be S_ADDR, is {bus.state.value}"
    assert bus.m_axi_arvalid.value == 0
    assert bus.m_axi_rready.value == 0
    assert bus.m_axi_awvalid.value == 1
    assert bus.m_axi_awaddr == 0x0123456789abcdef
    assert bus.data_buffer.value == 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff,f"is {bus.data_buffer.value}"

@cocotb.test()
async def acsnoop(bus):
    await tick_tock(bus)
    assert bus.invalidate.value == 0
    await tick_tock(bus)
    bus.m_axi_acvalid.value = 1
    bus.m_axi_acaddr.value = 0x123456
    bus.m_axi_acsnoop.value = 0xd
    await tick_tock(bus)
    assert bus.invalidate_buffer.value == 1
    assert bus.invalidate_addr_buffer.value == 0x123456
    assert bus.m_axi_acready.value == 1
    bus.m_axi_acvalid.value = 0
    await tick_tock(bus)
    assert bus.invalidate_buffer.value == 0
    assert bus.invalidate_addr_buffer.value == 0x0
    assert bus.m_axi_acready.value == 0
    await tick_tock(bus)
    bus.m_axi_acsnoop.value = 0xc
    bus.m_axi_acvalid.value = 1
    await tick_tock(bus)
    assert bus.invalidate_buffer.value == 0
    assert bus.m_axi_acready.value == 1
    bus.m_axi_acvalid.value = 0
    await tick_tock(bus)
    assert bus.invalidate_buffer.value == 0
    assert bus.m_axi_acready.value == 0