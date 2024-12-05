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
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("Initializing top, entry point = 0x%x\n",
              64,vlSelf->entry);
    vlSelf->top__DOT__instruction_cache__DOT__avalid = 1U;
    vlSelf->top__DOT__instruction_cache__DOT__load = 1U;
    vlSelf->top__DOT__instruction_cache__DOT__data_from_cpu = 0U;
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
            VL_FATAL_MT("top.sv", 3, "", "Settle region did not converge.");
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
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
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
    vlSelf->entry = VL_RAND_RESET_Q(64);
    vlSelf->stackptr = VL_RAND_RESET_Q(64);
    vlSelf->satp = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_awid = VL_RAND_RESET_I(13);
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
    vlSelf->m_axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_bid = VL_RAND_RESET_I(13);
    vlSelf->m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->m_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_arid = VL_RAND_RESET_I(13);
    vlSelf->m_axi_araddr = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->m_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->m_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->m_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_rid = VL_RAND_RESET_I(13);
    vlSelf->m_axi_rdata = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->m_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->m_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_acvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axi_acready = VL_RAND_RESET_I(1);
    vlSelf->m_axi_acaddr = VL_RAND_RESET_Q(64);
    vlSelf->m_axi_acsnoop = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hz32768timer = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__entry = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__stackptr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__satp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_axi_awid = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__m_axi_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__m_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__m_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_bid = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__m_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_arid = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__m_axi_araddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__m_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__m_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_rid = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__m_axi_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__m_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_acvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_acready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_axi_acaddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_axi_acsnoop = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pc_cpu = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_if = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_ex = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__next_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__predicted_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__instruction_cache_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_cache_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__if_id_decoder_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_predictor__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_predictor__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_predictor__DOT__pc_if = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_predictor__DOT__pc_ex = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_predictor__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_predictor__DOT__predicted_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_predictor__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_RAND_RESET_W(119, vlSelf->top__DOT__branch_predictor__DOT__btb_mem[__Vi0]);
    }
    vlSelf->top__DOT__branch_predictor__DOT__index_if = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__branch_predictor__DOT__index_ex = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__branch_predictor__DOT__pc_tag_if = VL_RAND_RESET_Q(54);
    vlSelf->top__DOT__branch_predictor__DOT__pc_tag_ex = VL_RAND_RESET_Q(54);
    vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_predictor__DOT__hit_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_predictor__DOT__current_tag = VL_RAND_RESET_Q(54);
    vlSelf->top__DOT__branch_predictor__DOT__current_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__branch_predictor__DOT__current_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__avalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__aaddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__instruction_cache__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__data_from_cpu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction_cache__DOT__data_to_cpu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction_cache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__command_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__command_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__command_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__command_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT__data_to_bus);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT__data_from_bus);
    vlSelf->top__DOT__instruction_cache__DOT__bus_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__bus_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instruction_cache__DOT__dirty_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT__dirty_data);
    vlSelf->top__DOT__instruction_cache__DOT__tag = VL_RAND_RESET_Q(49);
    vlSelf->top__DOT__instruction_cache__DOT__index = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__instruction_cache__DOT__offset = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__instruction_cache__DOT__curr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT__new_cache_data);
    vlSelf->top__DOT__instruction_cache__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction_cache__DOT__state = 0;
    vlSelf->top__DOT__instruction_cache__DOT__next_state = 0;
    VL_RAND_RESET_W(1099776, vlSelf->top__DOT__instruction_cache__DOT__cache);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0);
    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__0 = VL_RAND_RESET_Q(49);
    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1);
    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__1 = VL_RAND_RESET_Q(49);
    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data);
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__sel = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data);
    vlSelf->top__DOT__if_id__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_id__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_id__DOT__pc_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_id__DOT__instruction_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__if_id__DOT__pc_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_id__DOT__instruction_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__if_id__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_id__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
