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
        VL_OUT8(m_axi_awlen,7,0);
        VL_OUT8(m_axi_awsize,2,0);
        VL_OUT8(m_axi_awburst,1,0);
        VL_OUT8(m_axi_awlock,0,0);
        VL_OUT8(m_axi_awcache,3,0);
        VL_OUT8(m_axi_awprot,2,0);
        VL_OUT8(m_axi_awvalid,0,0);
        VL_IN8(m_axi_awready,0,0);
        VL_OUT8(m_axi_wstrb,7,0);
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
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__hz32768timer;
        CData/*7:0*/ top__DOT__m_axi_awlen;
        CData/*2:0*/ top__DOT__m_axi_awsize;
        CData/*1:0*/ top__DOT__m_axi_awburst;
        CData/*0:0*/ top__DOT__m_axi_awlock;
        CData/*3:0*/ top__DOT__m_axi_awcache;
        CData/*2:0*/ top__DOT__m_axi_awprot;
        CData/*0:0*/ top__DOT__m_axi_awvalid;
        CData/*0:0*/ top__DOT__m_axi_awready;
        CData/*7:0*/ top__DOT__m_axi_wstrb;
        CData/*0:0*/ top__DOT__m_axi_wlast;
        CData/*0:0*/ top__DOT__m_axi_wvalid;
        CData/*0:0*/ top__DOT__m_axi_wready;
        CData/*1:0*/ top__DOT__m_axi_bresp;
        CData/*0:0*/ top__DOT__m_axi_bvalid;
        CData/*0:0*/ top__DOT__m_axi_bready;
        CData/*7:0*/ top__DOT__m_axi_arlen;
        CData/*2:0*/ top__DOT__m_axi_arsize;
        CData/*1:0*/ top__DOT__m_axi_arburst;
        CData/*0:0*/ top__DOT__m_axi_arlock;
        CData/*3:0*/ top__DOT__m_axi_arcache;
        CData/*2:0*/ top__DOT__m_axi_arprot;
        CData/*0:0*/ top__DOT__m_axi_arvalid;
        CData/*0:0*/ top__DOT__m_axi_arready;
        CData/*1:0*/ top__DOT__m_axi_rresp;
        CData/*0:0*/ top__DOT__m_axi_rlast;
        CData/*0:0*/ top__DOT__m_axi_rvalid;
        CData/*0:0*/ top__DOT__m_axi_rready;
        CData/*0:0*/ top__DOT__m_axi_acvalid;
    };
    struct {
        CData/*0:0*/ top__DOT__m_axi_acready;
        CData/*3:0*/ top__DOT__m_axi_acsnoop;
        CData/*0:0*/ top__DOT__branch_taken_ex;
        CData/*0:0*/ top__DOT__instruction_cache_hit;
        CData/*0:0*/ top__DOT__data_cache_hit;
        CData/*0:0*/ top__DOT__branch_predictor__DOT__clk;
        CData/*0:0*/ top__DOT__branch_predictor__DOT__reset;
        CData/*0:0*/ top__DOT__branch_predictor__DOT__branch_taken_ex;
        CData/*0:0*/ top__DOT__branch_predictor__DOT__hit;
        CData/*0:0*/ top__DOT__branch_predictor__DOT__hit_;
        CData/*0:0*/ top__DOT__branch_predictor__DOT__current_valid;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__clk;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__reset;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__avalid;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__load;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__hit;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__command_valid;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__command_store;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__command_rready;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__bus_valid;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__bus_ready;
        CData/*4:0*/ top__DOT__instruction_cache__DOT__offset;
        CData/*0:0*/ top__DOT__instruction_cache__DOT__curr_valid;
        CData/*0:0*/ top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__0;
        CData/*0:0*/ top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__1;
        CData/*4:0*/ top__DOT__instruction_cache__DOT__store_modifier__DOT__sel;
        CData/*0:0*/ top__DOT__if_id__DOT__clk;
        CData/*0:0*/ top__DOT__if_id__DOT__reset;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(m_axi_awid,12,0);
        VL_IN16(m_axi_bid,12,0);
        VL_OUT16(m_axi_arid,12,0);
        VL_IN16(m_axi_rid,12,0);
        SData/*12:0*/ top__DOT__m_axi_awid;
        SData/*12:0*/ top__DOT__m_axi_bid;
        SData/*12:0*/ top__DOT__m_axi_arid;
        SData/*12:0*/ top__DOT__m_axi_rid;
        SData/*9:0*/ top__DOT__branch_predictor__DOT__index_if;
        SData/*9:0*/ top__DOT__branch_predictor__DOT__index_ex;
        SData/*9:0*/ top__DOT__instruction_cache__DOT__index;
        IData/*31:0*/ top__DOT__cache_instr;
        IData/*31:0*/ top__DOT__if_id_decoder_instr;
        IData/*31:0*/ top__DOT__instruction_cache__DOT__data_from_cpu;
        IData/*31:0*/ top__DOT__instruction_cache__DOT__data_to_cpu;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT__data_to_bus;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT__data_from_bus;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT__dirty_data;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT__new_cache_data;
        IData/*31:0*/ top__DOT__instruction_cache__DOT__new_data;
        IData/*31:0*/ top__DOT__instruction_cache__DOT__state;
        IData/*31:0*/ top__DOT__instruction_cache__DOT__next_state;
        VlWide<34368>/*1099775:0*/ top__DOT__instruction_cache__DOT__cache;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT__store_modifier__DOT__data;
        IData/*31:0*/ top__DOT__instruction_cache__DOT__store_modifier__DOT__new_data;
        VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data;
        IData/*31:0*/ top__DOT__if_id__DOT__instruction_in;
        IData/*31:0*/ top__DOT__if_id__DOT__instruction_out;
        IData/*31:0*/ top__DOT__if_id__DOT__instruction;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VL_IN64(entry,63,0);
        VL_IN64(stackptr,63,0);
        VL_IN64(satp,63,0);
        VL_OUT64(m_axi_awaddr,63,0);
        VL_OUT64(m_axi_wdata,63,0);
        VL_OUT64(m_axi_araddr,63,0);
        VL_IN64(m_axi_rdata,63,0);
        VL_IN64(m_axi_acaddr,63,0);
        QData/*63:0*/ top__DOT__entry;
        QData/*63:0*/ top__DOT__stackptr;
        QData/*63:0*/ top__DOT__satp;
        QData/*63:0*/ top__DOT__m_axi_awaddr;
        QData/*63:0*/ top__DOT__m_axi_wdata;
        QData/*63:0*/ top__DOT__m_axi_araddr;
        QData/*63:0*/ top__DOT__m_axi_rdata;
        QData/*63:0*/ top__DOT__m_axi_acaddr;
        QData/*63:0*/ top__DOT__pc_cpu;
        QData/*63:0*/ top__DOT__pc_if;
        QData/*63:0*/ top__DOT__pc_ex;
        QData/*63:0*/ top__DOT__next_pc;
        QData/*63:0*/ top__DOT__predicted_target;
        QData/*63:0*/ top__DOT__branch_predictor__DOT__pc_if;
        QData/*63:0*/ top__DOT__branch_predictor__DOT__pc_ex;
        QData/*63:0*/ top__DOT__branch_predictor__DOT__target_addr_ex;
        QData/*63:0*/ top__DOT__branch_predictor__DOT__predicted_target;
        QData/*53:0*/ top__DOT__branch_predictor__DOT__pc_tag_if;
        QData/*53:0*/ top__DOT__branch_predictor__DOT__pc_tag_ex;
        QData/*63:0*/ top__DOT__branch_predictor__DOT__predicted_target_;
        QData/*53:0*/ top__DOT__branch_predictor__DOT__current_tag;
        QData/*63:0*/ top__DOT__branch_predictor__DOT__current_target;
        QData/*63:0*/ top__DOT__instruction_cache__DOT__aaddr;
        QData/*63:0*/ top__DOT__instruction_cache__DOT__command_addr;
        QData/*63:0*/ top__DOT__instruction_cache__DOT__dirty_addr;
        QData/*48:0*/ top__DOT__instruction_cache__DOT__tag;
        QData/*48:0*/ top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__0;
        QData/*48:0*/ top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__1;
        QData/*63:0*/ top__DOT__if_id__DOT__pc_in;
        QData/*63:0*/ top__DOT__if_id__DOT__pc_out;
        QData/*63:0*/ top__DOT__if_id__DOT__pc;
        VlUnpacked<VlWide<4>/*118:0*/, 1024> top__DOT__branch_predictor__DOT__btb_mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__ID_WIDTH = 0x0000000dU;
    static constexpr IData/*31:0*/ top__DOT__ADDR_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ top__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ top__DOT__STRB_WIDTH = 8U;
    static constexpr IData/*31:0*/ top__DOT__branch_predictor__DOT__ADDR_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ top__DOT__branch_predictor__DOT__INDEX_WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ top__DOT__branch_predictor__DOT__TAG_WIDTH = 0x00000036U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__TAG_LENGTH = 0x00000031U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__INDEX_LENGTH = 0x0000000aU;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__OFFSET_LENGTH = 5U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__ADDR_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__STATE_BITS = 1U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__store_modifier__DOT__REG_LOG = 5U;
    static constexpr IData/*31:0*/ top__DOT__instruction_cache__DOT__store_modifier__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__if_id__DOT__INSTR_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__if_id__DOT__DATA_WIDTH = 0x00000040U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
