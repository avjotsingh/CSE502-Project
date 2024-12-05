// Verilated -*- SystemC -*-
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
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__top__clk__0 
        = vlSelf->__Vcellinp__top__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("Initializing top, entry point = 0x%x\n",
              64,vlSelf->__Vcellinp__top__entry);
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__reset, vlSelf->reset);
    VL_ASSIGN_QSQ(64,vlSelf->__Vcellinp__top__entry, vlSelf->entry);
    VL_ASSIGN_SII(13,vlSelf->m_axi_awid, vlSelf->__Vcellout__top__m_axi_awid);
    VL_ASSIGN_SQQ(64,vlSelf->m_axi_awaddr, vlSelf->__Vcellout__top__m_axi_awaddr);
    VL_ASSIGN_SII(8,vlSelf->m_axi_awlen, vlSelf->__Vcellout__top__m_axi_awlen);
    VL_ASSIGN_SII(3,vlSelf->m_axi_awsize, vlSelf->__Vcellout__top__m_axi_awsize);
    VL_ASSIGN_SII(2,vlSelf->m_axi_awburst, vlSelf->__Vcellout__top__m_axi_awburst);
    VL_ASSIGN_SII(1,vlSelf->m_axi_awlock, vlSelf->__Vcellout__top__m_axi_awlock);
    VL_ASSIGN_SII(4,vlSelf->m_axi_awcache, vlSelf->__Vcellout__top__m_axi_awcache);
    VL_ASSIGN_SII(3,vlSelf->m_axi_awprot, vlSelf->__Vcellout__top__m_axi_awprot);
    VL_ASSIGN_SII(1,vlSelf->m_axi_awvalid, vlSelf->__Vcellout__top__m_axi_awvalid);
    VL_ASSIGN_SQQ(64,vlSelf->m_axi_wdata, vlSelf->__Vcellout__top__m_axi_wdata);
    VL_ASSIGN_SII(8,vlSelf->m_axi_wstrb, vlSelf->__Vcellout__top__m_axi_wstrb);
    VL_ASSIGN_SII(1,vlSelf->m_axi_wlast, vlSelf->__Vcellout__top__m_axi_wlast);
    VL_ASSIGN_SII(1,vlSelf->m_axi_wvalid, vlSelf->__Vcellout__top__m_axi_wvalid);
    VL_ASSIGN_SII(1,vlSelf->m_axi_bready, vlSelf->__Vcellout__top__m_axi_bready);
    VL_ASSIGN_SII(13,vlSelf->m_axi_arid, vlSelf->__Vcellout__top__m_axi_arid);
    VL_ASSIGN_SQQ(64,vlSelf->m_axi_araddr, vlSelf->__Vcellout__top__m_axi_araddr);
    VL_ASSIGN_SII(8,vlSelf->m_axi_arlen, vlSelf->__Vcellout__top__m_axi_arlen);
    VL_ASSIGN_SII(3,vlSelf->m_axi_arsize, vlSelf->__Vcellout__top__m_axi_arsize);
    VL_ASSIGN_SII(2,vlSelf->m_axi_arburst, vlSelf->__Vcellout__top__m_axi_arburst);
    VL_ASSIGN_SII(1,vlSelf->m_axi_arlock, vlSelf->__Vcellout__top__m_axi_arlock);
    VL_ASSIGN_SII(4,vlSelf->m_axi_arcache, vlSelf->__Vcellout__top__m_axi_arcache);
    VL_ASSIGN_SII(3,vlSelf->m_axi_arprot, vlSelf->__Vcellout__top__m_axi_arprot);
    VL_ASSIGN_SII(1,vlSelf->m_axi_arvalid, vlSelf->__Vcellout__top__m_axi_arvalid);
    VL_ASSIGN_SII(1,vlSelf->m_axi_rready, vlSelf->__Vcellout__top__m_axi_rready);
    VL_ASSIGN_SII(1,vlSelf->m_axi_acready, vlSelf->__Vcellout__top__m_axi_acready);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge __Vcellinp__top__clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge __Vcellinp__top__clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellout__top__m_axi_acready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__top__m_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__top__m_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->__Vcellout__top__m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__top__m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->__Vcellout__top__m_axi_araddr = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellout__top__m_axi_arid = VL_RAND_RESET_I(13);
    vlSelf->__Vcellout__top__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->__Vcellout__top__m_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellout__top__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__top__m_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__top__m_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->__Vcellout__top__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__top__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->__Vcellout__top__m_axi_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellout__top__m_axi_awid = VL_RAND_RESET_I(13);
    vlSelf->__Vcellinp__top__entry = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__top__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__top__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_cpu = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__top__clk__0 = VL_RAND_RESET_I(1);
}
