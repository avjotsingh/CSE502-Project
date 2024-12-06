// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->cacheMemoryBus__DOT__m_axi_arburst = 2U;
    vlSelf->cacheMemoryBus__DOT__m_axi_arlen = 7U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("cacheMemoryBus.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->hz32768timer = VL_RAND_RESET_I(1);
    vlSelf->command_valid = VL_RAND_RESET_I(2);
    vlSelf->command_store = VL_RAND_RESET_I(2);
    vlSelf->command_rready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->command_addr);
    VL_RAND_RESET_W(2048, vlSelf->data_in);
    vlSelf->bus_valid = VL_RAND_RESET_I(2);
    vlSelf->bus_ready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(1024, vlSelf->data_out);
    vlSelf->invalidate = VL_RAND_RESET_I(1);
    vlSelf->invalidate_addr = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->m_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->m_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->m_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->m_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_araddr = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->m_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->m_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->m_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_rdata = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->m_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->m_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_acvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_acready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_acaddr = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_acsnoop = VL_RAND_RESET_I(4);
    vlSelf->cacheMemoryBus__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__hz32768timer = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__command_valid = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__command_store = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__command_rready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->cacheMemoryBus__DOT__command_addr);
    VL_RAND_RESET_W(2048, vlSelf->cacheMemoryBus__DOT__data_in);
    vlSelf->cacheMemoryBus__DOT__bus_valid = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__bus_ready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(1024, vlSelf->cacheMemoryBus__DOT__data_out);
    vlSelf->cacheMemoryBus__DOT__invalidate = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__invalidate_addr = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__m_axi_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->cacheMemoryBus__DOT__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->cacheMemoryBus__DOT__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__m_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->cacheMemoryBus__DOT__m_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__m_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_araddr = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->cacheMemoryBus__DOT__m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->cacheMemoryBus__DOT__m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__m_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->cacheMemoryBus__DOT__m_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_rdata = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__m_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_acvalid = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_acready = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__m_axi_acaddr = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__m_axi_acsnoop = VL_RAND_RESET_I(4);
    vlSelf->cacheMemoryBus__DOT__state = 0;
    vlSelf->cacheMemoryBus__DOT__next_state = 0;
    vlSelf->cacheMemoryBus__DOT__offsetCounter = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(1024, vlSelf->cacheMemoryBus__DOT__data_buffer);
    vlSelf->cacheMemoryBus__DOT__addr_buffer = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__currID = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__currPow2 = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__busChoiceOut = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__invalidate_buffer = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__invalidate_addr_buffer = VL_RAND_RESET_Q(64);
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__candidates = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__broadcast = VL_RAND_RESET_I(2);
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__i = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
