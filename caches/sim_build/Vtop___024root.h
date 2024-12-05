// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(hz32768timer,0,0);
        VL_IN8(command_valid,1,0);
        VL_IN8(command_store,1,0);
        VL_IN8(command_rready,1,0);
        VL_OUT8(bus_valid,1,0);
        VL_OUT8(bus_ready,1,0);
        VL_OUT8(m_axi_awlen,7,0);
        VL_OUT8(m_axi_awsize,2,0);
        VL_OUT8(m_axi_awburst,1,0);
        VL_OUT8(m_axi_awlock,0,0);
        VL_OUT8(m_axi_awcache,3,0);
        VL_OUT8(m_axi_awprot,2,0);
        VL_OUT8(m_axi_awvalid,0,0);
        VL_IN8(m_axi_awready,0,0);
        VL_OUT8(m_axi_wlast,0,0);
        VL_OUT8(m_axi_wvalid,0,0);
        VL_IN8(m_axi_wready,0,0);
        VL_IN8(m_axi_bresp,1,0);
        VL_IN8(m_axi_bvalid,0,0);
        VL_OUT8(m_axi_bready,0,0);
        VL_OUT8(m_axi_arlen,7,0);
        VL_OUT8(m_axi_arsize,2,0);
        VL_OUT8(m_axi_arburst,1,0);
        VL_OUT8(m_axi_arlock,0,0);
        VL_OUT8(m_axi_arcache,3,0);
        VL_OUT8(m_axi_arprot,2,0);
        VL_OUT8(m_axi_arvalid,0,0);
        VL_IN8(m_axi_arready,0,0);
        VL_IN8(m_axi_rresp,1,0);
        VL_IN8(m_axi_rlast,0,0);
        VL_IN8(m_axi_rvalid,0,0);
        VL_OUT8(m_axi_rready,0,0);
        VL_IN8(m_axi_acvalid,0,0);
        VL_OUT8(m_axi_acready,0,0);
        VL_IN8(m_axi_acsnoop,3,0);
        CData/*0:0*/ cacheMemoryBus__DOT__clk;
        CData/*0:0*/ cacheMemoryBus__DOT__reset;
        CData/*0:0*/ cacheMemoryBus__DOT__hz32768timer;
        CData/*1:0*/ cacheMemoryBus__DOT__command_valid;
        CData/*1:0*/ cacheMemoryBus__DOT__command_store;
        CData/*1:0*/ cacheMemoryBus__DOT__command_rready;
        CData/*1:0*/ cacheMemoryBus__DOT__bus_valid;
        CData/*1:0*/ cacheMemoryBus__DOT__bus_ready;
        CData/*7:0*/ cacheMemoryBus__DOT__m_axi_awlen;
        CData/*2:0*/ cacheMemoryBus__DOT__m_axi_awsize;
        CData/*1:0*/ cacheMemoryBus__DOT__m_axi_awburst;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_awlock;
        CData/*3:0*/ cacheMemoryBus__DOT__m_axi_awcache;
        CData/*2:0*/ cacheMemoryBus__DOT__m_axi_awprot;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_awvalid;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_awready;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_wlast;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_wvalid;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_wready;
        CData/*1:0*/ cacheMemoryBus__DOT__m_axi_bresp;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_bvalid;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_bready;
        CData/*7:0*/ cacheMemoryBus__DOT__m_axi_arlen;
        CData/*2:0*/ cacheMemoryBus__DOT__m_axi_arsize;
        CData/*1:0*/ cacheMemoryBus__DOT__m_axi_arburst;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_arlock;
        CData/*3:0*/ cacheMemoryBus__DOT__m_axi_arcache;
    };
    struct {
        CData/*2:0*/ cacheMemoryBus__DOT__m_axi_arprot;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_arvalid;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_arready;
        CData/*1:0*/ cacheMemoryBus__DOT__m_axi_rresp;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_rlast;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_rvalid;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_rready;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_acvalid;
        CData/*0:0*/ cacheMemoryBus__DOT__m_axi_acready;
        CData/*3:0*/ cacheMemoryBus__DOT__m_axi_acsnoop;
        CData/*3:0*/ cacheMemoryBus__DOT__offsetCounter;
        CData/*0:0*/ cacheMemoryBus__DOT__currID;
        CData/*1:0*/ cacheMemoryBus__DOT__currPow2;
        CData/*0:0*/ cacheMemoryBus__DOT__busChoiceOut;
        CData/*1:0*/ cacheMemoryBus__DOT__busChoice__DOT__candidates;
        CData/*0:0*/ cacheMemoryBus__DOT__busChoice__DOT__out;
        CData/*0:0*/ cacheMemoryBus__DOT__busChoice__DOT__i;
        CData/*0:0*/ cacheMemoryBus__DOT__busChoiceReply__DOT__sel;
        CData/*1:0*/ cacheMemoryBus__DOT__busChoiceReply__DOT__broadcast;
        CData/*1:0*/ cacheMemoryBus__DOT__busChoiceReply__DOT__i;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(data_in,2047,0,64);
        VL_OUTW(data_out,1023,0,32);
        VlWide<64>/*2047:0*/ cacheMemoryBus__DOT__data_in;
        VlWide<32>/*1023:0*/ cacheMemoryBus__DOT__data_out;
        IData/*31:0*/ cacheMemoryBus__DOT__state;
        IData/*31:0*/ cacheMemoryBus__DOT__next_state;
        IData/*31:0*/ __VactIterCount;
        VL_INW(command_addr,127,0,4);
        VL_OUT64(m_axi_awaddr,63,0);
        VL_OUT64(m_axi_wdata,63,0);
        VL_OUT64(m_axi_araddr,63,0);
        VL_IN64(m_axi_rdata,63,0);
        VL_IN64(m_axi_acaddr,63,0);
        VlWide<4>/*127:0*/ cacheMemoryBus__DOT__command_addr;
        QData/*63:0*/ cacheMemoryBus__DOT__m_axi_awaddr;
        QData/*63:0*/ cacheMemoryBus__DOT__m_axi_wdata;
        QData/*63:0*/ cacheMemoryBus__DOT__m_axi_araddr;
        QData/*63:0*/ cacheMemoryBus__DOT__m_axi_rdata;
        QData/*63:0*/ cacheMemoryBus__DOT__m_axi_acaddr;
        VlWide<32>/*1023:0*/ cacheMemoryBus__DOT__data_buffer;
        QData/*63:0*/ cacheMemoryBus__DOT__addr_buffer;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ cacheMemoryBus__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ cacheMemoryBus__DOT__ADDR_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ cacheMemoryBus__DOT__CHUNKS_LOG = 4U;
    static constexpr IData/*31:0*/ cacheMemoryBus__DOT__CONNECTIONS = 2U;
    static constexpr IData/*31:0*/ cacheMemoryBus__DOT__busChoice__DOT__LOG_INPUTS = 1U;
    static constexpr IData/*31:0*/ cacheMemoryBus__DOT__busChoiceReply__DOT__LOG_INPUTS = 1U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
