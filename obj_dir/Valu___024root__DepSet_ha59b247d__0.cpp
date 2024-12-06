// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ alu__DOT__func;
    alu__DOT__func = 0;
    QData/*63:0*/ alu__DOT__res;
    alu__DOT__res = 0;
    CData/*0:0*/ alu__DOT__decision;
    alu__DOT__decision = 0;
    // Body
    alu__DOT__func = (((IData)(vlSelf->func3) << 8U) 
                      | (IData)(vlSelf->func7));
    alu__DOT__decision = 0U;
    if ((1U & (~ ((0x33U == (IData)(vlSelf->alu_op)) 
                  || (0x13U == (IData)(vlSelf->alu_op)))))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->alu_op)) 
                      || (0x23U == (IData)(vlSelf->alu_op)))))) {
            if ((0x63U == (IData)(vlSelf->alu_op))) {
                if ((0U == (IData)(alu__DOT__func))) {
                    alu__DOT__decision = (vlSelf->data1 
                                          == vlSelf->data2);
                } else if ((0x100U == (IData)(alu__DOT__func))) {
                    alu__DOT__decision = (vlSelf->data1 
                                          != vlSelf->data2);
                } else if ((0x400U == (IData)(alu__DOT__func))) {
                    alu__DOT__decision = VL_LTS_IQQ(64, vlSelf->data1, vlSelf->data2);
                } else if ((0x500U == (IData)(alu__DOT__func))) {
                    alu__DOT__decision = VL_GTES_IQQ(64, vlSelf->data1, vlSelf->data2);
                } else if ((0x600U == (IData)(alu__DOT__func))) {
                    alu__DOT__decision = (vlSelf->data1 
                                          < vlSelf->data2);
                } else if ((0x700U == (IData)(alu__DOT__func))) {
                    alu__DOT__decision = (vlSelf->data1 
                                          >= vlSelf->data2);
                }
            }
        }
    }
    alu__DOT__res = 0ULL;
    if (((0x33U == (IData)(vlSelf->alu_op)) || (0x13U 
                                                == (IData)(vlSelf->alu_op)))) {
        if (((((((((0U == (IData)(alu__DOT__func)) 
                   | (0x20U == (IData)(alu__DOT__func))) 
                  | (0x400U == (IData)(alu__DOT__func))) 
                 | (0x600U == (IData)(alu__DOT__func))) 
                | (0x700U == (IData)(alu__DOT__func))) 
               | (0x100U == (IData)(alu__DOT__func))) 
              | (0x500U == (IData)(alu__DOT__func))) 
             | (0x520U == (IData)(alu__DOT__func)))) {
            alu__DOT__res = ((0U == (IData)(alu__DOT__func))
                              ? (vlSelf->data1 + vlSelf->data2)
                              : ((0x20U == (IData)(alu__DOT__func))
                                  ? (vlSelf->data1 
                                     - vlSelf->data2)
                                  : ((0x400U == (IData)(alu__DOT__func))
                                      ? (vlSelf->data1 
                                         ^ vlSelf->data2)
                                      : ((0x600U == (IData)(alu__DOT__func))
                                          ? (vlSelf->data1 
                                             | vlSelf->data2)
                                          : ((0x700U 
                                              == (IData)(alu__DOT__func))
                                              ? (vlSelf->data1 
                                                 & vlSelf->data2)
                                              : ((0x100U 
                                                  == (IData)(alu__DOT__func))
                                                  ? 
                                                 (vlSelf->data1 
                                                  << 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->data2)))
                                                  : 
                                                 ((0x500U 
                                                   == (IData)(alu__DOT__func))
                                                   ? 
                                                  (vlSelf->data1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->data2)))
                                                   : 
                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->data1, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->data2))))))))));
        } else if (((((((((0x200U == (IData)(alu__DOT__func)) 
                          | (0x300U == (IData)(alu__DOT__func))) 
                         | (1U == (IData)(alu__DOT__func))) 
                        | (0x101U == (IData)(alu__DOT__func))) 
                       | (0x201U == (IData)(alu__DOT__func))) 
                      | (0x301U == (IData)(alu__DOT__func))) 
                     | (0x401U == (IData)(alu__DOT__func))) 
                    | (0x501U == (IData)(alu__DOT__func)))) {
            alu__DOT__res = ((0x200U == (IData)(alu__DOT__func))
                              ? (VL_LTS_IQQ(64, vlSelf->data1, vlSelf->data2)
                                  ? 1ULL : 0ULL) : 
                             ((0x300U == (IData)(alu__DOT__func))
                               ? ((vlSelf->data1 < vlSelf->data2)
                                   ? 1ULL : 0ULL) : 
                              ((1U == (IData)(alu__DOT__func))
                                ? (vlSelf->data1 * vlSelf->data2)
                                : ((0x101U == (IData)(alu__DOT__func))
                                    ? 0ULL : ((0x201U 
                                               == (IData)(alu__DOT__func))
                                               ? 0ULL
                                               : ((0x301U 
                                                   == (IData)(alu__DOT__func))
                                                   ? 0ULL
                                                   : 
                                                  ((0x401U 
                                                    == (IData)(alu__DOT__func))
                                                    ? 
                                                   VL_DIVS_QQQ(64, vlSelf->data1, vlSelf->data2)
                                                    : 
                                                   VL_DIV_QQQ(64, vlSelf->data1, vlSelf->data2))))))));
        } else if ((0x601U == (IData)(alu__DOT__func))) {
            alu__DOT__res = VL_MODDIVS_QQQ(64, vlSelf->data1, vlSelf->data2);
        } else if ((0x701U == (IData)(alu__DOT__func))) {
            alu__DOT__res = VL_MODDIV_QQQ(64, vlSelf->data1, vlSelf->data2);
        }
    } else if (((3U == (IData)(vlSelf->alu_op)) || 
                (0x23U == (IData)(vlSelf->alu_op)))) {
        alu__DOT__res = (vlSelf->data1 + vlSelf->data2);
    } else if ((0x63U != (IData)(vlSelf->alu_op))) {
        if (((0x6fU == (IData)(vlSelf->alu_op)) || 
             (0x67U == (IData)(vlSelf->alu_op)))) {
            alu__DOT__res = (4ULL + vlSelf->data1);
        } else if ((0x37U == (IData)(vlSelf->alu_op))) {
            alu__DOT__res = vlSelf->data2;
        } else if ((0x17U == (IData)(vlSelf->alu_op))) {
            alu__DOT__res = (vlSelf->data1 + vlSelf->data2);
        } else if (((0x3bU == (IData)(vlSelf->alu_op)) 
                    || (0x1bU == (IData)(vlSelf->alu_op)))) {
            if ((0U == (IData)(alu__DOT__func))) {
                vlSelf->alu__DOT__temp = ((IData)(vlSelf->data1) 
                                          + (IData)(vlSelf->data2));
                alu__DOT__res = VL_EXTENDS_QI(64,32, vlSelf->alu__DOT__temp);
            } else if ((0x20U == (IData)(alu__DOT__func))) {
                vlSelf->alu__DOT__temp = ((IData)(vlSelf->data1) 
                                          - (IData)(vlSelf->data2));
                alu__DOT__res = VL_EXTENDS_QI(64,32, vlSelf->alu__DOT__temp);
            } else if ((0x100U == (IData)(alu__DOT__func))) {
                vlSelf->alu__DOT__temp = ((IData)(vlSelf->data1) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->data2)));
                alu__DOT__res = VL_EXTENDS_QI(64,32, vlSelf->alu__DOT__temp);
            } else if ((0x500U == (IData)(alu__DOT__func))) {
                vlSelf->alu__DOT__temp = ((IData)(vlSelf->data1) 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->data2)));
                alu__DOT__res = VL_EXTENDS_QI(64,32, vlSelf->alu__DOT__temp);
            } else if ((0x520U == (IData)(alu__DOT__func))) {
                vlSelf->alu__DOT__temp = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->data1), 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->data2)));
                alu__DOT__res = VL_EXTENDS_QI(64,32, vlSelf->alu__DOT__temp);
            }
        }
    }
    vlSelf->branch_decision = alu__DOT__decision;
    vlSelf->alu_res = alu__DOT__res;
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
}

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu/alu.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu/alu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu/alu.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_op & 0x80U))) {
        Verilated::overWidthError("alu_op");}
    if (VL_UNLIKELY((vlSelf->func3 & 0xf8U))) {
        Verilated::overWidthError("func3");}
    if (VL_UNLIKELY((vlSelf->func7 & 0x80U))) {
        Verilated::overWidthError("func7");}
}
#endif  // VL_DEBUG
