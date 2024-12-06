// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<32>/*1023:0*/ directCache__DOT____Vcellinp__store_modifier__data;
    VL_ZERO_W(1024, directCache__DOT____Vcellinp__store_modifier__data);
    // Body
    vlSelf->directCache__DOT__clk = vlSelf->clk;
    vlSelf->directCache__DOT__reset = vlSelf->reset;
    vlSelf->directCache__DOT__avalid = vlSelf->avalid;
    vlSelf->directCache__DOT__aaddr = vlSelf->aaddr;
    vlSelf->directCache__DOT__load = vlSelf->load;
    vlSelf->directCache__DOT__data_from_bus[0U] = vlSelf->data_from_bus[0U];
    vlSelf->directCache__DOT__data_from_bus[1U] = vlSelf->data_from_bus[1U];
    vlSelf->directCache__DOT__data_from_bus[2U] = vlSelf->data_from_bus[2U];
    vlSelf->directCache__DOT__data_from_bus[3U] = vlSelf->data_from_bus[3U];
    vlSelf->directCache__DOT__data_from_bus[4U] = vlSelf->data_from_bus[4U];
    vlSelf->directCache__DOT__data_from_bus[5U] = vlSelf->data_from_bus[5U];
    vlSelf->directCache__DOT__data_from_bus[6U] = vlSelf->data_from_bus[6U];
    vlSelf->directCache__DOT__data_from_bus[7U] = vlSelf->data_from_bus[7U];
    vlSelf->directCache__DOT__data_from_bus[8U] = vlSelf->data_from_bus[8U];
    vlSelf->directCache__DOT__data_from_bus[9U] = vlSelf->data_from_bus[9U];
    vlSelf->directCache__DOT__data_from_bus[0xaU] = 
        vlSelf->data_from_bus[0xaU];
    vlSelf->directCache__DOT__data_from_bus[0xbU] = 
        vlSelf->data_from_bus[0xbU];
    vlSelf->directCache__DOT__data_from_bus[0xcU] = 
        vlSelf->data_from_bus[0xcU];
    vlSelf->directCache__DOT__data_from_bus[0xdU] = 
        vlSelf->data_from_bus[0xdU];
    vlSelf->directCache__DOT__data_from_bus[0xeU] = 
        vlSelf->data_from_bus[0xeU];
    vlSelf->directCache__DOT__data_from_bus[0xfU] = 
        vlSelf->data_from_bus[0xfU];
    vlSelf->directCache__DOT__data_from_bus[0x10U] 
        = vlSelf->data_from_bus[0x10U];
    vlSelf->directCache__DOT__data_from_bus[0x11U] 
        = vlSelf->data_from_bus[0x11U];
    vlSelf->directCache__DOT__data_from_bus[0x12U] 
        = vlSelf->data_from_bus[0x12U];
    vlSelf->directCache__DOT__data_from_bus[0x13U] 
        = vlSelf->data_from_bus[0x13U];
    vlSelf->directCache__DOT__data_from_bus[0x14U] 
        = vlSelf->data_from_bus[0x14U];
    vlSelf->directCache__DOT__data_from_bus[0x15U] 
        = vlSelf->data_from_bus[0x15U];
    vlSelf->directCache__DOT__data_from_bus[0x16U] 
        = vlSelf->data_from_bus[0x16U];
    vlSelf->directCache__DOT__data_from_bus[0x17U] 
        = vlSelf->data_from_bus[0x17U];
    vlSelf->directCache__DOT__data_from_bus[0x18U] 
        = vlSelf->data_from_bus[0x18U];
    vlSelf->directCache__DOT__data_from_bus[0x19U] 
        = vlSelf->data_from_bus[0x19U];
    vlSelf->directCache__DOT__data_from_bus[0x1aU] 
        = vlSelf->data_from_bus[0x1aU];
    vlSelf->directCache__DOT__data_from_bus[0x1bU] 
        = vlSelf->data_from_bus[0x1bU];
    vlSelf->directCache__DOT__data_from_bus[0x1cU] 
        = vlSelf->data_from_bus[0x1cU];
    vlSelf->directCache__DOT__data_from_bus[0x1dU] 
        = vlSelf->data_from_bus[0x1dU];
    vlSelf->directCache__DOT__data_from_bus[0x1eU] 
        = vlSelf->data_from_bus[0x1eU];
    vlSelf->directCache__DOT__data_from_bus[0x1fU] 
        = vlSelf->data_from_bus[0x1fU];
    vlSelf->directCache__DOT__bus_valid = vlSelf->bus_valid;
    vlSelf->directCache__DOT__bus_ready = vlSelf->bus_ready;
    vlSelf->directCache__DOT__invalidate = vlSelf->invalidate;
    vlSelf->directCache__DOT__invalidate_addr = vlSelf->invalidate_addr;
    vlSelf->data_to_bus[0U] = vlSelf->directCache__DOT__data_to_bus[0U];
    vlSelf->data_to_bus[1U] = vlSelf->directCache__DOT__data_to_bus[1U];
    vlSelf->data_to_bus[2U] = vlSelf->directCache__DOT__data_to_bus[2U];
    vlSelf->data_to_bus[3U] = vlSelf->directCache__DOT__data_to_bus[3U];
    vlSelf->data_to_bus[4U] = vlSelf->directCache__DOT__data_to_bus[4U];
    vlSelf->data_to_bus[5U] = vlSelf->directCache__DOT__data_to_bus[5U];
    vlSelf->data_to_bus[6U] = vlSelf->directCache__DOT__data_to_bus[6U];
    vlSelf->data_to_bus[7U] = vlSelf->directCache__DOT__data_to_bus[7U];
    vlSelf->data_to_bus[8U] = vlSelf->directCache__DOT__data_to_bus[8U];
    vlSelf->data_to_bus[9U] = vlSelf->directCache__DOT__data_to_bus[9U];
    vlSelf->data_to_bus[0xaU] = vlSelf->directCache__DOT__data_to_bus[0xaU];
    vlSelf->data_to_bus[0xbU] = vlSelf->directCache__DOT__data_to_bus[0xbU];
    vlSelf->data_to_bus[0xcU] = vlSelf->directCache__DOT__data_to_bus[0xcU];
    vlSelf->data_to_bus[0xdU] = vlSelf->directCache__DOT__data_to_bus[0xdU];
    vlSelf->data_to_bus[0xeU] = vlSelf->directCache__DOT__data_to_bus[0xeU];
    vlSelf->data_to_bus[0xfU] = vlSelf->directCache__DOT__data_to_bus[0xfU];
    vlSelf->data_to_bus[0x10U] = vlSelf->directCache__DOT__data_to_bus[0x10U];
    vlSelf->data_to_bus[0x11U] = vlSelf->directCache__DOT__data_to_bus[0x11U];
    vlSelf->data_to_bus[0x12U] = vlSelf->directCache__DOT__data_to_bus[0x12U];
    vlSelf->data_to_bus[0x13U] = vlSelf->directCache__DOT__data_to_bus[0x13U];
    vlSelf->data_to_bus[0x14U] = vlSelf->directCache__DOT__data_to_bus[0x14U];
    vlSelf->data_to_bus[0x15U] = vlSelf->directCache__DOT__data_to_bus[0x15U];
    vlSelf->data_to_bus[0x16U] = vlSelf->directCache__DOT__data_to_bus[0x16U];
    vlSelf->data_to_bus[0x17U] = vlSelf->directCache__DOT__data_to_bus[0x17U];
    vlSelf->data_to_bus[0x18U] = vlSelf->directCache__DOT__data_to_bus[0x18U];
    vlSelf->data_to_bus[0x19U] = vlSelf->directCache__DOT__data_to_bus[0x19U];
    vlSelf->data_to_bus[0x1aU] = vlSelf->directCache__DOT__data_to_bus[0x1aU];
    vlSelf->data_to_bus[0x1bU] = vlSelf->directCache__DOT__data_to_bus[0x1bU];
    vlSelf->data_to_bus[0x1cU] = vlSelf->directCache__DOT__data_to_bus[0x1cU];
    vlSelf->data_to_bus[0x1dU] = vlSelf->directCache__DOT__data_to_bus[0x1dU];
    vlSelf->data_to_bus[0x1eU] = vlSelf->directCache__DOT__data_to_bus[0x1eU];
    vlSelf->data_to_bus[0x1fU] = vlSelf->directCache__DOT__data_to_bus[0x1fU];
    vlSelf->directCache__DOT__data_from_cpu = vlSelf->data_from_cpu;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 0U;
            vlSelf->directCache__DOT__command_store = 0U;
            vlSelf->directCache__DOT__command_rready = 0U;
            vlSelf->directCache__DOT__invalidate_ack = 1U;
            vlSelf->directCache__DOT__command_addr = 0ULL;
        } else if ((1U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 1U;
            vlSelf->directCache__DOT__command_store = 1U;
            vlSelf->directCache__DOT__command_rready = 0U;
            vlSelf->directCache__DOT__invalidate_ack = 0U;
            vlSelf->directCache__DOT__command_addr 
                = (0xfffffffffffffff0ULL & vlSelf->directCache__DOT__dirty_addr);
        } else if ((2U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 1U;
            vlSelf->directCache__DOT__command_store = 0U;
            vlSelf->directCache__DOT__command_rready = 1U;
            vlSelf->directCache__DOT__invalidate_ack = 0U;
            vlSelf->directCache__DOT__command_addr 
                = (0xfffffffffffffff0ULL & vlSelf->aaddr);
        } else if ((3U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 1U;
            vlSelf->directCache__DOT__command_store = 0U;
            vlSelf->directCache__DOT__command_rready = 1U;
            vlSelf->directCache__DOT__invalidate_ack = 0U;
            vlSelf->directCache__DOT__command_addr 
                = (0xfffffffffffffff0ULL & vlSelf->aaddr);
        }
    }
    vlSelf->directCache__DOT__tag = (vlSelf->aaddr 
                                     >> 0xeU);
    vlSelf->directCache__DOT__offset = (0xfU & (IData)(vlSelf->aaddr));
    vlSelf->directCache__DOT__index = (0x3ffU & (IData)(
                                                        (vlSelf->aaddr 
                                                         >> 4U)));
    vlSelf->directCache__DOT__store_modifier__DOT__new_data 
        = vlSelf->directCache__DOT__data_from_cpu;
    vlSelf->command_valid = vlSelf->directCache__DOT__command_valid;
    vlSelf->command_store = vlSelf->directCache__DOT__command_store;
    vlSelf->command_rready = vlSelf->directCache__DOT__command_rready;
    vlSelf->invalidate_ack = vlSelf->directCache__DOT__invalidate_ack;
    vlSelf->command_addr = vlSelf->directCache__DOT__command_addr;
    vlSelf->directCache__DOT__store_modifier__DOT__sel 
        = vlSelf->directCache__DOT__offset;
    vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0 
        = (0x1fffffU & (((IData)(0x433U) * (IData)(vlSelf->directCache__DOT__index)) 
                        + (0x7ffU & ((IData)(0x7f3U) 
                                     + VL_SHIFTL_III(11,11,32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->directCache__DOT__offset)), 6U)))));
    if ((0x10cbffU >= (0x1fffffU & ((IData)(0x33U) 
                                    + ((IData)(0x433U) 
                                       * (IData)(vlSelf->directCache__DOT__index)))))) {
        directCache__DOT____Vcellinp__store_modifier__data[0U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(1U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[(0xffffU 
                                                   & (((IData)(0x33U) 
                                                       + 
                                                       ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index))) 
                                                      >> 5U))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[1U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(2U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(1U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[2U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(3U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(2U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[3U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(4U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(3U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[4U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(5U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(4U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[5U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(6U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(5U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[6U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(7U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(6U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[7U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(8U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(7U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[8U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(9U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(8U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[9U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xaU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(9U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xbU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xaU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xcU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xbU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xdU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xcU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xeU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xdU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xfU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xeU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x10U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xfU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x11U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x10U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x12U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x11U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x13U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x12U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x14U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x13U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x15U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x14U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x16U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x15U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x17U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x16U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x18U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x17U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x19U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x18U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1aU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x19U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1bU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1aU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1cU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1bU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1dU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1cU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1eU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1dU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1fU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1eU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x20U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1fU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
    } else {
        directCache__DOT____Vcellinp__store_modifier__data[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        directCache__DOT____Vcellinp__store_modifier__data[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        directCache__DOT____Vcellinp__store_modifier__data[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        directCache__DOT____Vcellinp__store_modifier__data[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        directCache__DOT____Vcellinp__store_modifier__data[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        directCache__DOT____Vcellinp__store_modifier__data[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        directCache__DOT____Vcellinp__store_modifier__data[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        directCache__DOT____Vcellinp__store_modifier__data[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        directCache__DOT____Vcellinp__store_modifier__data[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        directCache__DOT____Vcellinp__store_modifier__data[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        directCache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        directCache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        directCache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        directCache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        directCache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        directCache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        directCache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        directCache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        directCache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        directCache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        directCache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        directCache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        directCache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        directCache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        directCache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        directCache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        directCache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    vlSelf->directCache__DOT__curr_valid = ((0x10cbffU 
                                             >= (0x1fffffU 
                                                 & ((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x433U) 
                                                     * (IData)(vlSelf->directCache__DOT__index))))) 
                                            && (1U 
                                                & (vlSelf->directCache__DOT__cache[
                                                   (0xffffU 
                                                    & (((IData)(0x32U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x32U) 
                                                       + 
                                                       ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index)))))));
    vlSelf->data_to_cpu = ((0x10cbffU >= vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0)
                            ? (((QData)((IData)(vlSelf->directCache__DOT__cache[
                                                (((IData)(0x3fU) 
                                                  + vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0)))) 
                               | (((0U == (0x1fU & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlSelf->directCache__DOT__cache[
                                                              (((IData)(0x1fU) 
                                                                + vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0)))) 
                                  | ((QData)((IData)(
                                                     vlSelf->directCache__DOT__cache[
                                                     (vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0 
                                                      >> 5U)])) 
                                     >> (0x1fU & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0))))
                            : 0ULL);
    vlSelf->directCache__DOT__store_modifier__DOT__data[0U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[1U] 
        = directCache__DOT____Vcellinp__store_modifier__data[1U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[2U] 
        = directCache__DOT____Vcellinp__store_modifier__data[2U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[3U] 
        = directCache__DOT____Vcellinp__store_modifier__data[3U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[4U] 
        = directCache__DOT____Vcellinp__store_modifier__data[4U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[5U] 
        = directCache__DOT____Vcellinp__store_modifier__data[5U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[6U] 
        = directCache__DOT____Vcellinp__store_modifier__data[6U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[7U] 
        = directCache__DOT____Vcellinp__store_modifier__data[7U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[8U] 
        = directCache__DOT____Vcellinp__store_modifier__data[8U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[9U] 
        = directCache__DOT____Vcellinp__store_modifier__data[9U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xaU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xaU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xbU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xbU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xcU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xcU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xdU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xdU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xeU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xeU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xfU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xfU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x10U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x10U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x11U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x11U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x12U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x12U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x13U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x13U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x14U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x14U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x15U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x15U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x16U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x16U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x17U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x17U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x18U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x18U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x19U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x19U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1aU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1aU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1bU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1bU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1cU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1cU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1dU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1dU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1eU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1eU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1fU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1fU];
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1cU] 
        = (IData)(((0xeU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x1dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1cU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1dU] 
        = (IData)((((0xeU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1dU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x1cU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1eU] 
        = (IData)(((0xfU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1eU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1fU] 
        = (IData)((((0xfU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x1eU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x18U] 
        = (IData)(((0xcU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x19U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x18U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x19U] 
        = (IData)((((0xcU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x19U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x18U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1aU] 
        = (IData)(((0xdU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x1bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1aU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1bU] 
        = (IData)((((0xdU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1bU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x1aU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x14U] 
        = (IData)(((0xaU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x15U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x14U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x15U] 
        = (IData)((((0xaU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x15U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x14U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x16U] 
        = (IData)(((0xbU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x17U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x16U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x17U] 
        = (IData)((((0xbU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x17U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x16U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x10U] 
        = (IData)(((8U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x11U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x10U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x11U] 
        = (IData)((((8U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x11U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x10U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x12U] 
        = (IData)(((9U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x13U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x12U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x13U] 
        = (IData)((((9U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x13U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x12U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xcU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xdU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0xcU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xeU] 
        = (IData)(((7U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xeU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xfU] 
        = (IData)((((7U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xfU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0xeU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[8U] 
        = (IData)(((4U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[8U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[9U] 
        = (IData)((((4U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[9U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[8U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xaU] 
        = (IData)(((5U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xaU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xbU] 
        = (IData)((((5U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xbU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0xaU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[4U] 
        = (IData)(((2U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[4U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[5U] 
        = (IData)((((2U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[4U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[6U] 
        = (IData)(((3U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[6U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[7U] 
        = (IData)((((3U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[6U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0U] 
        = (IData)(((0U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[1U] 
        = (IData)((((0U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[2U] 
        = (IData)(((1U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[2U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[3U] 
        = (IData)((((1U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[2U])))) 
                   >> 0x20U));
    vlSelf->hit = ((vlSelf->directCache__DOT__tag == 
                    ((0x10cbffU >= (0x1fffffU & ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))
                      ? (0x3ffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->directCache__DOT__cache[
                                                                (((IData)(0x31U) 
                                                                  + 
                                                                  (0x1fffffU 
                                                                   & ((IData)(0x433U) 
                                                                      * (IData)(vlSelf->directCache__DOT__index)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x433U) 
                                                      * (IData)(vlSelf->directCache__DOT__index))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x433U) 
                                                      * (IData)(vlSelf->directCache__DOT__index)))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->directCache__DOT__cache[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0x1fffffU 
                                                                       & ((IData)(0x433U) 
                                                                          * (IData)(vlSelf->directCache__DOT__index)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index)))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->directCache__DOT__cache[
                                                                     (0xffffU 
                                                                      & (((IData)(0x433U) 
                                                                          * (IData)(vlSelf->directCache__DOT__index)) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index)))))))
                      : 0ULL)) & (IData)(vlSelf->directCache__DOT__curr_valid));
    vlSelf->directCache__DOT__data_to_cpu = vlSelf->data_to_cpu;
    vlSelf->directCache__DOT__new_cache_data[0U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[0U];
    vlSelf->directCache__DOT__new_cache_data[1U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[1U];
    vlSelf->directCache__DOT__new_cache_data[2U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[2U];
    vlSelf->directCache__DOT__new_cache_data[3U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[3U];
    vlSelf->directCache__DOT__new_cache_data[4U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[4U];
    vlSelf->directCache__DOT__new_cache_data[5U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[5U];
    vlSelf->directCache__DOT__new_cache_data[6U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[6U];
    vlSelf->directCache__DOT__new_cache_data[7U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[7U];
    vlSelf->directCache__DOT__new_cache_data[8U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[8U];
    vlSelf->directCache__DOT__new_cache_data[9U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[9U];
    vlSelf->directCache__DOT__new_cache_data[0xaU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xaU];
    vlSelf->directCache__DOT__new_cache_data[0xbU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xbU];
    vlSelf->directCache__DOT__new_cache_data[0xcU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xcU];
    vlSelf->directCache__DOT__new_cache_data[0xdU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xdU];
    vlSelf->directCache__DOT__new_cache_data[0xeU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xeU];
    vlSelf->directCache__DOT__new_cache_data[0xfU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xfU];
    vlSelf->directCache__DOT__new_cache_data[0x10U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x10U];
    vlSelf->directCache__DOT__new_cache_data[0x11U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x11U];
    vlSelf->directCache__DOT__new_cache_data[0x12U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x12U];
    vlSelf->directCache__DOT__new_cache_data[0x13U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x13U];
    vlSelf->directCache__DOT__new_cache_data[0x14U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x14U];
    vlSelf->directCache__DOT__new_cache_data[0x15U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x15U];
    vlSelf->directCache__DOT__new_cache_data[0x16U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x16U];
    vlSelf->directCache__DOT__new_cache_data[0x17U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x17U];
    vlSelf->directCache__DOT__new_cache_data[0x18U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x18U];
    vlSelf->directCache__DOT__new_cache_data[0x19U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x19U];
    vlSelf->directCache__DOT__new_cache_data[0x1aU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1aU];
    vlSelf->directCache__DOT__new_cache_data[0x1bU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1bU];
    vlSelf->directCache__DOT__new_cache_data[0x1cU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1cU];
    vlSelf->directCache__DOT__new_cache_data[0x1dU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1dU];
    vlSelf->directCache__DOT__new_cache_data[0x1eU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1eU];
    vlSelf->directCache__DOT__new_cache_data[0x1fU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1fU];
    vlSelf->directCache__DOT__hit = vlSelf->hit;
    if ((0U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = (((~ (IData)(vlSelf->invalidate)) 
                                                 & (IData)(vlSelf->avalid))
                                                 ? 
                                                ((IData)(vlSelf->hit)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->directCache__DOT__curr_valid)
                                                   ? 2U
                                                   : 3U))
                                                 : 0U);
    } else if ((1U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = ((IData)(vlSelf->bus_ready)
                                                 ? 0U
                                                 : 1U);
    } else if ((2U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = ((IData)(vlSelf->bus_valid)
                                                 ? 1U
                                                 : 2U);
    } else if ((3U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = ((IData)(vlSelf->bus_valid)
                                                 ? 0U
                                                 : 3U);
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<34400>/*1100799:0*/ Vtop__ConstPool__CONST_he2c34ccb_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<34400>/*1100799:0*/ __Vdly__directCache__DOT__cache;
    VL_ZERO_W(1100800, __Vdly__directCache__DOT__cache);
    // Body
    VL_ASSIGN_W(1100800,__Vdly__directCache__DOT__cache, vlSelf->directCache__DOT__cache);
    if (vlSelf->reset) {
        VL_ASSIGN_W(1100800,__Vdly__directCache__DOT__cache, Vtop__ConstPool__CONST_he2c34ccb_0);
        vlSelf->directCache__DOT__dirty_addr = 0ULL;
        vlSelf->directCache__DOT__dirty_data[0U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->directCache__DOT__dirty_data[1U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->directCache__DOT__dirty_data[2U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->directCache__DOT__dirty_data[3U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->directCache__DOT__dirty_data[4U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->directCache__DOT__dirty_data[5U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->directCache__DOT__dirty_data[6U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->directCache__DOT__dirty_data[7U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->directCache__DOT__dirty_data[8U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->directCache__DOT__dirty_data[9U] = 
            Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->directCache__DOT__dirty_data[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->directCache__DOT__dirty_data[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->directCache__DOT__dirty_data[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->directCache__DOT__dirty_data[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->directCache__DOT__dirty_data[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->directCache__DOT__dirty_data[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->directCache__DOT__dirty_data[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->directCache__DOT__dirty_data[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->directCache__DOT__dirty_data[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->directCache__DOT__dirty_data[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->directCache__DOT__dirty_data[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->directCache__DOT__dirty_data[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->directCache__DOT__dirty_data[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->directCache__DOT__dirty_data[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->directCache__DOT__dirty_data[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->directCache__DOT__dirty_data[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->directCache__DOT__dirty_data[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->directCache__DOT__dirty_data[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->directCache__DOT__dirty_data[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->directCache__DOT__dirty_data[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->directCache__DOT__dirty_data[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->directCache__DOT__dirty_data[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->directCache__DOT__state = 0U;
    } else {
        if ((0U == vlSelf->directCache__DOT__state)) {
            if (((IData)(vlSelf->invalidate) & (((0x10cbffU 
                                                  >= 
                                                  (0x1fffffU 
                                                   & ((IData)(0x433U) 
                                                      * 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->invalidate_addr 
                                                                  >> 4U))))))
                                                  ? 
                                                 (0x3ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->directCache__DOT__cache[
                                                                      (((IData)(0x31U) 
                                                                        + 
                                                                        (0x1fffffU 
                                                                         & ((IData)(0x433U) 
                                                                            * 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlSelf->invalidate_addr 
                                                                                >> 4U)))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x433U) 
                                                            * 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSelf->invalidate_addr 
                                                                        >> 4U))))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x433U) 
                                                            * 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSelf->invalidate_addr 
                                                                        >> 4U)))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x433U) 
                                                              * 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlSelf->invalidate_addr 
                                                                          >> 4U))))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelf->directCache__DOT__cache[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x1fffffU 
                                                                             & ((IData)(0x433U) 
                                                                                * 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->invalidate_addr 
                                                                                >> 4U)))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x433U) 
                                                               * 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlSelf->invalidate_addr 
                                                                           >> 4U)))))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->directCache__DOT__cache[
                                                                           (0xffffU 
                                                                            & (((IData)(0x433U) 
                                                                                * 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->invalidate_addr 
                                                                                >> 4U)))) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x433U) 
                                                               * 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlSelf->invalidate_addr 
                                                                           >> 4U)))))))))
                                                  : 0ULL) 
                                                == 
                                                (vlSelf->invalidate_addr 
                                                 >> 0xeU)))) {
                vlSelf->directCache__DOT____Vlvbound_hb54154a8__0 = 0U;
                if ((0x10cbffU >= (0x1fffffU & ((IData)(0x32U) 
                                                + ((IData)(0x433U) 
                                                   * 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSelf->invalidate_addr 
                                                               >> 4U)))))))) {
                    __Vdly__directCache__DOT__cache[(0xffffU 
                                                     & (((IData)(0x32U) 
                                                         + 
                                                         ((IData)(0x433U) 
                                                          * 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSelf->invalidate_addr 
                                                                      >> 4U))))) 
                                                        >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSelf->invalidate_addr 
                                                                >> 4U)))))))) 
                            & __Vdly__directCache__DOT__cache[
                            (0xffffU & (((IData)(0x32U) 
                                         + ((IData)(0x433U) 
                                            * (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->invalidate_addr 
                                                          >> 4U))))) 
                                        >> 5U))]) | 
                           ((IData)(vlSelf->directCache__DOT____Vlvbound_hb54154a8__0) 
                            << (0x1fU & ((IData)(0x32U) 
                                         + ((IData)(0x433U) 
                                            * (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->invalidate_addr 
                                                          >> 4U))))))));
                }
            } else if (vlSelf->avalid) {
                if (((~ (IData)(vlSelf->hit)) & (IData)(vlSelf->directCache__DOT__curr_valid))) {
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x33U) 
                                        + ((IData)(0x433U) 
                                           * (IData)(vlSelf->directCache__DOT__index)))))) {
                        vlSelf->directCache__DOT__dirty_data[0U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(1U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  (0xffffU & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[1U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(2U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(1U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[2U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(3U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(2U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[3U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(4U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(3U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[4U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(5U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(4U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[5U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(6U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(5U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[6U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(7U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(6U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[7U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(8U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(7U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[8U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(9U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(8U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[9U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0xaU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(9U) + (0xffffU 
                                                  & (((IData)(0x33U) 
                                                      + 
                                                      ((IData)(0x433U) 
                                                       * (IData)(vlSelf->directCache__DOT__index))) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0xaU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0xbU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0xaU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0xbU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0xcU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0xbU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0xcU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0xdU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0xcU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0xdU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0xeU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0xdU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0xeU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0xfU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0xeU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0xfU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x10U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0xfU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x10U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x11U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x10U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x11U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x12U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x11U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x12U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x13U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x12U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x13U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x14U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x13U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x14U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x15U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x14U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x15U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x16U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x15U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x16U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x17U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x16U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x17U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x18U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x17U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x18U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x19U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x18U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x19U] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x1aU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x19U) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x1aU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x1bU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x1aU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x1bU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x1cU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x1bU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x1cU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x1dU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x1cU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x1dU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x1eU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x1dU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x1eU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x1fU) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x1eU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                        vlSelf->directCache__DOT__dirty_data[0x1fU] 
                            = (((0U == (0x1fU & ((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index)))))
                                 ? 0U : (vlSelf->directCache__DOT__cache[
                                         ((IData)(0x20U) 
                                          + (0xffffU 
                                             & (((IData)(0x33U) 
                                                 + 
                                                 ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x33U) 
                                                   + 
                                                   ((IData)(0x433U) 
                                                    * (IData)(vlSelf->directCache__DOT__index))))))) 
                               | (vlSelf->directCache__DOT__cache[
                                  ((IData)(0x1fU) + 
                                   (0xffffU & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                    } else {
                        vlSelf->directCache__DOT__dirty_data[0U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
                        vlSelf->directCache__DOT__dirty_data[1U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
                        vlSelf->directCache__DOT__dirty_data[2U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
                        vlSelf->directCache__DOT__dirty_data[3U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
                        vlSelf->directCache__DOT__dirty_data[4U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
                        vlSelf->directCache__DOT__dirty_data[5U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
                        vlSelf->directCache__DOT__dirty_data[6U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
                        vlSelf->directCache__DOT__dirty_data[7U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
                        vlSelf->directCache__DOT__dirty_data[8U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
                        vlSelf->directCache__DOT__dirty_data[9U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
                        vlSelf->directCache__DOT__dirty_data[0xaU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
                        vlSelf->directCache__DOT__dirty_data[0xbU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
                        vlSelf->directCache__DOT__dirty_data[0xcU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
                        vlSelf->directCache__DOT__dirty_data[0xdU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
                        vlSelf->directCache__DOT__dirty_data[0xeU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
                        vlSelf->directCache__DOT__dirty_data[0xfU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
                        vlSelf->directCache__DOT__dirty_data[0x10U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
                        vlSelf->directCache__DOT__dirty_data[0x11U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
                        vlSelf->directCache__DOT__dirty_data[0x12U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
                        vlSelf->directCache__DOT__dirty_data[0x13U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
                        vlSelf->directCache__DOT__dirty_data[0x14U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
                        vlSelf->directCache__DOT__dirty_data[0x15U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
                        vlSelf->directCache__DOT__dirty_data[0x16U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
                        vlSelf->directCache__DOT__dirty_data[0x17U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
                        vlSelf->directCache__DOT__dirty_data[0x18U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
                        vlSelf->directCache__DOT__dirty_data[0x19U] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
                        vlSelf->directCache__DOT__dirty_data[0x1aU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                        vlSelf->directCache__DOT__dirty_data[0x1bU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                        vlSelf->directCache__DOT__dirty_data[0x1cU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                        vlSelf->directCache__DOT__dirty_data[0x1dU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                        vlSelf->directCache__DOT__dirty_data[0x1eU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                        vlSelf->directCache__DOT__dirty_data[0x1fU] 
                            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
                    }
                    vlSelf->directCache__DOT__dirty_addr 
                        = (((QData)((IData)(vlSelf->directCache__DOT__index)) 
                            << 0x36U) | (((0x10cbffU 
                                           >= (0x1fffffU 
                                               & ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))
                                           ? (0x3ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->directCache__DOT__cache[
                                                                  (((IData)(0x31U) 
                                                                    + 
                                                                    (0x1fffffU 
                                                                     & ((IData)(0x433U) 
                                                                        * (IData)(vlSelf->directCache__DOT__index)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x433U) 
                                                          * (IData)(vlSelf->directCache__DOT__index))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelf->directCache__DOT__cache[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x1fffffU 
                                                                         & ((IData)(0x433U) 
                                                                            * (IData)(vlSelf->directCache__DOT__index)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x433U) 
                                                           * (IData)(vlSelf->directCache__DOT__index)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->directCache__DOT__cache[
                                                                       (0xffffU 
                                                                        & (((IData)(0x433U) 
                                                                            * (IData)(vlSelf->directCache__DOT__index)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x433U) 
                                                           * (IData)(vlSelf->directCache__DOT__index)))))))
                                           : 0ULL) 
                                         << 4U));
                } else if (vlSelf->hit) {
                    if ((1U & (~ (IData)(vlSelf->load)))) {
                        vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__0 
                            = vlSelf->data_from_cpu;
                        if ((0x10cbffU >= (0x1fffffU 
                                           & (((IData)(0x433U) 
                                               * (IData)(vlSelf->directCache__DOT__index)) 
                                              + (0x7ffU 
                                                 & ((IData)(0x7f3U) 
                                                    + 
                                                    VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->directCache__DOT__offset)), 6U))))))) {
                            VL_ASSIGNSEL_WQ(1100800,64,
                                            (0x1fffffU 
                                             & (((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index)) 
                                                + (0x7ffU 
                                                   & ((IData)(0x7f3U) 
                                                      + 
                                                      VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelf->directCache__DOT__offset)), 6U))))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__0);
                        }
                    }
                }
            }
        } else if ((1U != vlSelf->directCache__DOT__state)) {
            if ((2U == vlSelf->directCache__DOT__state)) {
                if (vlSelf->bus_valid) {
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0U] 
                        = vlSelf->data_from_bus[0U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[1U] 
                        = vlSelf->data_from_bus[1U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[2U] 
                        = vlSelf->data_from_bus[2U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[3U] 
                        = vlSelf->data_from_bus[3U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[4U] 
                        = vlSelf->data_from_bus[4U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[5U] 
                        = vlSelf->data_from_bus[5U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[6U] 
                        = vlSelf->data_from_bus[6U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[7U] 
                        = vlSelf->data_from_bus[7U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[8U] 
                        = vlSelf->data_from_bus[8U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[9U] 
                        = vlSelf->data_from_bus[9U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0xaU] 
                        = vlSelf->data_from_bus[0xaU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0xbU] 
                        = vlSelf->data_from_bus[0xbU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0xcU] 
                        = vlSelf->data_from_bus[0xcU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0xdU] 
                        = vlSelf->data_from_bus[0xdU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0xeU] 
                        = vlSelf->data_from_bus[0xeU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0xfU] 
                        = vlSelf->data_from_bus[0xfU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x10U] 
                        = vlSelf->data_from_bus[0x10U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x11U] 
                        = vlSelf->data_from_bus[0x11U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x12U] 
                        = vlSelf->data_from_bus[0x12U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x13U] 
                        = vlSelf->data_from_bus[0x13U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x14U] 
                        = vlSelf->data_from_bus[0x14U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x15U] 
                        = vlSelf->data_from_bus[0x15U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x16U] 
                        = vlSelf->data_from_bus[0x16U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x17U] 
                        = vlSelf->data_from_bus[0x17U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x18U] 
                        = vlSelf->data_from_bus[0x18U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x19U] 
                        = vlSelf->data_from_bus[0x19U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x1aU] 
                        = vlSelf->data_from_bus[0x1aU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x1bU] 
                        = vlSelf->data_from_bus[0x1bU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x1cU] 
                        = vlSelf->data_from_bus[0x1cU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x1dU] 
                        = vlSelf->data_from_bus[0x1dU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x1eU] 
                        = vlSelf->data_from_bus[0x1eU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__0[0x1fU] 
                        = vlSelf->data_from_bus[0x1fU];
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x33U) 
                                        + ((IData)(0x433U) 
                                           * (IData)(vlSelf->directCache__DOT__index)))))) {
                        VL_ASSIGNSEL_WW(1100800,1024,
                                        (0x1fffffU 
                                         & ((IData)(0x33U) 
                                            + ((IData)(0x433U) 
                                               * (IData)(vlSelf->directCache__DOT__index)))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h08920d1f__0);
                    }
                    vlSelf->directCache__DOT____Vlvbound_h78d7f6ab__0 
                        = vlSelf->directCache__DOT__tag;
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x433U) 
                                        * (IData)(vlSelf->directCache__DOT__index))))) {
                        VL_ASSIGNSEL_WQ(1100800,50,
                                        (0x1fffffU 
                                         & ((IData)(0x433U) 
                                            * (IData)(vlSelf->directCache__DOT__index))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h78d7f6ab__0);
                    }
                    if ((1U & (~ (IData)(vlSelf->load)))) {
                        vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__1 
                            = vlSelf->data_from_cpu;
                        if ((0x10cbffU >= (0x1fffffU 
                                           & (((IData)(0x433U) 
                                               * (IData)(vlSelf->directCache__DOT__index)) 
                                              + (0x7ffU 
                                                 & ((IData)(0x7f3U) 
                                                    + 
                                                    VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->directCache__DOT__offset)), 6U))))))) {
                            VL_ASSIGNSEL_WQ(1100800,64,
                                            (0x1fffffU 
                                             & (((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index)) 
                                                + (0x7ffU 
                                                   & ((IData)(0x7f3U) 
                                                      + 
                                                      VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelf->directCache__DOT__offset)), 6U))))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__1);
                        }
                    }
                    vlSelf->directCache__DOT____Vlvbound_h22f92dc4__0 = 1U;
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x32U) 
                                        + ((IData)(0x433U) 
                                           * (IData)(vlSelf->directCache__DOT__index)))))) {
                        __Vdly__directCache__DOT__cache[(0xffffU 
                                                         & (((IData)(0x32U) 
                                                             + 
                                                             ((IData)(0x433U) 
                                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                                            >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x32U) 
                                              + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index)))))) 
                                & __Vdly__directCache__DOT__cache[
                                (0xffffU & (((IData)(0x32U) 
                                             + ((IData)(0x433U) 
                                                * (IData)(vlSelf->directCache__DOT__index))) 
                                            >> 5U))]) 
                               | ((IData)(vlSelf->directCache__DOT____Vlvbound_h22f92dc4__0) 
                                  << (0x1fU & ((IData)(0x32U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                    }
                }
            } else if ((3U == vlSelf->directCache__DOT__state)) {
                if (vlSelf->bus_valid) {
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0U] 
                        = vlSelf->data_from_bus[0U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[1U] 
                        = vlSelf->data_from_bus[1U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[2U] 
                        = vlSelf->data_from_bus[2U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[3U] 
                        = vlSelf->data_from_bus[3U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[4U] 
                        = vlSelf->data_from_bus[4U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[5U] 
                        = vlSelf->data_from_bus[5U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[6U] 
                        = vlSelf->data_from_bus[6U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[7U] 
                        = vlSelf->data_from_bus[7U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[8U] 
                        = vlSelf->data_from_bus[8U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[9U] 
                        = vlSelf->data_from_bus[9U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0xaU] 
                        = vlSelf->data_from_bus[0xaU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0xbU] 
                        = vlSelf->data_from_bus[0xbU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0xcU] 
                        = vlSelf->data_from_bus[0xcU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0xdU] 
                        = vlSelf->data_from_bus[0xdU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0xeU] 
                        = vlSelf->data_from_bus[0xeU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0xfU] 
                        = vlSelf->data_from_bus[0xfU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x10U] 
                        = vlSelf->data_from_bus[0x10U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x11U] 
                        = vlSelf->data_from_bus[0x11U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x12U] 
                        = vlSelf->data_from_bus[0x12U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x13U] 
                        = vlSelf->data_from_bus[0x13U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x14U] 
                        = vlSelf->data_from_bus[0x14U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x15U] 
                        = vlSelf->data_from_bus[0x15U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x16U] 
                        = vlSelf->data_from_bus[0x16U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x17U] 
                        = vlSelf->data_from_bus[0x17U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x18U] 
                        = vlSelf->data_from_bus[0x18U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x19U] 
                        = vlSelf->data_from_bus[0x19U];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x1aU] 
                        = vlSelf->data_from_bus[0x1aU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x1bU] 
                        = vlSelf->data_from_bus[0x1bU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x1cU] 
                        = vlSelf->data_from_bus[0x1cU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x1dU] 
                        = vlSelf->data_from_bus[0x1dU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x1eU] 
                        = vlSelf->data_from_bus[0x1eU];
                    vlSelf->directCache__DOT____Vlvbound_h08920d1f__1[0x1fU] 
                        = vlSelf->data_from_bus[0x1fU];
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x33U) 
                                        + ((IData)(0x433U) 
                                           * (IData)(vlSelf->directCache__DOT__index)))))) {
                        VL_ASSIGNSEL_WW(1100800,1024,
                                        (0x1fffffU 
                                         & ((IData)(0x33U) 
                                            + ((IData)(0x433U) 
                                               * (IData)(vlSelf->directCache__DOT__index)))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h08920d1f__1);
                    }
                    vlSelf->directCache__DOT____Vlvbound_h78d7f6ab__1 
                        = vlSelf->directCache__DOT__tag;
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x433U) 
                                        * (IData)(vlSelf->directCache__DOT__index))))) {
                        VL_ASSIGNSEL_WQ(1100800,50,
                                        (0x1fffffU 
                                         & ((IData)(0x433U) 
                                            * (IData)(vlSelf->directCache__DOT__index))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h78d7f6ab__1);
                    }
                    if ((1U & (~ (IData)(vlSelf->load)))) {
                        vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__2 
                            = vlSelf->data_from_cpu;
                        if ((0x10cbffU >= (0x1fffffU 
                                           & (((IData)(0x433U) 
                                               * (IData)(vlSelf->directCache__DOT__index)) 
                                              + (0x7ffU 
                                                 & ((IData)(0x7f3U) 
                                                    + 
                                                    VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->directCache__DOT__offset)), 6U))))))) {
                            VL_ASSIGNSEL_WQ(1100800,64,
                                            (0x1fffffU 
                                             & (((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index)) 
                                                + (0x7ffU 
                                                   & ((IData)(0x7f3U) 
                                                      + 
                                                      VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelf->directCache__DOT__offset)), 6U))))), __Vdly__directCache__DOT__cache, vlSelf->directCache__DOT____Vlvbound_h1b8b6c23__2);
                        }
                    }
                    vlSelf->directCache__DOT____Vlvbound_h22f92dc4__1 = 1U;
                    if ((0x10cbffU >= (0x1fffffU & 
                                       ((IData)(0x32U) 
                                        + ((IData)(0x433U) 
                                           * (IData)(vlSelf->directCache__DOT__index)))))) {
                        __Vdly__directCache__DOT__cache[(0xffffU 
                                                         & (((IData)(0x32U) 
                                                             + 
                                                             ((IData)(0x433U) 
                                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                                            >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x32U) 
                                              + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index)))))) 
                                & __Vdly__directCache__DOT__cache[
                                (0xffffU & (((IData)(0x32U) 
                                             + ((IData)(0x433U) 
                                                * (IData)(vlSelf->directCache__DOT__index))) 
                                            >> 5U))]) 
                               | ((IData)(vlSelf->directCache__DOT____Vlvbound_h22f92dc4__1) 
                                  << (0x1fU & ((IData)(0x32U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))))));
                    }
                }
            }
        }
        vlSelf->directCache__DOT__state = vlSelf->directCache__DOT__next_state;
    }
    VL_ASSIGN_W(1100800,vlSelf->directCache__DOT__cache, __Vdly__directCache__DOT__cache);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 0U;
            vlSelf->directCache__DOT__command_store = 0U;
            vlSelf->directCache__DOT__command_rready = 0U;
            vlSelf->directCache__DOT__invalidate_ack = 1U;
            vlSelf->directCache__DOT__command_addr = 0ULL;
        } else if ((1U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 1U;
            vlSelf->directCache__DOT__command_store = 1U;
            vlSelf->directCache__DOT__command_rready = 0U;
            vlSelf->directCache__DOT__invalidate_ack = 0U;
            vlSelf->directCache__DOT__command_addr 
                = (0xfffffffffffffff0ULL & vlSelf->directCache__DOT__dirty_addr);
        } else if ((2U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 1U;
            vlSelf->directCache__DOT__command_store = 0U;
            vlSelf->directCache__DOT__command_rready = 1U;
            vlSelf->directCache__DOT__invalidate_ack = 0U;
            vlSelf->directCache__DOT__command_addr 
                = (0xfffffffffffffff0ULL & vlSelf->aaddr);
        } else if ((3U == vlSelf->directCache__DOT__state)) {
            vlSelf->directCache__DOT__command_valid = 1U;
            vlSelf->directCache__DOT__command_store = 0U;
            vlSelf->directCache__DOT__command_rready = 1U;
            vlSelf->directCache__DOT__invalidate_ack = 0U;
            vlSelf->directCache__DOT__command_addr 
                = (0xfffffffffffffff0ULL & vlSelf->aaddr);
        }
    }
    vlSelf->command_valid = vlSelf->directCache__DOT__command_valid;
    vlSelf->command_store = vlSelf->directCache__DOT__command_store;
    vlSelf->command_rready = vlSelf->directCache__DOT__command_rready;
    vlSelf->invalidate_ack = vlSelf->directCache__DOT__invalidate_ack;
    vlSelf->command_addr = vlSelf->directCache__DOT__command_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<32>/*1023:0*/ directCache__DOT____Vcellinp__store_modifier__data;
    VL_ZERO_W(1024, directCache__DOT____Vcellinp__store_modifier__data);
    // Body
    if ((0x10cbffU >= (0x1fffffU & ((IData)(0x33U) 
                                    + ((IData)(0x433U) 
                                       * (IData)(vlSelf->directCache__DOT__index)))))) {
        directCache__DOT____Vcellinp__store_modifier__data[0U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(1U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[(0xffffU 
                                                   & (((IData)(0x33U) 
                                                       + 
                                                       ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index))) 
                                                      >> 5U))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[1U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(2U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(1U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[2U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(3U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(2U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[3U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(4U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(3U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[4U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(5U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(4U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[5U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(6U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(5U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[6U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(7U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(6U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[7U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(8U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(7U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[8U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(9U) + (0xffffU & 
                                         (((IData)(0x33U) 
                                           + ((IData)(0x433U) 
                                              * (IData)(vlSelf->directCache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(8U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[9U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xaU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(9U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xbU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xaU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xcU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xbU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xdU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xcU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xeU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xdU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0xfU) + (0xffffU 
                                           & (((IData)(0x33U) 
                                               + ((IData)(0x433U) 
                                                  * (IData)(vlSelf->directCache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xeU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x10U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0xfU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x11U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x10U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x12U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x11U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x13U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x12U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x14U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x13U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x15U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x14U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x16U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x15U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x17U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x16U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x18U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x17U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x19U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x18U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1aU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x19U) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1bU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1aU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1cU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1bU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1dU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1cU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1eU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1dU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x1fU) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1eU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
        directCache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index)))))
                 ? 0U : (vlSelf->directCache__DOT__cache[
                         ((IData)(0x20U) + (0xffffU 
                                            & (((IData)(0x33U) 
                                                + ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x33U) 
                                                  + 
                                                  ((IData)(0x433U) 
                                                   * (IData)(vlSelf->directCache__DOT__index))))))) 
               | (vlSelf->directCache__DOT__cache[((IData)(0x1fU) 
                                                   + 
                                                   (0xffffU 
                                                    & (((IData)(0x33U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U)))] 
                  >> (0x1fU & ((IData)(0x33U) + ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))));
    } else {
        directCache__DOT____Vcellinp__store_modifier__data[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        directCache__DOT____Vcellinp__store_modifier__data[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        directCache__DOT____Vcellinp__store_modifier__data[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        directCache__DOT____Vcellinp__store_modifier__data[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        directCache__DOT____Vcellinp__store_modifier__data[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        directCache__DOT____Vcellinp__store_modifier__data[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        directCache__DOT____Vcellinp__store_modifier__data[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        directCache__DOT____Vcellinp__store_modifier__data[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        directCache__DOT____Vcellinp__store_modifier__data[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        directCache__DOT____Vcellinp__store_modifier__data[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        directCache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        directCache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        directCache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        directCache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        directCache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        directCache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        directCache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        directCache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        directCache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        directCache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        directCache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        directCache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        directCache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        directCache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        directCache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        directCache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        directCache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        directCache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    vlSelf->directCache__DOT__curr_valid = ((0x10cbffU 
                                             >= (0x1fffffU 
                                                 & ((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x433U) 
                                                     * (IData)(vlSelf->directCache__DOT__index))))) 
                                            && (1U 
                                                & (vlSelf->directCache__DOT__cache[
                                                   (0xffffU 
                                                    & (((IData)(0x32U) 
                                                        + 
                                                        ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x32U) 
                                                       + 
                                                       ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index)))))));
    vlSelf->data_to_cpu = ((0x10cbffU >= vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0)
                            ? (((QData)((IData)(vlSelf->directCache__DOT__cache[
                                                (((IData)(0x3fU) 
                                                  + vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0)))) 
                               | (((0U == (0x1fU & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlSelf->directCache__DOT__cache[
                                                              (((IData)(0x1fU) 
                                                                + vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0)))) 
                                  | ((QData)((IData)(
                                                     vlSelf->directCache__DOT__cache[
                                                     (vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0 
                                                      >> 5U)])) 
                                     >> (0x1fU & vlSelf->directCache__DOT____VdfgTmp_ha8191f0f__0))))
                            : 0ULL);
    vlSelf->directCache__DOT__store_modifier__DOT__data[0U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[1U] 
        = directCache__DOT____Vcellinp__store_modifier__data[1U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[2U] 
        = directCache__DOT____Vcellinp__store_modifier__data[2U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[3U] 
        = directCache__DOT____Vcellinp__store_modifier__data[3U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[4U] 
        = directCache__DOT____Vcellinp__store_modifier__data[4U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[5U] 
        = directCache__DOT____Vcellinp__store_modifier__data[5U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[6U] 
        = directCache__DOT____Vcellinp__store_modifier__data[6U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[7U] 
        = directCache__DOT____Vcellinp__store_modifier__data[7U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[8U] 
        = directCache__DOT____Vcellinp__store_modifier__data[8U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[9U] 
        = directCache__DOT____Vcellinp__store_modifier__data[9U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xaU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xaU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xbU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xbU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xcU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xcU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xdU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xdU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xeU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xeU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0xfU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0xfU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x10U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x10U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x11U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x11U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x12U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x12U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x13U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x13U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x14U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x14U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x15U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x15U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x16U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x16U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x17U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x17U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x18U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x18U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x19U] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x19U];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1aU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1aU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1bU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1bU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1cU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1cU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1dU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1dU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1eU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1eU];
    vlSelf->directCache__DOT__store_modifier__DOT__data[0x1fU] 
        = directCache__DOT____Vcellinp__store_modifier__data[0x1fU];
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1cU] 
        = (IData)(((0xeU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x1dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1cU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1dU] 
        = (IData)((((0xeU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1dU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x1cU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1eU] 
        = (IData)(((0xfU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1eU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1fU] 
        = (IData)((((0xfU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x1eU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x18U] 
        = (IData)(((0xcU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x19U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x18U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x19U] 
        = (IData)((((0xcU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x19U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x18U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1aU] 
        = (IData)(((0xdU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x1bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1aU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1bU] 
        = (IData)((((0xdU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x1bU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x1aU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x14U] 
        = (IData)(((0xaU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x15U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x14U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x15U] 
        = (IData)((((0xaU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x15U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x14U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x16U] 
        = (IData)(((0xbU == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x17U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x16U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x17U] 
        = (IData)((((0xbU == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x17U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x16U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x10U] 
        = (IData)(((8U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x11U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x10U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x11U] 
        = (IData)((((8U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x11U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x10U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x12U] 
        = (IData)(((9U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0x13U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x12U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x13U] 
        = (IData)((((9U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0x13U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0x12U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xcU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xdU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0xcU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xeU] 
        = (IData)(((7U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xeU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xfU] 
        = (IData)((((7U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xfU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0xeU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[8U] 
        = (IData)(((4U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[8U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[9U] 
        = (IData)((((4U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[9U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[8U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xaU] 
        = (IData)(((5U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xaU])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xbU] 
        = (IData)((((5U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0xbU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0xaU])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[4U] 
        = (IData)(((2U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[4U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[5U] 
        = (IData)((((2U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[4U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[6U] 
        = (IData)(((3U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[6U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[7U] 
        = (IData)((((3U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[6U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[0U] 
        = (IData)(((0U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[0U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[1U] 
        = (IData)((((0U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[0U])))) 
                   >> 0x20U));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[2U] 
        = (IData)(((1U == (IData)(vlSelf->directCache__DOT__offset))
                    ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                directCache__DOT____Vcellinp__store_modifier__data[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[2U])))));
    vlSelf->directCache__DOT__store_modifier__DOT__final_data[3U] 
        = (IData)((((1U == (IData)(vlSelf->directCache__DOT__offset))
                     ? vlSelf->data_from_cpu : (((QData)((IData)(
                                                                 directCache__DOT____Vcellinp__store_modifier__data[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  directCache__DOT____Vcellinp__store_modifier__data[2U])))) 
                   >> 0x20U));
    vlSelf->hit = ((vlSelf->directCache__DOT__tag == 
                    ((0x10cbffU >= (0x1fffffU & ((IData)(0x433U) 
                                                 * (IData)(vlSelf->directCache__DOT__index))))
                      ? (0x3ffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->directCache__DOT__cache[
                                                                (((IData)(0x31U) 
                                                                  + 
                                                                  (0x1fffffU 
                                                                   & ((IData)(0x433U) 
                                                                      * (IData)(vlSelf->directCache__DOT__index)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x433U) 
                                                      * (IData)(vlSelf->directCache__DOT__index))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x433U) 
                                                      * (IData)(vlSelf->directCache__DOT__index)))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x433U) 
                                                        * (IData)(vlSelf->directCache__DOT__index))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->directCache__DOT__cache[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0x1fffffU 
                                                                       & ((IData)(0x433U) 
                                                                          * (IData)(vlSelf->directCache__DOT__index)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index)))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->directCache__DOT__cache[
                                                                     (0xffffU 
                                                                      & (((IData)(0x433U) 
                                                                          * (IData)(vlSelf->directCache__DOT__index)) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x433U) 
                                                         * (IData)(vlSelf->directCache__DOT__index)))))))
                      : 0ULL)) & (IData)(vlSelf->directCache__DOT__curr_valid));
    vlSelf->directCache__DOT__data_to_cpu = vlSelf->data_to_cpu;
    vlSelf->directCache__DOT__new_cache_data[0U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[0U];
    vlSelf->directCache__DOT__new_cache_data[1U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[1U];
    vlSelf->directCache__DOT__new_cache_data[2U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[2U];
    vlSelf->directCache__DOT__new_cache_data[3U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[3U];
    vlSelf->directCache__DOT__new_cache_data[4U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[4U];
    vlSelf->directCache__DOT__new_cache_data[5U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[5U];
    vlSelf->directCache__DOT__new_cache_data[6U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[6U];
    vlSelf->directCache__DOT__new_cache_data[7U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[7U];
    vlSelf->directCache__DOT__new_cache_data[8U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[8U];
    vlSelf->directCache__DOT__new_cache_data[9U] = 
        vlSelf->directCache__DOT__store_modifier__DOT__final_data[9U];
    vlSelf->directCache__DOT__new_cache_data[0xaU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xaU];
    vlSelf->directCache__DOT__new_cache_data[0xbU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xbU];
    vlSelf->directCache__DOT__new_cache_data[0xcU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xcU];
    vlSelf->directCache__DOT__new_cache_data[0xdU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xdU];
    vlSelf->directCache__DOT__new_cache_data[0xeU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xeU];
    vlSelf->directCache__DOT__new_cache_data[0xfU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0xfU];
    vlSelf->directCache__DOT__new_cache_data[0x10U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x10U];
    vlSelf->directCache__DOT__new_cache_data[0x11U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x11U];
    vlSelf->directCache__DOT__new_cache_data[0x12U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x12U];
    vlSelf->directCache__DOT__new_cache_data[0x13U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x13U];
    vlSelf->directCache__DOT__new_cache_data[0x14U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x14U];
    vlSelf->directCache__DOT__new_cache_data[0x15U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x15U];
    vlSelf->directCache__DOT__new_cache_data[0x16U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x16U];
    vlSelf->directCache__DOT__new_cache_data[0x17U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x17U];
    vlSelf->directCache__DOT__new_cache_data[0x18U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x18U];
    vlSelf->directCache__DOT__new_cache_data[0x19U] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x19U];
    vlSelf->directCache__DOT__new_cache_data[0x1aU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1aU];
    vlSelf->directCache__DOT__new_cache_data[0x1bU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1bU];
    vlSelf->directCache__DOT__new_cache_data[0x1cU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1cU];
    vlSelf->directCache__DOT__new_cache_data[0x1dU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1dU];
    vlSelf->directCache__DOT__new_cache_data[0x1eU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1eU];
    vlSelf->directCache__DOT__new_cache_data[0x1fU] 
        = vlSelf->directCache__DOT__store_modifier__DOT__final_data[0x1fU];
    vlSelf->directCache__DOT__hit = vlSelf->hit;
    if ((0U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = (((~ (IData)(vlSelf->invalidate)) 
                                                 & (IData)(vlSelf->avalid))
                                                 ? 
                                                ((IData)(vlSelf->hit)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->directCache__DOT__curr_valid)
                                                   ? 2U
                                                   : 3U))
                                                 : 0U);
    } else if ((1U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = ((IData)(vlSelf->bus_ready)
                                                 ? 0U
                                                 : 1U);
    } else if ((2U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = ((IData)(vlSelf->bus_valid)
                                                 ? 1U
                                                 : 2U);
    } else if ((3U == vlSelf->directCache__DOT__state)) {
        vlSelf->directCache__DOT__next_state = ((IData)(vlSelf->bus_valid)
                                                 ? 0U
                                                 : 3U);
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("directCache.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("directCache.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("directCache.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->avalid & 0xfeU))) {
        Verilated::overWidthError("avalid");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
    if (VL_UNLIKELY((vlSelf->bus_valid & 0xfeU))) {
        Verilated::overWidthError("bus_valid");}
    if (VL_UNLIKELY((vlSelf->bus_ready & 0xfeU))) {
        Verilated::overWidthError("bus_ready");}
    if (VL_UNLIKELY((vlSelf->invalidate & 0xfeU))) {
        Verilated::overWidthError("invalidate");}
}
#endif  // VL_DEBUG
