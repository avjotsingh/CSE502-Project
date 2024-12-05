// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_top);
    __Vhier.remove(&__Vscope_top, &__Vscope_top__branch_predictor);
    __Vhier.remove(&__Vscope_top, &__Vscope_top__if_id);
    __Vhier.remove(&__Vscope_top, &__Vscope_top__instruction_cache);
    __Vhier.remove(&__Vscope_top__instruction_cache, &__Vscope_top__instruction_cache__store_modifier);

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
    __Vscope_top.configure(this, name(), "top", "top", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__branch_predictor.configure(this, name(), "top.branch_predictor", "branch_predictor", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__if_id.configure(this, name(), "top.if_id", "if_id", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__instruction_cache.configure(this, name(), "top.instruction_cache", "instruction_cache", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__instruction_cache__store_modifier.configure(this, name(), "top.instruction_cache.store_modifier", "store_modifier", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_top);
    __Vhier.add(&__Vscope_top, &__Vscope_top__branch_predictor);
    __Vhier.add(&__Vscope_top, &__Vscope_top__if_id);
    __Vhier.add(&__Vscope_top, &__Vscope_top__instruction_cache);
    __Vhier.add(&__Vscope_top__instruction_cache, &__Vscope_top__instruction_cache__store_modifier);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"entry", &(TOP.entry), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"hz32768timer", &(TOP.hz32768timer), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acaddr", &(TOP.m_axi_acaddr), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acready", &(TOP.m_axi_acready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acsnoop", &(TOP.m_axi_acsnoop), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_acvalid", &(TOP.m_axi_acvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_araddr", &(TOP.m_axi_araddr), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arburst", &(TOP.m_axi_arburst), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arcache", &(TOP.m_axi_arcache), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arid", &(TOP.m_axi_arid), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,12,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arlen", &(TOP.m_axi_arlen), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arlock", &(TOP.m_axi_arlock), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arprot", &(TOP.m_axi_arprot), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arready", &(TOP.m_axi_arready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arsize", &(TOP.m_axi_arsize), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_arvalid", &(TOP.m_axi_arvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awaddr", &(TOP.m_axi_awaddr), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awburst", &(TOP.m_axi_awburst), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awcache", &(TOP.m_axi_awcache), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awid", &(TOP.m_axi_awid), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,12,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awlen", &(TOP.m_axi_awlen), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awlock", &(TOP.m_axi_awlock), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awprot", &(TOP.m_axi_awprot), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awready", &(TOP.m_axi_awready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awsize", &(TOP.m_axi_awsize), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_awvalid", &(TOP.m_axi_awvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bid", &(TOP.m_axi_bid), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,12,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bready", &(TOP.m_axi_bready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bresp", &(TOP.m_axi_bresp), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_bvalid", &(TOP.m_axi_bvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rdata", &(TOP.m_axi_rdata), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rid", &(TOP.m_axi_rid), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,12,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rlast", &(TOP.m_axi_rlast), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rready", &(TOP.m_axi_rready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rresp", &(TOP.m_axi_rresp), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_rvalid", &(TOP.m_axi_rvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wdata", &(TOP.m_axi_wdata), false, VLVT_UINT64,VLVD_OUT|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wlast", &(TOP.m_axi_wlast), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wready", &(TOP.m_axi_wready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wstrb", &(TOP.m_axi_wstrb), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axi_wvalid", &(TOP.m_axi_wvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"satp", &(TOP.satp), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"stackptr", &(TOP.stackptr), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"ID_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__ID_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"STRB_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__STRB_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"branch_taken_ex", &(TOP.top__DOT__branch_taken_ex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"cache_instr", &(TOP.top__DOT__cache_instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"clk", &(TOP.top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"data_cache_hit", &(TOP.top__DOT__data_cache_hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"entry", &(TOP.top__DOT__entry), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"hz32768timer", &(TOP.top__DOT__hz32768timer), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"if_id_decoder_instr", &(TOP.top__DOT__if_id_decoder_instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"instruction_cache_hit", &(TOP.top__DOT__instruction_cache_hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_acaddr", &(TOP.top__DOT__m_axi_acaddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_acready", &(TOP.top__DOT__m_axi_acready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_acsnoop", &(TOP.top__DOT__m_axi_acsnoop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_acvalid", &(TOP.top__DOT__m_axi_acvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_araddr", &(TOP.top__DOT__m_axi_araddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arburst", &(TOP.top__DOT__m_axi_arburst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arcache", &(TOP.top__DOT__m_axi_arcache), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arid", &(TOP.top__DOT__m_axi_arid), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,12,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arlen", &(TOP.top__DOT__m_axi_arlen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arlock", &(TOP.top__DOT__m_axi_arlock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arprot", &(TOP.top__DOT__m_axi_arprot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arready", &(TOP.top__DOT__m_axi_arready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arsize", &(TOP.top__DOT__m_axi_arsize), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_arvalid", &(TOP.top__DOT__m_axi_arvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awaddr", &(TOP.top__DOT__m_axi_awaddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awburst", &(TOP.top__DOT__m_axi_awburst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awcache", &(TOP.top__DOT__m_axi_awcache), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awid", &(TOP.top__DOT__m_axi_awid), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,12,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awlen", &(TOP.top__DOT__m_axi_awlen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awlock", &(TOP.top__DOT__m_axi_awlock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awprot", &(TOP.top__DOT__m_axi_awprot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awready", &(TOP.top__DOT__m_axi_awready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awsize", &(TOP.top__DOT__m_axi_awsize), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_awvalid", &(TOP.top__DOT__m_axi_awvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_bid", &(TOP.top__DOT__m_axi_bid), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,12,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_bready", &(TOP.top__DOT__m_axi_bready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_bresp", &(TOP.top__DOT__m_axi_bresp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_bvalid", &(TOP.top__DOT__m_axi_bvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_rdata", &(TOP.top__DOT__m_axi_rdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_rid", &(TOP.top__DOT__m_axi_rid), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,12,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_rlast", &(TOP.top__DOT__m_axi_rlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_rready", &(TOP.top__DOT__m_axi_rready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_rresp", &(TOP.top__DOT__m_axi_rresp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_rvalid", &(TOP.top__DOT__m_axi_rvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_wdata", &(TOP.top__DOT__m_axi_wdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_wlast", &(TOP.top__DOT__m_axi_wlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_wready", &(TOP.top__DOT__m_axi_wready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_wstrb", &(TOP.top__DOT__m_axi_wstrb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top.varInsert(__Vfinal,"m_axi_wvalid", &(TOP.top__DOT__m_axi_wvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"next_pc", &(TOP.top__DOT__next_pc), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"pc_cpu", &(TOP.top__DOT__pc_cpu), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"pc_ex", &(TOP.top__DOT__pc_ex), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"pc_if", &(TOP.top__DOT__pc_if), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"predicted_target", &(TOP.top__DOT__predicted_target), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"reset", &(TOP.top__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"satp", &(TOP.top__DOT__satp), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top.varInsert(__Vfinal,"stackptr", &(TOP.top__DOT__stackptr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__branch_predictor__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"INDEX_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__branch_predictor__DOT__INDEX_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"TAG_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__branch_predictor__DOT__TAG_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"branch_taken_ex", &(TOP.top__DOT__branch_predictor__DOT__branch_taken_ex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"btb_mem", &(TOP.top__DOT__branch_predictor__DOT__btb_mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,118,0 ,0,1023);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"clk", &(TOP.top__DOT__branch_predictor__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"current_tag", &(TOP.top__DOT__branch_predictor__DOT__current_tag), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,53,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"current_target", &(TOP.top__DOT__branch_predictor__DOT__current_target), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"current_valid", &(TOP.top__DOT__branch_predictor__DOT__current_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"hit", &(TOP.top__DOT__branch_predictor__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"hit_", &(TOP.top__DOT__branch_predictor__DOT__hit_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"index_ex", &(TOP.top__DOT__branch_predictor__DOT__index_ex), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"index_if", &(TOP.top__DOT__branch_predictor__DOT__index_if), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"pc_ex", &(TOP.top__DOT__branch_predictor__DOT__pc_ex), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"pc_if", &(TOP.top__DOT__branch_predictor__DOT__pc_if), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"pc_tag_ex", &(TOP.top__DOT__branch_predictor__DOT__pc_tag_ex), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,53,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"pc_tag_if", &(TOP.top__DOT__branch_predictor__DOT__pc_tag_if), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,53,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"predicted_target", &(TOP.top__DOT__branch_predictor__DOT__predicted_target), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"predicted_target_", &(TOP.top__DOT__branch_predictor__DOT__predicted_target_), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"reset", &(TOP.top__DOT__branch_predictor__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__branch_predictor.varInsert(__Vfinal,"target_addr_ex", &(TOP.top__DOT__branch_predictor__DOT__target_addr_ex), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__if_id__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"INSTR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__if_id__DOT__INSTR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"clk", &(TOP.top__DOT__if_id__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"instruction", &(TOP.top__DOT__if_id__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"instruction_in", &(TOP.top__DOT__if_id__DOT__instruction_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"instruction_out", &(TOP.top__DOT__if_id__DOT__instruction_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"pc", &(TOP.top__DOT__if_id__DOT__pc), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"pc_in", &(TOP.top__DOT__if_id__DOT__pc_in), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"pc_out", &(TOP.top__DOT__if_id__DOT__pc_out), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__if_id.varInsert(__Vfinal,"reset", &(TOP.top__DOT__if_id__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"INDEX_LENGTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__INDEX_LENGTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"OFFSET_LENGTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__OFFSET_LENGTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"STATE_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__STATE_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"TAG_LENGTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__TAG_LENGTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"aaddr", &(TOP.top__DOT__instruction_cache__DOT__aaddr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"avalid", &(TOP.top__DOT__instruction_cache__DOT__avalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"bus_ready", &(TOP.top__DOT__instruction_cache__DOT__bus_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"bus_valid", &(TOP.top__DOT__instruction_cache__DOT__bus_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"cache", &(TOP.top__DOT__instruction_cache__DOT__cache), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1099775,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"clk", &(TOP.top__DOT__instruction_cache__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"command_addr", &(TOP.top__DOT__instruction_cache__DOT__command_addr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"command_rready", &(TOP.top__DOT__instruction_cache__DOT__command_rready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"command_store", &(TOP.top__DOT__instruction_cache__DOT__command_store), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"command_valid", &(TOP.top__DOT__instruction_cache__DOT__command_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"curr_valid", &(TOP.top__DOT__instruction_cache__DOT__curr_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"data_from_bus", &(TOP.top__DOT__instruction_cache__DOT__data_from_bus), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"data_from_cpu", &(TOP.top__DOT__instruction_cache__DOT__data_from_cpu), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"data_to_bus", &(TOP.top__DOT__instruction_cache__DOT__data_to_bus), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"data_to_cpu", &(TOP.top__DOT__instruction_cache__DOT__data_to_cpu), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"dirty_addr", &(TOP.top__DOT__instruction_cache__DOT__dirty_addr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"dirty_data", &(TOP.top__DOT__instruction_cache__DOT__dirty_data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"hit", &(TOP.top__DOT__instruction_cache__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"index", &(TOP.top__DOT__instruction_cache__DOT__index), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"load", &(TOP.top__DOT__instruction_cache__DOT__load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"new_cache_data", &(TOP.top__DOT__instruction_cache__DOT__new_cache_data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,1023,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"new_data", &(TOP.top__DOT__instruction_cache__DOT__new_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"next_state", &(TOP.top__DOT__instruction_cache__DOT__next_state), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"offset", &(TOP.top__DOT__instruction_cache__DOT__offset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"reset", &(TOP.top__DOT__instruction_cache__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"state", &(TOP.top__DOT__instruction_cache__DOT__state), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_top__instruction_cache.varInsert(__Vfinal,"tag", &(TOP.top__DOT__instruction_cache__DOT__tag), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,48,0);
        __Vscope_top__instruction_cache__store_modifier.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__store_modifier__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache__store_modifier.varInsert(__Vfinal,"REG_LOG", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__instruction_cache__DOT__store_modifier__DOT__REG_LOG))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache__store_modifier.varInsert(__Vfinal,"data", &(TOP.top__DOT__instruction_cache__DOT__store_modifier__DOT__data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
        __Vscope_top__instruction_cache__store_modifier.varInsert(__Vfinal,"final_data", &(TOP.top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
        __Vscope_top__instruction_cache__store_modifier.varInsert(__Vfinal,"new_data", &(TOP.top__DOT__instruction_cache__DOT__store_modifier__DOT__new_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__instruction_cache__store_modifier.varInsert(__Vfinal,"sel", &(TOP.top__DOT__instruction_cache__DOT__store_modifier__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
    }
}
