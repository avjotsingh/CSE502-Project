// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_directCache);
    __Vhier.remove(&__Vscope_directCache, &__Vscope_directCache__store_modifier);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_directCache.configure(this, name(), "directCache", "directCache", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_directCache__store_modifier.configure(this, name(), "directCache.store_modifier", "store_modifier", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_directCache);
    __Vhier.add(&__Vscope_directCache, &__Vscope_directCache__store_modifier);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"aaddr", &(TOP.aaddr), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"avalid", &(TOP.avalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"bus_ready", &(TOP.bus_ready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"bus_valid", &(TOP.bus_valid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_addr", &(TOP.command_addr), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_rready", &(TOP.command_rready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_store", &(TOP.command_store), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_valid", &(TOP.command_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_from_bus", &(TOP.data_from_bus), false, VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_from_cpu", &(TOP.data_from_cpu), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_to_bus", &(TOP.data_to_bus), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_to_cpu", &(TOP.data_to_cpu), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"hit", &(TOP.hit), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"invalidate", &(TOP.invalidate), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"invalidate_ack", &(TOP.invalidate_ack), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"invalidate_addr", &(TOP.invalidate_addr), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"load", &(TOP.load), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"INDEX_LENGTH", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__INDEX_LENGTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"OFFSET_LENGTH", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__OFFSET_LENGTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"STATE_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__STATE_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"TAG_LENGTH", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__TAG_LENGTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"aaddr", &(TOP.directCache__DOT__aaddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"avalid", &(TOP.directCache__DOT__avalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"bus_ready", &(TOP.directCache__DOT__bus_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"bus_valid", &(TOP.directCache__DOT__bus_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"cache", &(TOP.directCache__DOT__cache), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1100799,0);
        __Vscope_directCache.varInsert(__Vfinal,"clk", &(TOP.directCache__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"command_addr", &(TOP.directCache__DOT__command_addr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"command_rready", &(TOP.directCache__DOT__command_rready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"command_store", &(TOP.directCache__DOT__command_store), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"command_valid", &(TOP.directCache__DOT__command_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"curr_valid", &(TOP.directCache__DOT__curr_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"data_from_bus", &(TOP.directCache__DOT__data_from_bus), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_directCache.varInsert(__Vfinal,"data_from_cpu", &(TOP.directCache__DOT__data_from_cpu), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"data_to_bus", &(TOP.directCache__DOT__data_to_bus), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_directCache.varInsert(__Vfinal,"data_to_cpu", &(TOP.directCache__DOT__data_to_cpu), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"dirty_addr", &(TOP.directCache__DOT__dirty_addr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"dirty_data", &(TOP.directCache__DOT__dirty_data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_directCache.varInsert(__Vfinal,"hit", &(TOP.directCache__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"index", &(TOP.directCache__DOT__index), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_directCache.varInsert(__Vfinal,"invalidate", &(TOP.directCache__DOT__invalidate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"invalidate_ack", &(TOP.directCache__DOT__invalidate_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"invalidate_addr", &(TOP.directCache__DOT__invalidate_addr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"load", &(TOP.directCache__DOT__load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"new_cache_data", &(TOP.directCache__DOT__new_cache_data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_directCache.varInsert(__Vfinal,"new_data", &(TOP.directCache__DOT__new_data), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache.varInsert(__Vfinal,"next_state", &(TOP.directCache__DOT__next_state), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"offset", &(TOP.directCache__DOT__offset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_directCache.varInsert(__Vfinal,"reset", &(TOP.directCache__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_directCache.varInsert(__Vfinal,"state", &(TOP.directCache__DOT__state), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_directCache.varInsert(__Vfinal,"tag", &(TOP.directCache__DOT__tag), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,49,0);
        __Vscope_directCache__store_modifier.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__store_modifier__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache__store_modifier.varInsert(__Vfinal,"REG_LOG", const_cast<void*>(static_cast<const void*>(&(TOP.directCache__DOT__store_modifier__DOT__REG_LOG))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_directCache__store_modifier.varInsert(__Vfinal,"data", &(TOP.directCache__DOT__store_modifier__DOT__data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
        __Vscope_directCache__store_modifier.varInsert(__Vfinal,"final_data", &(TOP.directCache__DOT__store_modifier__DOT__final_data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
        __Vscope_directCache__store_modifier.varInsert(__Vfinal,"new_data", &(TOP.directCache__DOT__store_modifier__DOT__new_data), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_directCache__store_modifier.varInsert(__Vfinal,"sel", &(TOP.directCache__DOT__store_modifier__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
    }
}
