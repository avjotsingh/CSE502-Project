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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
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
            VL_FATAL_MT("directCache.sv", 1, "", "Settle region did not converge.");
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
    vlSelf->avalid = VL_RAND_RESET_I(1);
    vlSelf->aaddr = VL_RAND_RESET_Q(64);
    vlSelf->load = VL_RAND_RESET_I(1);
    vlSelf->data_from_cpu = VL_RAND_RESET_Q(64);
    vlSelf->data_to_cpu = VL_RAND_RESET_Q(64);
    vlSelf->hit = VL_RAND_RESET_I(1);
    vlSelf->command_valid = VL_RAND_RESET_I(1);
    vlSelf->command_store = VL_RAND_RESET_I(1);
    vlSelf->command_rready = VL_RAND_RESET_I(1);
    vlSelf->command_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->data_to_bus);
    VL_RAND_RESET_W(1024, vlSelf->data_from_bus);
    vlSelf->bus_valid = VL_RAND_RESET_I(1);
    vlSelf->bus_ready = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__avalid = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__aaddr = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__data_from_cpu = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT__data_to_cpu = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__command_valid = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__command_store = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__command_rready = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__command_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT__data_to_bus);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT__data_from_bus);
    vlSelf->directCache__DOT__bus_valid = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__bus_ready = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT__dirty_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT__dirty_data);
    vlSelf->directCache__DOT__tag = VL_RAND_RESET_Q(50);
    vlSelf->directCache__DOT__index = VL_RAND_RESET_I(10);
    vlSelf->directCache__DOT__offset = VL_RAND_RESET_I(4);
    vlSelf->directCache__DOT__curr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT__new_cache_data);
    vlSelf->directCache__DOT__new_data = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT__state = 0;
    vlSelf->directCache__DOT__next_state = 0;
    VL_RAND_RESET_W(1100800, vlSelf->directCache__DOT__cache);
    vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT____Vlvbound_h08920d1f__0);
    vlSelf->directCache__DOT____Vlvbound_h78d7f6ab__0 = VL_RAND_RESET_Q(50);
    vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__1 = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT____Vlvbound_h22f92dc4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT____Vlvbound_h08920d1f__1);
    vlSelf->directCache__DOT____Vlvbound_h78d7f6ab__1 = VL_RAND_RESET_Q(50);
    vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__2 = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT____Vlvbound_h22f92dc4__1 = VL_RAND_RESET_I(1);
    vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0 = 0;
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT__store_modifier__DOT__data);
    vlSelf->directCache__DOT__store_modifier__DOT__new_data = VL_RAND_RESET_Q(64);
    vlSelf->directCache__DOT__store_modifier__DOT__sel = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(1024, vlSelf->directCache__DOT__store_modifier__DOT__final_data);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
