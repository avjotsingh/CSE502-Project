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
    VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data;
    VL_ZERO_W(1024, top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data);
    IData/*20:0*/ top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0;
    top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0 = 0;
    // Body
    vlSelf->top__DOT__hz32768timer = vlSelf->hz32768timer;
    vlSelf->top__DOT__entry = vlSelf->entry;
    vlSelf->top__DOT__stackptr = vlSelf->stackptr;
    vlSelf->top__DOT__satp = vlSelf->satp;
    vlSelf->top__DOT__m_axi_awready = vlSelf->m_axi_awready;
    vlSelf->top__DOT__m_axi_wready = vlSelf->m_axi_wready;
    vlSelf->top__DOT__m_axi_bid = vlSelf->m_axi_bid;
    vlSelf->top__DOT__m_axi_bresp = vlSelf->m_axi_bresp;
    vlSelf->top__DOT__m_axi_bvalid = vlSelf->m_axi_bvalid;
    vlSelf->top__DOT__m_axi_arready = vlSelf->m_axi_arready;
    vlSelf->top__DOT__m_axi_rid = vlSelf->m_axi_rid;
    vlSelf->top__DOT__m_axi_rdata = vlSelf->m_axi_rdata;
    vlSelf->top__DOT__m_axi_rresp = vlSelf->m_axi_rresp;
    vlSelf->top__DOT__m_axi_rlast = vlSelf->m_axi_rlast;
    vlSelf->top__DOT__m_axi_rvalid = vlSelf->m_axi_rvalid;
    vlSelf->top__DOT__m_axi_acvalid = vlSelf->m_axi_acvalid;
    vlSelf->top__DOT__m_axi_acaddr = vlSelf->m_axi_acaddr;
    vlSelf->top__DOT__m_axi_acsnoop = vlSelf->m_axi_acsnoop;
    vlSelf->top__DOT__branch_predictor__DOT__pc_ex 
        = vlSelf->top__DOT__pc_ex;
    vlSelf->top__DOT__branch_predictor__DOT__branch_taken_ex 
        = vlSelf->top__DOT__branch_taken_ex;
    vlSelf->top__DOT__branch_predictor__DOT__index_ex 
        = (0x3ffU & (IData)(vlSelf->top__DOT__pc_ex));
    vlSelf->top__DOT__branch_predictor__DOT__pc_tag_ex 
        = (vlSelf->top__DOT__pc_ex >> 0xaU);
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__new_data 
        = vlSelf->top__DOT__instruction_cache__DOT__data_from_cpu;
    vlSelf->top__DOT__if_id__DOT__pc_in = vlSelf->top__DOT__pc_cpu;
    vlSelf->m_axi_awid = vlSelf->top__DOT__m_axi_awid;
    vlSelf->m_axi_awaddr = vlSelf->top__DOT__m_axi_awaddr;
    vlSelf->m_axi_awlen = vlSelf->top__DOT__m_axi_awlen;
    vlSelf->m_axi_awsize = vlSelf->top__DOT__m_axi_awsize;
    vlSelf->m_axi_awburst = vlSelf->top__DOT__m_axi_awburst;
    vlSelf->m_axi_awlock = vlSelf->top__DOT__m_axi_awlock;
    vlSelf->m_axi_awcache = vlSelf->top__DOT__m_axi_awcache;
    vlSelf->m_axi_awprot = vlSelf->top__DOT__m_axi_awprot;
    vlSelf->m_axi_awvalid = vlSelf->top__DOT__m_axi_awvalid;
    vlSelf->m_axi_wdata = vlSelf->top__DOT__m_axi_wdata;
    vlSelf->m_axi_wstrb = vlSelf->top__DOT__m_axi_wstrb;
    vlSelf->m_axi_wlast = vlSelf->top__DOT__m_axi_wlast;
    vlSelf->m_axi_wvalid = vlSelf->top__DOT__m_axi_wvalid;
    vlSelf->m_axi_bready = vlSelf->top__DOT__m_axi_bready;
    vlSelf->m_axi_arid = vlSelf->top__DOT__m_axi_arid;
    vlSelf->m_axi_araddr = vlSelf->top__DOT__m_axi_araddr;
    vlSelf->m_axi_arlen = vlSelf->top__DOT__m_axi_arlen;
    vlSelf->m_axi_arsize = vlSelf->top__DOT__m_axi_arsize;
    vlSelf->m_axi_arburst = vlSelf->top__DOT__m_axi_arburst;
    vlSelf->m_axi_arlock = vlSelf->top__DOT__m_axi_arlock;
    vlSelf->m_axi_arcache = vlSelf->top__DOT__m_axi_arcache;
    vlSelf->m_axi_arprot = vlSelf->top__DOT__m_axi_arprot;
    vlSelf->m_axi_arvalid = vlSelf->top__DOT__m_axi_arvalid;
    vlSelf->m_axi_rready = vlSelf->top__DOT__m_axi_rready;
    vlSelf->m_axi_acready = vlSelf->top__DOT__m_axi_acready;
    vlSelf->top__DOT__if_id_decoder_instr = vlSelf->top__DOT__if_id__DOT__instruction;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__pc_if = vlSelf->top__DOT__if_id__DOT__pc;
    vlSelf->top__DOT__if_id__DOT__instruction_out = vlSelf->top__DOT__if_id_decoder_instr;
    vlSelf->top__DOT__branch_predictor__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__instruction_cache__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__if_id__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__branch_predictor__DOT__reset 
        = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__instruction_cache__DOT__reset 
        = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__if_id__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__branch_predictor__DOT__pc_if 
        = vlSelf->top__DOT__pc_if;
    vlSelf->top__DOT__if_id__DOT__pc_out = vlSelf->top__DOT__pc_if;
    vlSelf->top__DOT__branch_predictor__DOT__index_if 
        = (0x3ffU & (IData)(vlSelf->top__DOT__pc_if));
    vlSelf->top__DOT__branch_predictor__DOT__pc_tag_if 
        = (vlSelf->top__DOT__pc_if >> 0xaU);
    vlSelf->top__DOT__branch_predictor__DOT__current_valid 
        = (1U & vlSelf->top__DOT__branch_predictor__DOT__btb_mem
           [vlSelf->top__DOT__branch_predictor__DOT__index_if][0U]);
    vlSelf->top__DOT__branch_predictor__DOT__current_target 
        = (((QData)((IData)(vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                            [vlSelf->top__DOT__branch_predictor__DOT__index_if][2U])) 
            << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                          [vlSelf->top__DOT__branch_predictor__DOT__index_if][1U])) 
                          << 0x1fU) | ((QData)((IData)(
                                                       vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                                       [vlSelf->top__DOT__branch_predictor__DOT__index_if][0U])) 
                                       >> 1U)));
    vlSelf->top__DOT__branch_predictor__DOT__current_tag 
        = (0x3fffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                                   [vlSelf->top__DOT__branch_predictor__DOT__index_if][3U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                                                [vlSelf->top__DOT__branch_predictor__DOT__index_if][2U])) 
                                                >> 1U)));
    if (((vlSelf->top__DOT__pc_if == vlSelf->top__DOT__pc_ex) 
         & (IData)(vlSelf->top__DOT__branch_taken_ex))) {
        vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ 
            = vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex;
        vlSelf->top__DOT__branch_predictor__DOT__hit_ = 1U;
    } else if (((IData)(vlSelf->top__DOT__branch_predictor__DOT__current_valid) 
                & (vlSelf->top__DOT__branch_predictor__DOT__current_tag 
                   == vlSelf->top__DOT__branch_predictor__DOT__pc_tag_if))) {
        vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ 
            = vlSelf->top__DOT__branch_predictor__DOT__current_target;
        vlSelf->top__DOT__branch_predictor__DOT__hit_ = 1U;
    } else {
        vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ = 0ULL;
        vlSelf->top__DOT__branch_predictor__DOT__hit_ = 0U;
    }
    vlSelf->top__DOT__branch_predictor__DOT__hit = vlSelf->top__DOT__branch_predictor__DOT__hit_;
    vlSelf->top__DOT__predicted_target = vlSelf->top__DOT__branch_predictor__DOT__predicted_target_;
    vlSelf->top__DOT__next_pc = ((IData)(vlSelf->top__DOT__branch_taken_ex)
                                  ? vlSelf->top__DOT__branch_predictor__DOT__predicted_target_
                                  : (4ULL + vlSelf->top__DOT__pc_cpu));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_addr = 0ULL;
        } else if ((1U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_addr 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__instruction_cache__DOT__dirty_addr);
        } else if ((2U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_addr 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__next_pc);
        } else if ((3U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_addr 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__next_pc);
        }
    }
    vlSelf->top__DOT__branch_predictor__DOT__predicted_target 
        = vlSelf->top__DOT__predicted_target;
    vlSelf->top__DOT__instruction_cache__DOT__aaddr 
        = vlSelf->top__DOT__next_pc;
    vlSelf->top__DOT__instruction_cache__DOT__tag = 
        (vlSelf->top__DOT__next_pc >> 0xfU);
    vlSelf->top__DOT__instruction_cache__DOT__offset 
        = (0x1fU & (IData)(vlSelf->top__DOT__next_pc));
    vlSelf->top__DOT__instruction_cache__DOT__index 
        = (0x3ffU & (IData)((vlSelf->top__DOT__next_pc 
                             >> 5U)));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__sel 
        = vlSelf->top__DOT__instruction_cache__DOT__offset;
    top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0 
        = (0x1fffffU & (((IData)(0x432U) * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)) 
                        + (0x7ffU & ((IData)(0x12U) 
                                     + VL_SHIFTL_III(11,11,32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset)), 5U)))));
    if ((0x10c7ffU >= (0x1fffffU & ((IData)(0x32U) 
                                    + ((IData)(0x432U) 
                                       * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(1U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  (0xffffU & (((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x32U) 
                                            + ((IData)(0x432U) 
                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(2U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(1U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(3U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(2U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(4U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(3U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(5U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(4U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(6U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(5U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(7U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(6U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(8U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(7U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(9U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(8U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xaU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(9U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xbU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xaU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xcU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xbU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xdU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xcU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xeU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xdU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xfU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xeU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x10U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xfU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x11U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x10U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x12U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x11U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x13U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x12U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x14U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x13U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x15U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x14U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x16U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x15U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x17U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x16U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x18U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x17U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x19U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x18U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1aU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x19U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1bU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1aU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1cU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1bU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1dU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1cU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1eU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1dU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1fU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1eU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x20U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1fU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
    } else {
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    vlSelf->top__DOT__instruction_cache__DOT__curr_valid 
        = ((0x10c7ffU >= (0x1fffffU & ((IData)(0x31U) 
                                       + ((IData)(0x432U) 
                                          * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))) 
           && (1U & (vlSelf->top__DOT__instruction_cache__DOT__cache[
                     (0xffffU & (((IData)(0x31U) + 
                                  ((IData)(0x432U) 
                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x31U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))));
    vlSelf->top__DOT__cache_instr = ((0x10c7ffU >= top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0)
                                      ? (((0U == (0x1fU 
                                                  & top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0))
                                           ? 0U : (
                                                   vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                   (((IData)(0x1fU) 
                                                     + top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0)))) 
                                         | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                            (top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0)))
                                      : 0U);
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[1U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[2U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[3U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[4U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[5U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[6U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[7U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[8U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[9U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xaU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xbU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xcU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xdU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xeU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xfU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x10U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x11U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x12U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x13U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x14U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x15U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x16U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x17U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x18U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x19U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1aU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1bU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1cU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1dU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1eU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1fU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1eU] 
        = (IData)((((QData)((IData)(((0x1fU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x1eU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1fU] 
        = (IData)(((((QData)((IData)(((0x1fU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x1eU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1cU] 
        = (IData)((((QData)((IData)(((0x1dU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1dU] 
        = (IData)(((((QData)((IData)(((0x1dU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x1cU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1aU] 
        = (IData)((((QData)((IData)(((0x1bU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x1aU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1bU] 
        = (IData)(((((QData)((IData)(((0x1bU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x1aU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x18U] 
        = (IData)((((QData)((IData)(((0x19U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x18U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x19U] 
        = (IData)(((((QData)((IData)(((0x19U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x18U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x16U] 
        = (IData)((((QData)((IData)(((0x17U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x16U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x17U] 
        = (IData)(((((QData)((IData)(((0x17U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x16U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x14U] 
        = (IData)((((QData)((IData)(((0x15U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x14U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x15U] 
        = (IData)(((((QData)((IData)(((0x15U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x14U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x12U] 
        = (IData)((((QData)((IData)(((0x13U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x12U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x13U] 
        = (IData)(((((QData)((IData)(((0x13U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x12U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x10U] 
        = (IData)((((QData)((IData)(((0x11U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x11U] 
        = (IData)(((((QData)((IData)(((0x11U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xeU] 
        = (IData)((((QData)((IData)(((0xfU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0xeU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xfU] 
        = (IData)(((((QData)((IData)(((0xfU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0xeU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xcU] 
        = (IData)((((QData)((IData)(((0xdU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0xcU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xdU] 
        = (IData)(((((QData)((IData)(((0xdU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0xcU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xaU] 
        = (IData)((((QData)((IData)(((0xbU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0xaU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xbU] 
        = (IData)(((((QData)((IData)(((0xbU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0xaU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[8U] 
        = (IData)((((QData)((IData)(((9U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U]))) 
                    << 0x20U) | (QData)((IData)(((8U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[9U] 
        = (IData)(((((QData)((IData)(((9U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U]))) 
                     << 0x20U) | (QData)((IData)(((8U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[6U] 
        = (IData)((((QData)((IData)(((7U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U]))) 
                    << 0x20U) | (QData)((IData)(((6U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[7U] 
        = (IData)(((((QData)((IData)(((7U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U]))) 
                     << 0x20U) | (QData)((IData)(((6U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[4U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U]))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[5U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U]))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[2U] 
        = (IData)((((QData)((IData)(((3U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U]))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[3U] 
        = (IData)(((((QData)((IData)(((3U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U]))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0U] 
        = (IData)((((QData)((IData)(((1U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U]))) 
                    << 0x20U) | (QData)((IData)(((0U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[1U] 
        = (IData)(((((QData)((IData)(((1U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U]))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache_hit = ((vlSelf->top__DOT__instruction_cache__DOT__tag 
                                                == 
                                                ((0x10c7ffU 
                                                  >= 
                                                  (0x1fffffU 
                                                   & ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                  ? 
                                                 (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                      (((IData)(0x30U) 
                                                                        + 
                                                                        (0x1fffffU 
                                                                         & ((IData)(0x432U) 
                                                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x432U) 
                                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x432U) 
                                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x432U) 
                                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x1fffffU 
                                                                             & ((IData)(0x432U) 
                                                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x432U) 
                                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                           (0xffffU 
                                                                            & (((IData)(0x432U) 
                                                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x432U) 
                                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))))
                                                  : 0ULL)) 
                                               & (IData)(vlSelf->top__DOT__instruction_cache__DOT__curr_valid));
    vlSelf->top__DOT__if_id__DOT__instruction_in = vlSelf->top__DOT__cache_instr;
    vlSelf->top__DOT__instruction_cache__DOT__data_to_cpu 
        = vlSelf->top__DOT__cache_instr;
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[1U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[1U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[2U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[2U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[3U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[3U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[4U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[4U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[5U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[5U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[6U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[6U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[7U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[7U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[8U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[8U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[9U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[9U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xaU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xaU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xbU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xbU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xcU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xcU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xdU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xdU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xeU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xeU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xfU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xfU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x10U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x10U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x11U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x11U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x12U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x12U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x13U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x13U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x14U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x14U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x15U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x15U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x16U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x16U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x17U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x17U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x18U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x18U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x19U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x19U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1aU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1aU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1bU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1bU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1cU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1cU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1dU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1dU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1eU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1eU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1fU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1fU];
    vlSelf->top__DOT__instruction_cache__DOT__hit = vlSelf->top__DOT__instruction_cache_hit;
    if ((0U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache_hit)
                ? 0U : ((IData)(vlSelf->top__DOT__instruction_cache__DOT__curr_valid)
                         ? 2U : 3U));
    } else if ((1U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache__DOT__bus_ready)
                ? 0U : 1U);
    } else if ((2U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache__DOT__bus_valid)
                ? 1U : 2U);
    } else if ((3U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache__DOT__bus_valid)
                ? 0U : 3U);
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

extern const VlWide<34368>/*1099775:0*/ Vtop__ConstPool__CONST_h6047faa6_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__top__DOT__pc_cpu;
    __Vdly__top__DOT__pc_cpu = 0;
    VlWide<34368>/*1099775:0*/ __Vdly__top__DOT__instruction_cache__DOT__cache;
    VL_ZERO_W(1099776, __Vdly__top__DOT__instruction_cache__DOT__cache);
    // Body
    VL_ASSIGN_W(1099776,__Vdly__top__DOT__instruction_cache__DOT__cache, vlSelf->top__DOT__instruction_cache__DOT__cache);
    __Vdly__top__DOT__pc_cpu = vlSelf->top__DOT__pc_cpu;
    if (vlSelf->reset) {
        __Vdly__top__DOT__pc_cpu = vlSelf->entry;
    } else {
        if (VL_UNLIKELY((0x3e8ULL == vlSelf->top__DOT__pc_cpu))) {
            VL_WRITEF("Hello World!  @ %x\n",64,vlSelf->top__DOT__pc_cpu);
            VL_FINISH_MT("top.sv", 86, "");
        }
        __Vdly__top__DOT__pc_cpu = vlSelf->top__DOT__next_pc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__if_id__DOT__instruction = 0U;
        VL_ASSIGN_W(1099776,__Vdly__top__DOT__instruction_cache__DOT__cache, Vtop__ConstPool__CONST_h6047faa6_0);
        vlSelf->top__DOT__instruction_cache__DOT__dirty_addr = 0ULL;
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->top__DOT__if_id__DOT__pc = 0ULL;
        vlSelf->top__DOT__instruction_cache__DOT__state = 0U;
    } else {
        vlSelf->top__DOT__if_id__DOT__instruction = vlSelf->top__DOT__cache_instr;
        if ((0U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            if (((~ (IData)(vlSelf->top__DOT__instruction_cache_hit)) 
                 & (IData)(vlSelf->top__DOT__instruction_cache__DOT__curr_valid))) {
                if ((0x10c7ffU >= (0x1fffffU & ((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(1U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              (0xffffU & (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[1U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(2U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(1U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[2U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(3U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(2U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[3U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(4U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(3U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[4U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(5U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(4U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[5U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(6U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(5U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[6U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(7U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(6U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[7U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(8U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(7U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[8U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(9U) + 
                                      (0xffffU & (((IData)(0x32U) 
                                                   + 
                                                   ((IData)(0x432U) 
                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                  >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(8U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[9U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0xaU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(9U) + (0xffffU 
                                              & (((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xaU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0xbU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0xaU) + (0xffffU 
                                                & (((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x432U) 
                                                     * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                   >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xbU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0xcU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0xbU) + (0xffffU 
                                                & (((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x432U) 
                                                     * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                   >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xcU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0xdU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0xcU) + (0xffffU 
                                                & (((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x432U) 
                                                     * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                   >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xdU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0xeU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0xdU) + (0xffffU 
                                                & (((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x432U) 
                                                     * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                   >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xeU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0xfU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0xeU) + (0xffffU 
                                                & (((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x432U) 
                                                     * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                   >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xfU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x10U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0xfU) + (0xffffU 
                                                & (((IData)(0x32U) 
                                                    + 
                                                    ((IData)(0x432U) 
                                                     * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                   >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x10U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x11U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x10U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x11U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x12U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x11U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x12U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x13U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x12U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x13U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x14U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x13U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x14U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x15U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x14U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x15U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x16U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x15U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x16U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x17U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x16U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x17U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x18U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x17U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x18U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x19U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x18U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x19U] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x1aU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x19U) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1aU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x1bU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x1aU) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1bU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x1cU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x1bU) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1cU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x1dU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x1cU) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1dU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x1eU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x1dU) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1eU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x1fU) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x1eU) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1fU] 
                        = (((0U == (0x1fU & ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                             ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                     ((IData)(0x20U) 
                                      + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x32U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
                           | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                              ((IData)(0x1fU) + (0xffffU 
                                                 & (((IData)(0x32U) 
                                                     + 
                                                     ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                    >> 5U)))] 
                              >> (0x1fU & ((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                } else {
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[1U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[2U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[3U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[4U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[5U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[6U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[7U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[8U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[9U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xaU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xbU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xcU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xdU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xeU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0xfU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x10U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x11U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x12U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x13U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x14U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x15U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x16U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x17U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x18U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x19U] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1aU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1bU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1cU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1dU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1eU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                    vlSelf->top__DOT__instruction_cache__DOT__dirty_data[0x1fU] 
                        = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
                }
                vlSelf->top__DOT__instruction_cache__DOT__dirty_addr 
                    = (((QData)((IData)(vlSelf->top__DOT__instruction_cache__DOT__index)) 
                        << 0x36U) | (((0x10c7ffU >= 
                                       (0x1fffffU & 
                                        ((IData)(0x432U) 
                                         * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                       ? (0x1ffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                              (((IData)(0x30U) 
                                                                + 
                                                                (0x1fffffU 
                                                                 & ((IData)(0x432U) 
                                                                    * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x432U) 
                                                       * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x432U) 
                                                       * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1fffffU 
                                                                     & ((IData)(0x432U) 
                                                                        * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x432U) 
                                                       * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                   (0xffffU 
                                                                    & (((IData)(0x432U) 
                                                                        * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x432U) 
                                                       * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))))
                                       : 0ULL) << 5U));
            }
        } else if ((1U != vlSelf->top__DOT__instruction_cache__DOT__state)) {
            if ((2U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
                if (vlSelf->top__DOT__instruction_cache__DOT__bus_valid) {
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[1U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[1U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[2U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[2U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[3U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[3U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[4U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[4U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[5U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[5U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[6U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[6U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[7U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[7U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[8U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[8U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[9U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[9U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0xaU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xaU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0xbU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xbU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0xcU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xcU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0xdU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xdU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0xeU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xeU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0xfU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xfU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x10U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x10U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x11U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x11U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x12U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x12U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x13U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x13U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x14U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x14U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x15U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x15U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x16U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x16U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x17U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x17U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x18U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x18U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x19U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x19U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x1aU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1aU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x1bU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1bU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x1cU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1cU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x1dU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1dU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x1eU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1eU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0[0x1fU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1fU];
                    if ((0x10c7ffU >= (0x1fffffU & 
                                       ((IData)(0x32U) 
                                        + ((IData)(0x432U) 
                                           * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
                        VL_ASSIGNSEL_WW(1099776,1024,
                                        (0x1fffffU 
                                         & ((IData)(0x32U) 
                                            + ((IData)(0x432U) 
                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))), __Vdly__top__DOT__instruction_cache__DOT__cache, vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__0);
                    }
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__0 
                        = vlSelf->top__DOT__instruction_cache__DOT__tag;
                    if ((0x10c7ffU >= (0x1fffffU & 
                                       ((IData)(0x432U) 
                                        * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))) {
                        VL_ASSIGNSEL_WQ(1099776,49,
                                        (0x1fffffU 
                                         & ((IData)(0x432U) 
                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))), __Vdly__top__DOT__instruction_cache__DOT__cache, vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__0);
                    }
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__0 = 1U;
                    if ((0x10c7ffU >= (0x1fffffU & 
                                       ((IData)(0x31U) 
                                        + ((IData)(0x432U) 
                                           * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
                        __Vdly__top__DOT__instruction_cache__DOT__cache[(0xffffU 
                                                                         & (((IData)(0x31U) 
                                                                             + 
                                                                             ((IData)(0x432U) 
                                                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                                            >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x31U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                & __Vdly__top__DOT__instruction_cache__DOT__cache[
                                (0xffffU & (((IData)(0x31U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                            >> 5U))]) 
                               | ((IData)(vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__0) 
                                  << (0x1fU & ((IData)(0x31U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    }
                }
            } else if ((3U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
                if (vlSelf->top__DOT__instruction_cache__DOT__bus_valid) {
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[1U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[1U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[2U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[2U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[3U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[3U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[4U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[4U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[5U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[5U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[6U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[6U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[7U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[7U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[8U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[8U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[9U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[9U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0xaU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xaU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0xbU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xbU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0xcU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xcU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0xdU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xdU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0xeU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xeU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0xfU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0xfU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x10U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x10U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x11U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x11U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x12U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x12U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x13U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x13U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x14U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x14U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x15U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x15U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x16U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x16U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x17U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x17U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x18U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x18U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x19U] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x19U];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x1aU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1aU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x1bU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1bU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x1cU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1cU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x1dU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1dU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x1eU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1eU];
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1[0x1fU] 
                        = vlSelf->top__DOT__instruction_cache__DOT__data_from_bus[0x1fU];
                    if ((0x10c7ffU >= (0x1fffffU & 
                                       ((IData)(0x32U) 
                                        + ((IData)(0x432U) 
                                           * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
                        VL_ASSIGNSEL_WW(1099776,1024,
                                        (0x1fffffU 
                                         & ((IData)(0x32U) 
                                            + ((IData)(0x432U) 
                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))), __Vdly__top__DOT__instruction_cache__DOT__cache, vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_hed23ab0a__1);
                    }
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__1 
                        = vlSelf->top__DOT__instruction_cache__DOT__tag;
                    if ((0x10c7ffU >= (0x1fffffU & 
                                       ((IData)(0x432U) 
                                        * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))) {
                        VL_ASSIGNSEL_WQ(1099776,49,
                                        (0x1fffffU 
                                         & ((IData)(0x432U) 
                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))), __Vdly__top__DOT__instruction_cache__DOT__cache, vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_ha1e180f3__1);
                    }
                    vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__1 = 1U;
                    if ((0x10c7ffU >= (0x1fffffU & 
                                       ((IData)(0x31U) 
                                        + ((IData)(0x432U) 
                                           * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
                        __Vdly__top__DOT__instruction_cache__DOT__cache[(0xffffU 
                                                                         & (((IData)(0x31U) 
                                                                             + 
                                                                             ((IData)(0x432U) 
                                                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                                            >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x31U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                & __Vdly__top__DOT__instruction_cache__DOT__cache[
                                (0xffffU & (((IData)(0x31U) 
                                             + ((IData)(0x432U) 
                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                            >> 5U))]) 
                               | ((IData)(vlSelf->top__DOT__instruction_cache__DOT____Vlvbound_h0af1211f__1) 
                                  << (0x1fU & ((IData)(0x31U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
                    }
                }
            }
        }
        vlSelf->top__DOT__if_id__DOT__pc = vlSelf->top__DOT__pc_cpu;
        vlSelf->top__DOT__instruction_cache__DOT__state 
            = vlSelf->top__DOT__instruction_cache__DOT__next_state;
    }
    VL_ASSIGN_W(1099776,vlSelf->top__DOT__instruction_cache__DOT__cache, __Vdly__top__DOT__instruction_cache__DOT__cache);
    vlSelf->top__DOT__pc_cpu = __Vdly__top__DOT__pc_cpu;
    vlSelf->top__DOT__if_id_decoder_instr = vlSelf->top__DOT__if_id__DOT__instruction;
    vlSelf->top__DOT__if_id__DOT__pc_in = vlSelf->top__DOT__pc_cpu;
    vlSelf->top__DOT__pc_if = vlSelf->top__DOT__if_id__DOT__pc;
    vlSelf->top__DOT__if_id__DOT__instruction_out = vlSelf->top__DOT__if_id_decoder_instr;
    vlSelf->top__DOT__branch_predictor__DOT__pc_if 
        = vlSelf->top__DOT__pc_if;
    vlSelf->top__DOT__if_id__DOT__pc_out = vlSelf->top__DOT__pc_if;
    vlSelf->top__DOT__branch_predictor__DOT__index_if 
        = (0x3ffU & (IData)(vlSelf->top__DOT__pc_if));
    vlSelf->top__DOT__branch_predictor__DOT__pc_tag_if 
        = (vlSelf->top__DOT__pc_if >> 0xaU);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 0U;
        } else if ((1U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 0U;
        } else if ((2U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 1U;
        } else if ((3U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_valid = 1U;
            vlSelf->top__DOT__instruction_cache__DOT__command_store = 0U;
            vlSelf->top__DOT__instruction_cache__DOT__command_rready = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i;
    top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i = 0;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0;
    __Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0 = 0;
    VlWide<4>/*118:0*/ __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0;
    VL_ZERO_W(119, __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__branch_predictor__DOT__btb_mem__v0;
    __Vdlyvset__top__DOT__branch_predictor__DOT__btb_mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__branch_predictor__DOT__btb_mem__v0 = 0U;
    if (vlSelf->reset) {
        top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i = 0U;
        while (VL_GTES_III(32, 0x3ffU, top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)) {
            vlSelf->top__DOT__branch_predictor__DOT__btb_mem[(0x3ffU 
                                                              & top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)][0U] = 0U;
            vlSelf->top__DOT__branch_predictor__DOT__btb_mem[(0x3ffU 
                                                              & top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)][1U] = 0U;
            vlSelf->top__DOT__branch_predictor__DOT__btb_mem[(0x3ffU 
                                                              & top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)][2U] = 0U;
            vlSelf->top__DOT__branch_predictor__DOT__btb_mem[(0x3ffU 
                                                              & top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)][3U] = 0U;
            top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i 
                = ((IData)(1U) + top__DOT__branch_predictor__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top__DOT__branch_taken_ex) {
            __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[0U] 
                = (1U | ((IData)(vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex) 
                         << 1U));
            __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[1U] 
                = (((IData)(vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex) 
                    >> 0x1fU) | ((IData)((vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[2U] 
                = (((IData)(vlSelf->top__DOT__branch_predictor__DOT__pc_tag_ex) 
                    << 1U) | ((IData)((vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex 
                                       >> 0x20U)) >> 0x1fU));
            __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[3U] 
                = (((IData)(vlSelf->top__DOT__branch_predictor__DOT__pc_tag_ex) 
                    >> 0x1fU) | ((IData)((vlSelf->top__DOT__branch_predictor__DOT__pc_tag_ex 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdlyvset__top__DOT__branch_predictor__DOT__btb_mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0 
                = vlSelf->top__DOT__branch_predictor__DOT__index_ex;
        }
    }
    if (__Vdlyvset__top__DOT__branch_predictor__DOT__btb_mem__v0) {
        vlSelf->top__DOT__branch_predictor__DOT__btb_mem[__Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0][0U] 
            = __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[0U];
        vlSelf->top__DOT__branch_predictor__DOT__btb_mem[__Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0][1U] 
            = __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[1U];
        vlSelf->top__DOT__branch_predictor__DOT__btb_mem[__Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0][2U] 
            = __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[2U];
        vlSelf->top__DOT__branch_predictor__DOT__btb_mem[__Vdlyvdim0__top__DOT__branch_predictor__DOT__btb_mem__v0][3U] 
            = __Vdlyvval__top__DOT__branch_predictor__DOT__btb_mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<32>/*1023:0*/ top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data;
    VL_ZERO_W(1024, top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data);
    IData/*20:0*/ top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0;
    top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0 = 0;
    // Body
    vlSelf->top__DOT__branch_predictor__DOT__current_valid 
        = (1U & vlSelf->top__DOT__branch_predictor__DOT__btb_mem
           [vlSelf->top__DOT__branch_predictor__DOT__index_if][0U]);
    vlSelf->top__DOT__branch_predictor__DOT__current_target 
        = (((QData)((IData)(vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                            [vlSelf->top__DOT__branch_predictor__DOT__index_if][2U])) 
            << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                          [vlSelf->top__DOT__branch_predictor__DOT__index_if][1U])) 
                          << 0x1fU) | ((QData)((IData)(
                                                       vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                                       [vlSelf->top__DOT__branch_predictor__DOT__index_if][0U])) 
                                       >> 1U)));
    vlSelf->top__DOT__branch_predictor__DOT__current_tag 
        = (0x3fffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                                   [vlSelf->top__DOT__branch_predictor__DOT__index_if][3U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->top__DOT__branch_predictor__DOT__btb_mem
                                                                [vlSelf->top__DOT__branch_predictor__DOT__index_if][2U])) 
                                                >> 1U)));
    if (((vlSelf->top__DOT__pc_if == vlSelf->top__DOT__pc_ex) 
         & (IData)(vlSelf->top__DOT__branch_taken_ex))) {
        vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ 
            = vlSelf->top__DOT__branch_predictor__DOT__target_addr_ex;
        vlSelf->top__DOT__branch_predictor__DOT__hit_ = 1U;
    } else if (((IData)(vlSelf->top__DOT__branch_predictor__DOT__current_valid) 
                & (vlSelf->top__DOT__branch_predictor__DOT__current_tag 
                   == vlSelf->top__DOT__branch_predictor__DOT__pc_tag_if))) {
        vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ 
            = vlSelf->top__DOT__branch_predictor__DOT__current_target;
        vlSelf->top__DOT__branch_predictor__DOT__hit_ = 1U;
    } else {
        vlSelf->top__DOT__branch_predictor__DOT__predicted_target_ = 0ULL;
        vlSelf->top__DOT__branch_predictor__DOT__hit_ = 0U;
    }
    vlSelf->top__DOT__branch_predictor__DOT__hit = vlSelf->top__DOT__branch_predictor__DOT__hit_;
    vlSelf->top__DOT__predicted_target = vlSelf->top__DOT__branch_predictor__DOT__predicted_target_;
    vlSelf->top__DOT__next_pc = ((IData)(vlSelf->top__DOT__branch_taken_ex)
                                  ? vlSelf->top__DOT__branch_predictor__DOT__predicted_target_
                                  : (4ULL + vlSelf->top__DOT__pc_cpu));
    vlSelf->top__DOT__branch_predictor__DOT__predicted_target 
        = vlSelf->top__DOT__predicted_target;
    vlSelf->top__DOT__instruction_cache__DOT__aaddr 
        = vlSelf->top__DOT__next_pc;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_addr = 0ULL;
        } else if ((1U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_addr 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__instruction_cache__DOT__dirty_addr);
        } else if ((2U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_addr 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__next_pc);
        } else if ((3U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
            vlSelf->top__DOT__instruction_cache__DOT__command_addr 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__next_pc);
        }
    }
    vlSelf->top__DOT__instruction_cache__DOT__tag = 
        (vlSelf->top__DOT__next_pc >> 0xfU);
    vlSelf->top__DOT__instruction_cache__DOT__offset 
        = (0x1fU & (IData)(vlSelf->top__DOT__next_pc));
    vlSelf->top__DOT__instruction_cache__DOT__index 
        = (0x3ffU & (IData)((vlSelf->top__DOT__next_pc 
                             >> 5U)));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__sel 
        = vlSelf->top__DOT__instruction_cache__DOT__offset;
    top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0 
        = (0x1fffffU & (((IData)(0x432U) * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)) 
                        + (0x7ffU & ((IData)(0x12U) 
                                     + VL_SHIFTL_III(11,11,32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset)), 5U)))));
    if ((0x10c7ffU >= (0x1fffffU & ((IData)(0x32U) 
                                    + ((IData)(0x432U) 
                                       * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) {
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(1U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  (0xffffU & (((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x32U) 
                                            + ((IData)(0x432U) 
                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(2U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(1U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(3U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(2U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(4U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(3U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(5U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(4U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(6U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(5U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(7U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(6U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(8U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(7U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(9U) + (0xffffU & 
                                         (((IData)(0x32U) 
                                           + ((IData)(0x432U) 
                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                          >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(8U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xaU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(9U) + (0xffffU & (((IData)(0x32U) 
                                              + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                             >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xbU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xaU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xcU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xbU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xdU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xcU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xeU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xdU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0xfU) + (0xffffU 
                                           & (((IData)(0x32U) 
                                               + ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                              >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xeU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x10U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0xfU) + (0xffffU & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x11U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x10U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x12U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x11U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x13U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x12U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x14U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x13U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x15U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x14U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x16U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x15U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x17U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x16U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x18U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x17U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x19U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x18U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1aU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x19U) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1bU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1aU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1cU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1bU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1dU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1cU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1eU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1dU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x1fU) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1eU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))
                 ? 0U : (vlSelf->top__DOT__instruction_cache__DOT__cache[
                         ((IData)(0x20U) + (0xffffU 
                                            & (((IData)(0x32U) 
                                                + ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x32U) 
                                                  + 
                                                  ((IData)(0x432U) 
                                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))))) 
               | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                  ((IData)(0x1fU) + (0xffffU & (((IData)(0x32U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                                >> 5U)))] 
                  >> (0x1fU & ((IData)(0x32U) + ((IData)(0x432U) 
                                                 * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))));
    } else {
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    vlSelf->top__DOT__instruction_cache__DOT__curr_valid 
        = ((0x10c7ffU >= (0x1fffffU & ((IData)(0x31U) 
                                       + ((IData)(0x432U) 
                                          * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))) 
           && (1U & (vlSelf->top__DOT__instruction_cache__DOT__cache[
                     (0xffffU & (((IData)(0x31U) + 
                                  ((IData)(0x432U) 
                                   * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x31U) 
                                                 + 
                                                 ((IData)(0x432U) 
                                                  * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))));
    vlSelf->top__DOT__cache_instr = ((0x10c7ffU >= top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0)
                                      ? (((0U == (0x1fU 
                                                  & top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0))
                                           ? 0U : (
                                                   vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                   (((IData)(0x1fU) 
                                                     + top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0)))) 
                                         | (vlSelf->top__DOT__instruction_cache__DOT__cache[
                                            (top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & top__DOT__instruction_cache__DOT____VdfgTmp_h1b2e9682__0)))
                                      : 0U);
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[1U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[2U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[3U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[4U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[5U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[6U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[7U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[8U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[9U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xaU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xbU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xcU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xdU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xeU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0xfU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x10U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x11U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x12U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x13U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x14U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x15U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x16U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x17U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x18U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x19U] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1aU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1bU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1cU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1dU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1eU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__data[0x1fU] 
        = top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU];
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1eU] 
        = (IData)((((QData)((IData)(((0x1fU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x1eU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1fU] 
        = (IData)(((((QData)((IData)(((0x1fU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x1eU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1eU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1cU] 
        = (IData)((((QData)((IData)(((0x1dU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1dU] 
        = (IData)(((((QData)((IData)(((0x1dU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x1cU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1cU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1aU] 
        = (IData)((((QData)((IData)(((0x1bU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x1aU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1bU] 
        = (IData)(((((QData)((IData)(((0x1bU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x1aU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x1aU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x18U] 
        = (IData)((((QData)((IData)(((0x19U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x18U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x19U] 
        = (IData)(((((QData)((IData)(((0x19U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x18U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x18U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x16U] 
        = (IData)((((QData)((IData)(((0x17U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x16U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x17U] 
        = (IData)(((((QData)((IData)(((0x17U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x16U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x16U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x14U] 
        = (IData)((((QData)((IData)(((0x15U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x14U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x15U] 
        = (IData)(((((QData)((IData)(((0x15U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x14U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x14U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x12U] 
        = (IData)((((QData)((IData)(((0x13U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x12U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x13U] 
        = (IData)(((((QData)((IData)(((0x13U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x12U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x12U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x10U] 
        = (IData)((((QData)((IData)(((0x11U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x11U] 
        = (IData)(((((QData)((IData)(((0x11U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0x10U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xeU] 
        = (IData)((((QData)((IData)(((0xfU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0xeU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xfU] 
        = (IData)(((((QData)((IData)(((0xfU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0xeU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xeU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xcU] 
        = (IData)((((QData)((IData)(((0xdU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0xcU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xdU] 
        = (IData)(((((QData)((IData)(((0xdU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0xcU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xcU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xaU] 
        = (IData)((((QData)((IData)(((0xbU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0xaU 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xbU] 
        = (IData)(((((QData)((IData)(((0xbU == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0xaU 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0xaU])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[8U] 
        = (IData)((((QData)((IData)(((9U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U]))) 
                    << 0x20U) | (QData)((IData)(((8U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[9U] 
        = (IData)(((((QData)((IData)(((9U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[9U]))) 
                     << 0x20U) | (QData)((IData)(((8U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[8U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[6U] 
        = (IData)((((QData)((IData)(((7U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U]))) 
                    << 0x20U) | (QData)((IData)(((6U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[7U] 
        = (IData)(((((QData)((IData)(((7U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[7U]))) 
                     << 0x20U) | (QData)((IData)(((6U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[6U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[4U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U]))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[5U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[5U]))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[4U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[2U] 
        = (IData)((((QData)((IData)(((3U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U]))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[3U] 
        = (IData)(((((QData)((IData)(((3U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[3U]))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[2U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0U] 
        = (IData)((((QData)((IData)(((1U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                      ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U]))) 
                    << 0x20U) | (QData)((IData)(((0U 
                                                  == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                  ? 0U
                                                  : 
                                                 top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U])))));
    vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[1U] 
        = (IData)(((((QData)((IData)(((1U == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                       ? 0U : top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[1U]))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__instruction_cache__DOT__offset))
                                                   ? 0U
                                                   : 
                                                  top__DOT__instruction_cache__DOT____Vcellinp__store_modifier__data[0U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__instruction_cache_hit = ((vlSelf->top__DOT__instruction_cache__DOT__tag 
                                                == 
                                                ((0x10c7ffU 
                                                  >= 
                                                  (0x1fffffU 
                                                   & ((IData)(0x432U) 
                                                      * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                  ? 
                                                 (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                      (((IData)(0x30U) 
                                                                        + 
                                                                        (0x1fffffU 
                                                                         & ((IData)(0x432U) 
                                                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x432U) 
                                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x432U) 
                                                            * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x432U) 
                                                              * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x1fffffU 
                                                                             & ((IData)(0x432U) 
                                                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x432U) 
                                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__instruction_cache__DOT__cache[
                                                                           (0xffffU 
                                                                            & (((IData)(0x432U) 
                                                                                * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x432U) 
                                                               * (IData)(vlSelf->top__DOT__instruction_cache__DOT__index)))))))
                                                  : 0ULL)) 
                                               & (IData)(vlSelf->top__DOT__instruction_cache__DOT__curr_valid));
    vlSelf->top__DOT__if_id__DOT__instruction_in = vlSelf->top__DOT__cache_instr;
    vlSelf->top__DOT__instruction_cache__DOT__data_to_cpu 
        = vlSelf->top__DOT__cache_instr;
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[1U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[1U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[2U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[2U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[3U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[3U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[4U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[4U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[5U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[5U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[6U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[6U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[7U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[7U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[8U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[8U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[9U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[9U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xaU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xaU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xbU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xbU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xcU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xcU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xdU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xdU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xeU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xeU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0xfU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0xfU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x10U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x10U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x11U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x11U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x12U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x12U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x13U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x13U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x14U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x14U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x15U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x15U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x16U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x16U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x17U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x17U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x18U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x18U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x19U] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x19U];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1aU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1aU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1bU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1bU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1cU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1cU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1dU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1dU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1eU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1eU];
    vlSelf->top__DOT__instruction_cache__DOT__new_cache_data[0x1fU] 
        = vlSelf->top__DOT__instruction_cache__DOT__store_modifier__DOT__final_data[0x1fU];
    vlSelf->top__DOT__instruction_cache__DOT__hit = vlSelf->top__DOT__instruction_cache_hit;
    if ((0U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache_hit)
                ? 0U : ((IData)(vlSelf->top__DOT__instruction_cache__DOT__curr_valid)
                         ? 2U : 3U));
    } else if ((1U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache__DOT__bus_ready)
                ? 0U : 1U);
    } else if ((2U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache__DOT__bus_valid)
                ? 1U : 2U);
    } else if ((3U == vlSelf->top__DOT__instruction_cache__DOT__state)) {
        vlSelf->top__DOT__instruction_cache__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__instruction_cache__DOT__bus_valid)
                ? 0U : 3U);
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("top.sv", 3, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("top.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top.sv", 3, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->hz32768timer & 0xfeU))) {
        Verilated::overWidthError("hz32768timer");}
    if (VL_UNLIKELY((vlSelf->m_axi_awready & 0xfeU))) {
        Verilated::overWidthError("m_axi_awready");}
    if (VL_UNLIKELY((vlSelf->m_axi_wready & 0xfeU))) {
        Verilated::overWidthError("m_axi_wready");}
    if (VL_UNLIKELY((vlSelf->m_axi_bid & 0xe000U))) {
        Verilated::overWidthError("m_axi_bid");}
    if (VL_UNLIKELY((vlSelf->m_axi_bresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_bresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_bvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_bvalid");}
    if (VL_UNLIKELY((vlSelf->m_axi_arready & 0xfeU))) {
        Verilated::overWidthError("m_axi_arready");}
    if (VL_UNLIKELY((vlSelf->m_axi_rid & 0xe000U))) {
        Verilated::overWidthError("m_axi_rid");}
    if (VL_UNLIKELY((vlSelf->m_axi_rresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_rresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_rlast & 0xfeU))) {
        Verilated::overWidthError("m_axi_rlast");}
    if (VL_UNLIKELY((vlSelf->m_axi_rvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_rvalid");}
    if (VL_UNLIKELY((vlSelf->m_axi_acvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_acvalid");}
    if (VL_UNLIKELY((vlSelf->m_axi_acsnoop & 0xf0U))) {
        Verilated::overWidthError("m_axi_acsnoop");}
}
#endif  // VL_DEBUG
