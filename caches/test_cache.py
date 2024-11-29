import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_cache(cache):
    # Test case 1: first request should miss
    cache.reset.value = 0
    cache.clk.value = 0
    await Timer(1, units="ns")
    cache.reset.value = 1
    cache.clk.value = 0
    cache.avalid.value = 1
    cache.aaddr.value = 0x0000000000000000
    cache.load.value = 1
    await Timer(1, units="ns")
    assert cache.hit.value == 0x0