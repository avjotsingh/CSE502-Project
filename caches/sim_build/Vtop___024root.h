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
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(avalid,0,0);
    VL_IN8(load,0,0);
    VL_OUT8(hit,0,0);
    VL_OUT8(command_valid,0,0);
    VL_OUT8(command_store,0,0);
    VL_OUT8(command_rready,0,0);
    VL_IN8(bus_valid,0,0);
    VL_IN8(bus_ready,0,0);
    CData/*0:0*/ directCache__DOT__clk;
    CData/*0:0*/ directCache__DOT__reset;
    CData/*0:0*/ directCache__DOT__avalid;
    CData/*0:0*/ directCache__DOT__load;
    CData/*0:0*/ directCache__DOT__hit;
    CData/*0:0*/ directCache__DOT__command_valid;
    CData/*0:0*/ directCache__DOT__command_store;
    CData/*0:0*/ directCache__DOT__command_rready;
    CData/*0:0*/ directCache__DOT__bus_valid;
    CData/*0:0*/ directCache__DOT__bus_ready;
    CData/*3:0*/ directCache__DOT__offset;
    CData/*0:0*/ directCache__DOT__curr_valid;
    CData/*0:0*/ directCache__DOT____Vlvbound_h22f92dc4__0;
    CData/*3:0*/ directCache__DOT__store_modifier__DOT__sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ directCache__DOT__index;
    VL_OUTW(data_to_bus,1023,0,32);
    VL_INW(data_from_bus,1023,0,32);
    VlWide<32>/*1023:0*/ directCache__DOT__data_to_bus;
    VlWide<32>/*1023:0*/ directCache__DOT__data_from_bus;
    VlWide<32>/*1023:0*/ directCache__DOT__dirty_data;
    VlWide<32>/*1023:0*/ directCache__DOT__new_cache_data;
    IData/*31:0*/ directCache__DOT__state;
    IData/*31:0*/ directCache__DOT__next_state;
    VlWide<34400>/*1100799:0*/ directCache__DOT__cache;
    VlWide<32>/*1023:0*/ directCache__DOT____Vlvbound_h08920d1f__0;
    IData/*20:0*/ directCache__DOT____VdfgTmp_ha8191f0f__0;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(aaddr,63,0);
    VL_IN64(data_from_cpu,63,0);
    VL_OUT64(data_to_cpu,63,0);
    VL_OUT64(command_addr,63,0);
    QData/*63:0*/ directCache__DOT__aaddr;
    QData/*63:0*/ directCache__DOT__data_from_cpu;
    QData/*63:0*/ directCache__DOT__data_to_cpu;
    QData/*63:0*/ directCache__DOT__command_addr;
    QData/*63:0*/ directCache__DOT__dirty_addr;
    QData/*49:0*/ directCache__DOT__tag;
    QData/*63:0*/ directCache__DOT__new_data;
    QData/*63:0*/ directCache__DOT____Vlvbound_h1b8b6c23__0;
    QData/*49:0*/ directCache__DOT____Vlvbound_h78d7f6ab__0;
    QData/*63:0*/ directCache__DOT____Vlvbound_h1b8b6c23__1;
    VlWide<32>/*1023:0*/ directCache__DOT__store_modifier__DOT__data;
    QData/*63:0*/ directCache__DOT__store_modifier__DOT__new_data;
    VlWide<32>/*1023:0*/ directCache__DOT__store_modifier__DOT__final_data;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ directCache__DOT__TAG_LENGTH = 0x00000032U;
    static constexpr IData/*31:0*/ directCache__DOT__INDEX_LENGTH = 0x0000000aU;
    static constexpr IData/*31:0*/ directCache__DOT__OFFSET_LENGTH = 4U;
    static constexpr IData/*31:0*/ directCache__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ directCache__DOT__ADDR_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ directCache__DOT__STATE_BITS = 1U;
    static constexpr IData/*31:0*/ directCache__DOT__store_modifier__DOT__REG_LOG = 4U;
    static constexpr IData/*31:0*/ directCache__DOT__store_modifier__DOT__DATA_WIDTH = 0x00000040U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
