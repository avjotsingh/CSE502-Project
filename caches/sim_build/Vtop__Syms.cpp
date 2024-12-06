// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_cacheMemoryBus);
    __Vhier.remove(&__Vscope_cacheMemoryBus, &__Vscope_cacheMemoryBus__busChoice);
    __Vhier.remove(&__Vscope_cacheMemoryBus, &__Vscope_cacheMemoryBus__busChoiceReply);

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
    __Vscope_cacheMemoryBus.configure(this, name(), "cacheMemoryBus", "cacheMemoryBus", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cacheMemoryBus__busChoice.configure(this, name(), "cacheMemoryBus.busChoice", "busChoice", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cacheMemoryBus__busChoiceReply.configure(this, name(), "cacheMemoryBus.busChoiceReply", "busChoiceReply", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_cacheMemoryBus);
    __Vhier.add(&__Vscope_cacheMemoryBus, &__Vscope_cacheMemoryBus__busChoice);
    __Vhier.add(&__Vscope_cacheMemoryBus, &__Vscope_cacheMemoryBus__busChoiceReply);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"bus_ready", &(TOP.bus_ready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"bus_valid", &(TOP.bus_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_addr", &(TOP.command_addr), false, VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1, 127,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_rready", &(TOP.command_rready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_store", &(TOP.command_store), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"command_valid", &(TOP.command_valid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_in", &(TOP.data_in), false, VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1, 2047,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_out", &(TOP.data_out), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_TOP.varInsert(__Vfinal,"hz32768timer", &(TOP.hz32768timer), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"invalidate", &(TOP.invalidate), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"invalidate_addr", &(TOP.invalidate_addr), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acaddr", &(TOP.m_axi_acaddr), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acready", &(TOP.m_axi_acready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acsnoop", &(TOP.m_axi_acsnoop), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acvalid", &(TOP.m_axi_acvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_araddr", &(TOP.m_axi_araddr), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arburst", &(TOP.m_axi_arburst), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arcache", &(TOP.m_axi_arcache), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arlen", &(TOP.m_axi_arlen), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arlock", &(TOP.m_axi_arlock), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arprot", &(TOP.m_axi_arprot), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arready", &(TOP.m_axi_arready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arsize", &(TOP.m_axi_arsize), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arvalid", &(TOP.m_axi_arvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awaddr", &(TOP.m_axi_awaddr), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awburst", &(TOP.m_axi_awburst), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awcache", &(TOP.m_axi_awcache), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awlen", &(TOP.m_axi_awlen), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awlock", &(TOP.m_axi_awlock), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awprot", &(TOP.m_axi_awprot), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awready", &(TOP.m_axi_awready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awsize", &(TOP.m_axi_awsize), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awvalid", &(TOP.m_axi_awvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bready", &(TOP.m_axi_bready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bresp", &(TOP.m_axi_bresp), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bvalid", &(TOP.m_axi_bvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rdata", &(TOP.m_axi_rdata), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rlast", &(TOP.m_axi_rlast), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rready", &(TOP.m_axi_rready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rresp", &(TOP.m_axi_rresp), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rvalid", &(TOP.m_axi_rvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wdata", &(TOP.m_axi_wdata), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wlast", &(TOP.m_axi_wlast), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wready", &(TOP.m_axi_wready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wvalid", &(TOP.m_axi_wvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cacheMemoryBus__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"CHUNKS_LOG", const_cast<void*>(static_cast<const void*>(&(TOP.cacheMemoryBus__DOT__CHUNKS_LOG))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"CONNECTIONS", const_cast<void*>(static_cast<const void*>(&(TOP.cacheMemoryBus__DOT__CONNECTIONS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cacheMemoryBus__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"acready_buffer", &(TOP.cacheMemoryBus__DOT__acready_buffer), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"addr_buffer", &(TOP.cacheMemoryBus__DOT__addr_buffer), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"busChoiceOut", &(TOP.cacheMemoryBus__DOT__busChoiceOut), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"bus_ready", &(TOP.cacheMemoryBus__DOT__bus_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"bus_valid", &(TOP.cacheMemoryBus__DOT__bus_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"clk", &(TOP.cacheMemoryBus__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"command_addr", &(TOP.cacheMemoryBus__DOT__command_addr), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 127,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"command_rready", &(TOP.cacheMemoryBus__DOT__command_rready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"command_store", &(TOP.cacheMemoryBus__DOT__command_store), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"command_valid", &(TOP.cacheMemoryBus__DOT__command_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"currID", &(TOP.cacheMemoryBus__DOT__currID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"currPow2", &(TOP.cacheMemoryBus__DOT__currPow2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"data_buffer", &(TOP.cacheMemoryBus__DOT__data_buffer), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"data_in", &(TOP.cacheMemoryBus__DOT__data_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 2047,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"data_out", &(TOP.cacheMemoryBus__DOT__data_out), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"hz32768timer", &(TOP.cacheMemoryBus__DOT__hz32768timer), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"invalidate", &(TOP.cacheMemoryBus__DOT__invalidate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"invalidate_addr", &(TOP.cacheMemoryBus__DOT__invalidate_addr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"invalidate_addr_buffer", &(TOP.cacheMemoryBus__DOT__invalidate_addr_buffer), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"invalidate_buffer", &(TOP.cacheMemoryBus__DOT__invalidate_buffer), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_acaddr", &(TOP.cacheMemoryBus__DOT__m_axi_acaddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_acready", &(TOP.cacheMemoryBus__DOT__m_axi_acready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_acsnoop", &(TOP.cacheMemoryBus__DOT__m_axi_acsnoop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_acvalid", &(TOP.cacheMemoryBus__DOT__m_axi_acvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_araddr", &(TOP.cacheMemoryBus__DOT__m_axi_araddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arburst", &(TOP.cacheMemoryBus__DOT__m_axi_arburst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arcache", &(TOP.cacheMemoryBus__DOT__m_axi_arcache), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arlen", &(TOP.cacheMemoryBus__DOT__m_axi_arlen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arlock", &(TOP.cacheMemoryBus__DOT__m_axi_arlock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arprot", &(TOP.cacheMemoryBus__DOT__m_axi_arprot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arready", &(TOP.cacheMemoryBus__DOT__m_axi_arready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arsize", &(TOP.cacheMemoryBus__DOT__m_axi_arsize), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_arvalid", &(TOP.cacheMemoryBus__DOT__m_axi_arvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awaddr", &(TOP.cacheMemoryBus__DOT__m_axi_awaddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awburst", &(TOP.cacheMemoryBus__DOT__m_axi_awburst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awcache", &(TOP.cacheMemoryBus__DOT__m_axi_awcache), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awlen", &(TOP.cacheMemoryBus__DOT__m_axi_awlen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awlock", &(TOP.cacheMemoryBus__DOT__m_axi_awlock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awprot", &(TOP.cacheMemoryBus__DOT__m_axi_awprot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awready", &(TOP.cacheMemoryBus__DOT__m_axi_awready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awsize", &(TOP.cacheMemoryBus__DOT__m_axi_awsize), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_awvalid", &(TOP.cacheMemoryBus__DOT__m_axi_awvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_bready", &(TOP.cacheMemoryBus__DOT__m_axi_bready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_bresp", &(TOP.cacheMemoryBus__DOT__m_axi_bresp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_bvalid", &(TOP.cacheMemoryBus__DOT__m_axi_bvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_rdata", &(TOP.cacheMemoryBus__DOT__m_axi_rdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_rlast", &(TOP.cacheMemoryBus__DOT__m_axi_rlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_rready", &(TOP.cacheMemoryBus__DOT__m_axi_rready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_rresp", &(TOP.cacheMemoryBus__DOT__m_axi_rresp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_rvalid", &(TOP.cacheMemoryBus__DOT__m_axi_rvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_wdata", &(TOP.cacheMemoryBus__DOT__m_axi_wdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_wlast", &(TOP.cacheMemoryBus__DOT__m_axi_wlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_wready", &(TOP.cacheMemoryBus__DOT__m_axi_wready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"m_axi_wvalid", &(TOP.cacheMemoryBus__DOT__m_axi_wvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"next_state", &(TOP.cacheMemoryBus__DOT__next_state), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"offsetCounter", &(TOP.cacheMemoryBus__DOT__offsetCounter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"reset", &(TOP.cacheMemoryBus__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cacheMemoryBus.varInsert(__Vfinal,"state", &(TOP.cacheMemoryBus__DOT__state), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_cacheMemoryBus__busChoice.varInsert(__Vfinal,"LOG_INPUTS", const_cast<void*>(static_cast<const void*>(&(TOP.cacheMemoryBus__DOT__busChoice__DOT__LOG_INPUTS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cacheMemoryBus__busChoice.varInsert(__Vfinal,"candidates", &(TOP.cacheMemoryBus__DOT__busChoice__DOT__candidates), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus__busChoice.varInsert(__Vfinal,"i", &(TOP.cacheMemoryBus__DOT__busChoice__DOT__i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_cacheMemoryBus__busChoice.varInsert(__Vfinal,"out", &(TOP.cacheMemoryBus__DOT__busChoice__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_cacheMemoryBus__busChoiceReply.varInsert(__Vfinal,"LOG_INPUTS", const_cast<void*>(static_cast<const void*>(&(TOP.cacheMemoryBus__DOT__busChoiceReply__DOT__LOG_INPUTS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cacheMemoryBus__busChoiceReply.varInsert(__Vfinal,"broadcast", &(TOP.cacheMemoryBus__DOT__busChoiceReply__DOT__broadcast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus__busChoiceReply.varInsert(__Vfinal,"i", &(TOP.cacheMemoryBus__DOT__busChoiceReply__DOT__i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cacheMemoryBus__busChoiceReply.varInsert(__Vfinal,"sel", &(TOP.cacheMemoryBus__DOT__busChoiceReply__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
    }
}
