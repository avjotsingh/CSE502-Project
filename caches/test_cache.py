import cocotb
from cocotb.triggers import Timer

async def tick_tock(cache, test_no):
    await Timer(1, units="ns")
    cache.clk.value = 1
    print("For test " + str(test_no) + ", State is now: " + str(cache.state.value))
    await Timer(1, units="ns")
    cache.clk.value = 0

def print_tio(cache):
    print("Tag: " + str(cache.tag.value))
    print("Index: " + str(cache.index.value))
    print("Offset: " + str(cache.offset.value))

def idle_mem(cache):
    cache.bus_valid.value = 0
    cache.data_from_bus.value = 0
    cache.bus_ready.value = 1
    cache.avalid.value = 0
    cache.aaddr.value = 0

@cocotb.test()
async def test_cache(cache):
    # Test case 1: miss clean (read)
    cache.reset.value = 1
    await tick_tock(cache,1)
    cache.reset.value = 0
    await tick_tock(cache,1)
    cache.avalid.value = 1
    cache.aaddr.value = 0x0000000000000001
    cache.load.value = 1
    print_tio(cache)
    await tick_tock(cache,1)
    assert cache.hit.value == 0x0,f"Failed 1.hit, got {cache.hit.value}"
    await tick_tock(cache,1)

    # Test case 2: read/miss clean
    cache.bus_ready.value = 1
    assert cache.state.value == 0x3,f"Failed 2.state, got {cache.state.value}"
    print_tio(cache)
    assert cache.command_addr.value == 0x0000000000000000,f"Failed 2.command_addr, got {cache.command_addr.value}"
    await tick_tock(cache,2)
    cache.data_from_bus.value = 0x0111111111111111111111111111111121111111111111113111111111111111411111111111111151111111111111116111111111111111711111111111111181111111111111119111111111111111a111111111111111b111111111111111c111111111111111d111111111111111e111111111111111f111111111111111
    cache.bus_valid.value = 1
    assert cache.hit.value == 0x0,f"Failed 2.miss, shouldn't update yet"
    await tick_tock(cache,2)
    idle_mem(cache)
    assert cache.hit.value == 0x1,f"Failed 2.hit, got {cache.hit.value}"
    assert cache.data_to_cpu.value == 0xe111111111111111,f"Failed 2.data value, got {cache.data_to_cpu.value}"

    # Test case 3: do we hit with new offsets?
    cache.aaddr.value = 0x000000000000000f
    cache.avalid.value = 1
    await Timer(1, units="ns")
    assert cache.hit.value == 0x1
    assert cache.data_to_cpu.value == 0x0111111111111111,f"Failed 3.data value, got {cache.data_to_cpu.value}"
    await tick_tock(cache,3)
    assert cache.hit.value == 0x1
    assert cache.data_to_cpu.value == 0x0111111111111111,f"Failed 3.data value, got {cache.data_to_cpu.value}"
    cache.aaddr.value = 0x0000000000000009
    cache.avalid.value = 1
    await tick_tock(cache,3)
    assert cache.hit.value == 0x1
    assert cache.data_to_cpu.value == 0x6111111111111111,f"Failed 3.data value, got {cache.data_to_cpu.value}"

    # Test case 4: do we miss with new tag?
    await tick_tock(cache,4)
    cache.aaddr.value = 0x100000000010000c
    cache.avalid.value = 1
    await tick_tock(cache,4)
    assert cache.hit.value == 0x0
    assert cache.command_addr.value == 0x1000000000100000,f"Failed 4.command_addr, got {cache.command_addr.value}"
    await tick_tock(cache,4)
    cache.data_from_bus.value = 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
    cache.bus_valid.value = 1
    await tick_tock(cache,4)
    print_tio(cache)
    assert cache.hit.value == 0x1,f"Failed 4.hit, got {cache.hit.value}"
    assert cache.data_to_cpu.value == 0xffffffffffffffff,f"Failed 4.data value, got {cache.data_to_cpu.value}"
    await tick_tock(cache,4)
    
    # Test case 5, write/hit

    cache.aaddr.value = 0x100000000010000c
    cache.load.value = 0
    cache.data_from_cpu.value = 0x0123456789abcdef
    cache.avalid.value = 1
    await tick_tock(cache,5)
    
    cache.aaddr.value = 0x100000000010000b
    cache.load.value = 1
    cache.avalid.value = 1

    await tick_tock(cache,5)
    assert cache.hit.value == 0x1,f"Failed 5.hit, got {cache.hit.value}"
    assert cache.data_to_cpu.value == 0xffffffffffffffff,f"Failed 5.data value, got {cache.data_to_cpu.value}"

    cache.aaddr.value = 0x100000000010000c
    cache.load.value = 1
    cache.avalid.value = 1

    await tick_tock(cache,5)
    assert cache.hit.value == 0x1,f"Failed 5.hit, got {cache.hit.value}"
    assert cache.data_to_cpu.value == 0x0123456789abcdef,f"Failed 5.data value, got {cache.data_to_cpu.value}"

    await tick_tock(cache,5)

    # Test case 6: write/miss clean

    idle_mem(cache)
    cache.aaddr.value = 0xf00000000000000c
    cache.load.value = 0
    cache.data_from_cpu.value = 0x9696969696969696
    cache.avalid.value = 1
    print_tio(cache)
    await tick_tock(cache,6)
    print_tio(cache)
    assert cache.hit.value == 0x0
    cache.data_from_bus.value = 1
    cache.bus_valid.value = 1

    await tick_tock(cache,6)
    idle_mem(cache)
    assert cache.hit.value == 0x1
    idle_mem(cache)
    await tick_tock(cache,6)
    cache.aaddr.value = 0xf000000000000000
    cache.load.value = 1
    cache.avalid.value = 1
    await tick_tock(cache,6)
    assert cache.data_to_cpu.value == 1,f"Failed 6.data value, got {cache.data_to_cpu.value}"
    assert cache.hit.value == 0x1
    cache.aaddr.value = 0xf00000000000000c
    cache.load.value = 1
    cache.avalid.value = 1
    await tick_tock(cache,6)
    await tick_tock(cache,6)
    assert cache.hit.value == 0x1
    assert cache.data_to_cpu.value == 0x9696969696969696,f"Failed 6.data value, got {cache.data_to_cpu.value}"
    await tick_tock(cache,6)
    idle_mem(cache)

    # Test case 7: write/miss dirty
    cache.aaddr.value = 0xb00000000000000c
    cache.load.value = 0
    cache.data_from_cpu.value = 0x9696969696969696
    cache.avalid.value = 1
    print_tio(cache)
    await tick_tock(cache,7)
    print_tio(cache)
    assert cache.hit.value == 0x0
    cache.data_from_bus.value = 1
    cache.bus_valid.value = 1
    await tick_tock(cache,7)
    assert cache.hit.value == 0x1
    idle_mem(cache)
    await tick_tock(cache,7)
    cache.aaddr.value = 0xb000000000000000
    cache.load.value = 1
    cache.avalid.value = 1
    await tick_tock(cache,7)
    assert cache.data_to_cpu.value == 1,f"Failed 6.data value, got {cache.data_to_cpu.value}"
    assert cache.hit.value == 0x1
    cache.aaddr.value = 0xb00000000000000c
    cache.load.value = 1
    cache.avalid.value = 1
    await tick_tock(cache,7)
    await tick_tock(cache,7)
    assert cache.hit.value == 0x1
    assert cache.data_to_cpu.value == 0x9696969696969696,f"Failed 6.data value, got {cache.data_to_cpu.value}"


    await tick_tock(cache,7)
    idle_mem(cache)

    #Test case 8: read/miss dirty
    cache.reset.value = 1
    await tick_tock(cache,8)
    cache.reset.value = 0
    await tick_tock(cache,8)
    cache.avalid.value = 1
    cache.aaddr.value = 0x0000000000000011
    cache.load.value = 1
    print_tio(cache)
    await tick_tock(cache,8)
    assert cache.hit.value == 0x0,f"Failed 1.hit, got {cache.hit.value}"
    await tick_tock(cache,8)

    cache.bus_ready.value = 1
    assert cache.state.value == 0x3,f"Failed 2.state, got {cache.state.value}"
    print_tio(cache)
    assert cache.command_addr.value == 0x0000000000000010,f"Failed 2.command_addr, got {cache.command_addr.value}"
    await tick_tock(cache,8)
    cache.data_from_bus.value = 0x0111111111111111111111111111111121111111111111113111111111111111411111111111111151111111111111116111111111111111711111111111111181111111111111119111111111111111a111111111111111b111111111111111c111111111111111d111111111111111e111111111111111f111111111111111
    cache.bus_valid.value = 1
    assert cache.hit.value == 0x0,f"Failed 2.miss, shouldn't update yet"
    await tick_tock(cache,8)
    idle_mem(cache)
    assert cache.hit.value == 0x1,f"Failed 2.hit, got {cache.hit.value}"
    assert cache.data_to_cpu.value == 0xe111111111111111,f"Failed 2.data value, got {cache.data_to_cpu.value}"

    #Test case 9: invalidate
    
    await tick_tock(cache,8)
    
    cache.avalid.value = 1
    cache.aaddr.value = 0x0000000000000011
    cache.load.value = 1
    print_tio(cache)
    await tick_tock(cache,8)
    assert cache.hit.value == 0x1,f"Failed 1.hit, got {cache.hit.value}"
    await tick_tock(cache,8)
    assert cache.hit.value == 0x1,f"Failed 1.hit, got {cache.hit.value}"
    await tick_tock(cache,8)
    cache.invalidate.value = 1
    cache.invalidate_addr.value = 0x1000000000000011
    await tick_tock(cache,8)
    assert cache.hit.value == 0x1,f"Failed 1.hit, got {cache.hit.value}"
    await tick_tock(cache,8)
    cache.invalidate.value = 1
    cache.invalidate_addr.value = 0x0000000000000011
    await tick_tock(cache,8)
    assert cache.hit.value == 0x0,f"Failed 1.hit, got {cache.hit.value}"

    cache.bus_ready.value = 1
    assert cache.state.value == 0x0,f"Failed 2.state, got {cache.state.value}"
