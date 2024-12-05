// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__top__reset;
    CData/*0:0*/ __Vcellinp__top__clk;
    CData/*0:0*/ __Vcellout__top__m_axi_acready;
    CData/*0:0*/ __Vcellout__top__m_axi_rready;
    CData/*0:0*/ __Vcellout__top__m_axi_arvalid;
    CData/*2:0*/ __Vcellout__top__m_axi_arprot;
    CData/*3:0*/ __Vcellout__top__m_axi_arcache;
    CData/*0:0*/ __Vcellout__top__m_axi_arlock;
    CData/*1:0*/ __Vcellout__top__m_axi_arburst;
    CData/*2:0*/ __Vcellout__top__m_axi_arsize;
    CData/*7:0*/ __Vcellout__top__m_axi_arlen;
    CData/*0:0*/ __Vcellout__top__m_axi_bready;
    CData/*0:0*/ __Vcellout__top__m_axi_wvalid;
    CData/*0:0*/ __Vcellout__top__m_axi_wlast;
    CData/*7:0*/ __Vcellout__top__m_axi_wstrb;
    CData/*0:0*/ __Vcellout__top__m_axi_awvalid;
    CData/*2:0*/ __Vcellout__top__m_axi_awprot;
    CData/*3:0*/ __Vcellout__top__m_axi_awcache;
    CData/*0:0*/ __Vcellout__top__m_axi_awlock;
    CData/*1:0*/ __Vcellout__top__m_axi_awburst;
    CData/*2:0*/ __Vcellout__top__m_axi_awsize;
    CData/*7:0*/ __Vcellout__top__m_axi_awlen;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__top__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ __Vcellout__top__m_axi_arid;
    SData/*12:0*/ __Vcellout__top__m_axi_awid;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ __Vcellout__top__m_axi_araddr;
    QData/*63:0*/ __Vcellout__top__m_axi_wdata;
    QData/*63:0*/ __Vcellout__top__m_axi_awaddr;
    QData/*63:0*/ __Vcellinp__top__entry;
    QData/*63:0*/ top__DOT__pc_cpu;
    sc_core::sc_in<bool> clk;
    sc_core::sc_in<bool> reset;
    sc_core::sc_in<bool> hz32768timer;
    sc_core::sc_out<uint32_t> m_axi_awlen;
    sc_core::sc_out<uint32_t> m_axi_awsize;
    sc_core::sc_out<uint32_t> m_axi_awburst;
    sc_core::sc_out<bool> m_axi_awlock;
    sc_core::sc_out<uint32_t> m_axi_awcache;
    sc_core::sc_out<uint32_t> m_axi_awprot;
    sc_core::sc_out<bool> m_axi_awvalid;
    sc_core::sc_in<bool> m_axi_awready;
    sc_core::sc_out<uint32_t> m_axi_wstrb;
    sc_core::sc_out<bool> m_axi_wlast;
    sc_core::sc_out<bool> m_axi_wvalid;
    sc_core::sc_in<bool> m_axi_wready;
    sc_core::sc_in<uint32_t> m_axi_bresp;
    sc_core::sc_in<bool> m_axi_bvalid;
    sc_core::sc_out<bool> m_axi_bready;
    sc_core::sc_out<uint32_t> m_axi_arlen;
    sc_core::sc_out<uint32_t> m_axi_arsize;
    sc_core::sc_out<uint32_t> m_axi_arburst;
    sc_core::sc_out<bool> m_axi_arlock;
    sc_core::sc_out<uint32_t> m_axi_arcache;
    sc_core::sc_out<uint32_t> m_axi_arprot;
    sc_core::sc_out<bool> m_axi_arvalid;
    sc_core::sc_in<bool> m_axi_arready;
    sc_core::sc_in<uint32_t> m_axi_rresp;
    sc_core::sc_in<bool> m_axi_rlast;
    sc_core::sc_in<bool> m_axi_rvalid;
    sc_core::sc_out<bool> m_axi_rready;
    sc_core::sc_in<bool> m_axi_acvalid;
    sc_core::sc_out<bool> m_axi_acready;
    sc_core::sc_in<uint32_t> m_axi_acsnoop;
    sc_core::sc_out<uint32_t> m_axi_awid;
    sc_core::sc_in<uint32_t> m_axi_bid;
    sc_core::sc_out<uint32_t> m_axi_arid;
    sc_core::sc_in<uint32_t> m_axi_rid;
    sc_core::sc_in<uint64_t> entry;
    sc_core::sc_in<uint64_t> stackptr;
    sc_core::sc_in<uint64_t> satp;
    sc_core::sc_out<uint64_t> m_axi_awaddr;
    sc_core::sc_out<uint64_t> m_axi_wdata;
    sc_core::sc_out<uint64_t> m_axi_araddr;
    sc_core::sc_in<uint64_t> m_axi_rdata;
    sc_core::sc_in<uint64_t> m_axi_acaddr;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
