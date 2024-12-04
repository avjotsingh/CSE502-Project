// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->cacheMemoryBus__DOT__clk = vlSelf->clk;
    vlSelf->cacheMemoryBus__DOT__reset = vlSelf->reset;
    vlSelf->cacheMemoryBus__DOT__hz32768timer = vlSelf->hz32768timer;
    vlSelf->cacheMemoryBus__DOT__command_store = vlSelf->command_store;
    vlSelf->cacheMemoryBus__DOT__command_rready = vlSelf->command_rready;
    vlSelf->cacheMemoryBus__DOT__command_addr[0U] = 
        vlSelf->command_addr[0U];
    vlSelf->cacheMemoryBus__DOT__command_addr[1U] = 
        vlSelf->command_addr[1U];
    vlSelf->cacheMemoryBus__DOT__command_addr[2U] = 
        vlSelf->command_addr[2U];
    vlSelf->cacheMemoryBus__DOT__command_addr[3U] = 
        vlSelf->command_addr[3U];
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->cacheMemoryBus__DOT__data_in[__Vilp] 
            = vlSelf->data_in[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->cacheMemoryBus__DOT__m_axi_awready = vlSelf->m_axi_awready;
    vlSelf->cacheMemoryBus__DOT__m_axi_wready = vlSelf->m_axi_wready;
    vlSelf->cacheMemoryBus__DOT__m_axi_bresp = vlSelf->m_axi_bresp;
    vlSelf->cacheMemoryBus__DOT__m_axi_bvalid = vlSelf->m_axi_bvalid;
    vlSelf->cacheMemoryBus__DOT__m_axi_arready = vlSelf->m_axi_arready;
    vlSelf->cacheMemoryBus__DOT__m_axi_rdata = vlSelf->m_axi_rdata;
    vlSelf->cacheMemoryBus__DOT__m_axi_rresp = vlSelf->m_axi_rresp;
    vlSelf->cacheMemoryBus__DOT__m_axi_rlast = vlSelf->m_axi_rlast;
    vlSelf->cacheMemoryBus__DOT__m_axi_rvalid = vlSelf->m_axi_rvalid;
    vlSelf->cacheMemoryBus__DOT__m_axi_acvalid = vlSelf->m_axi_acvalid;
    vlSelf->cacheMemoryBus__DOT__m_axi_acaddr = vlSelf->m_axi_acaddr;
    vlSelf->cacheMemoryBus__DOT__m_axi_acsnoop = vlSelf->m_axi_acsnoop;
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__sel 
        = vlSelf->cacheMemoryBus__DOT__currID;
    vlSelf->m_axi_awlen = vlSelf->cacheMemoryBus__DOT__m_axi_awlen;
    vlSelf->m_axi_awsize = vlSelf->cacheMemoryBus__DOT__m_axi_awsize;
    vlSelf->m_axi_awburst = vlSelf->cacheMemoryBus__DOT__m_axi_awburst;
    vlSelf->m_axi_awlock = vlSelf->cacheMemoryBus__DOT__m_axi_awlock;
    vlSelf->m_axi_awcache = vlSelf->cacheMemoryBus__DOT__m_axi_awcache;
    vlSelf->m_axi_awprot = vlSelf->cacheMemoryBus__DOT__m_axi_awprot;
    vlSelf->m_axi_wlast = vlSelf->cacheMemoryBus__DOT__m_axi_wlast;
    vlSelf->m_axi_bready = vlSelf->cacheMemoryBus__DOT__m_axi_bready;
    vlSelf->m_axi_arlen = vlSelf->cacheMemoryBus__DOT__m_axi_arlen;
    vlSelf->m_axi_arsize = vlSelf->cacheMemoryBus__DOT__m_axi_arsize;
    vlSelf->m_axi_arburst = vlSelf->cacheMemoryBus__DOT__m_axi_arburst;
    vlSelf->m_axi_arlock = vlSelf->cacheMemoryBus__DOT__m_axi_arlock;
    vlSelf->m_axi_arcache = vlSelf->cacheMemoryBus__DOT__m_axi_arcache;
    vlSelf->m_axi_arprot = vlSelf->cacheMemoryBus__DOT__m_axi_arprot;
    vlSelf->m_axi_acready = vlSelf->cacheMemoryBus__DOT__m_axi_acready;
    vlSelf->cacheMemoryBus__DOT__command_valid = vlSelf->command_valid;
    vlSelf->data_out[0U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0U];
    vlSelf->data_out[1U] = vlSelf->cacheMemoryBus__DOT__data_buffer[1U];
    vlSelf->data_out[2U] = vlSelf->cacheMemoryBus__DOT__data_buffer[2U];
    vlSelf->data_out[3U] = vlSelf->cacheMemoryBus__DOT__data_buffer[3U];
    vlSelf->data_out[4U] = vlSelf->cacheMemoryBus__DOT__data_buffer[4U];
    vlSelf->data_out[5U] = vlSelf->cacheMemoryBus__DOT__data_buffer[5U];
    vlSelf->data_out[6U] = vlSelf->cacheMemoryBus__DOT__data_buffer[6U];
    vlSelf->data_out[7U] = vlSelf->cacheMemoryBus__DOT__data_buffer[7U];
    vlSelf->data_out[8U] = vlSelf->cacheMemoryBus__DOT__data_buffer[8U];
    vlSelf->data_out[9U] = vlSelf->cacheMemoryBus__DOT__data_buffer[9U];
    vlSelf->data_out[0xaU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xaU];
    vlSelf->data_out[0xbU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xbU];
    vlSelf->data_out[0xcU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xcU];
    vlSelf->data_out[0xdU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xdU];
    vlSelf->data_out[0xeU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xeU];
    vlSelf->data_out[0xfU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xfU];
    vlSelf->data_out[0x10U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x10U];
    vlSelf->data_out[0x11U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x11U];
    vlSelf->data_out[0x12U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x12U];
    vlSelf->data_out[0x13U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x13U];
    vlSelf->data_out[0x14U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x14U];
    vlSelf->data_out[0x15U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x15U];
    vlSelf->data_out[0x16U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x16U];
    vlSelf->data_out[0x17U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x17U];
    vlSelf->data_out[0x18U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x18U];
    vlSelf->data_out[0x19U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x19U];
    vlSelf->data_out[0x1aU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1aU];
    vlSelf->data_out[0x1bU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1bU];
    vlSelf->data_out[0x1cU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1cU];
    vlSelf->data_out[0x1dU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1dU];
    vlSelf->data_out[0x1eU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1eU];
    vlSelf->data_out[0x1fU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1fU];
    vlSelf->m_axi_awaddr = vlSelf->cacheMemoryBus__DOT__addr_buffer;
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i = 0U;
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out = 0U;
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out 
        = ((1U & ((IData)(vlSelf->command_valid) >> (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i)))
            ? (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i)
            : (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out));
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i 
        = (1U & ((IData)(1U) + (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i)));
    while (vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i) {
        vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out 
            = ((1U & ((IData)(vlSelf->command_valid) 
                      >> (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i)))
                ? (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i)
                : (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out));
        vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i 
            = (1U & ((IData)(1U) + (IData)(vlSelf->cacheMemoryBus__DOT__busChoice__DOT__i)));
    }
    vlSelf->cacheMemoryBus__DOT__currPow2 = (3U & VL_POWSS_III(2,32,1, (IData)(2U), (IData)(vlSelf->cacheMemoryBus__DOT__currID), 1,0));
    if (vlSelf->reset) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
    } else if ((0U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        vlSelf->cacheMemoryBus__DOT__bus_ready = vlSelf->cacheMemoryBus__DOT__currPow2;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
    } else if ((1U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 1U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
    } else if ((2U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 1U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
    } else if ((3U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = vlSelf->cacheMemoryBus__DOT__currPow2;
    } else if ((4U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 1U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
    } else if ((5U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 
            (((QData)((IData)(vlSelf->cacheMemoryBus__DOT__data_buffer[
                              (((IData)(0x3fU) + (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))) 
                               >> 5U)])) << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))))) 
             | (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)))
                  ? 0ULL : ((QData)((IData)(vlSelf->cacheMemoryBus__DOT__data_buffer[
                                            (((IData)(0x1fU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))) 
                                             >> 5U)])) 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))))) 
                | ((QData)((IData)(vlSelf->cacheMemoryBus__DOT__data_buffer[
                                   (0x1fU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U) 
                                             >> 5U))])) 
                   >> (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)))));
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
    }
    vlSelf->cacheMemoryBus__DOT__busChoice__DOT__candidates 
        = vlSelf->cacheMemoryBus__DOT__command_valid;
    vlSelf->cacheMemoryBus__DOT__data_out[0U] = vlSelf->data_out[0U];
    vlSelf->cacheMemoryBus__DOT__data_out[1U] = vlSelf->data_out[1U];
    vlSelf->cacheMemoryBus__DOT__data_out[2U] = vlSelf->data_out[2U];
    vlSelf->cacheMemoryBus__DOT__data_out[3U] = vlSelf->data_out[3U];
    vlSelf->cacheMemoryBus__DOT__data_out[4U] = vlSelf->data_out[4U];
    vlSelf->cacheMemoryBus__DOT__data_out[5U] = vlSelf->data_out[5U];
    vlSelf->cacheMemoryBus__DOT__data_out[6U] = vlSelf->data_out[6U];
    vlSelf->cacheMemoryBus__DOT__data_out[7U] = vlSelf->data_out[7U];
    vlSelf->cacheMemoryBus__DOT__data_out[8U] = vlSelf->data_out[8U];
    vlSelf->cacheMemoryBus__DOT__data_out[9U] = vlSelf->data_out[9U];
    vlSelf->cacheMemoryBus__DOT__data_out[0xaU] = vlSelf->data_out[0xaU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xbU] = vlSelf->data_out[0xbU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xcU] = vlSelf->data_out[0xcU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xdU] = vlSelf->data_out[0xdU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xeU] = vlSelf->data_out[0xeU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xfU] = vlSelf->data_out[0xfU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x10U] = 
        vlSelf->data_out[0x10U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x11U] = 
        vlSelf->data_out[0x11U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x12U] = 
        vlSelf->data_out[0x12U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x13U] = 
        vlSelf->data_out[0x13U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x14U] = 
        vlSelf->data_out[0x14U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x15U] = 
        vlSelf->data_out[0x15U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x16U] = 
        vlSelf->data_out[0x16U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x17U] = 
        vlSelf->data_out[0x17U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x18U] = 
        vlSelf->data_out[0x18U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x19U] = 
        vlSelf->data_out[0x19U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1aU] = 
        vlSelf->data_out[0x1aU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1bU] = 
        vlSelf->data_out[0x1bU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1cU] = 
        vlSelf->data_out[0x1cU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1dU] = 
        vlSelf->data_out[0x1dU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1eU] = 
        vlSelf->data_out[0x1eU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1fU] = 
        vlSelf->data_out[0x1fU];
    vlSelf->m_axi_wvalid = vlSelf->cacheMemoryBus__DOT__m_axi_wvalid;
    vlSelf->m_axi_awvalid = vlSelf->cacheMemoryBus__DOT__m_axi_awvalid;
    vlSelf->m_axi_rready = vlSelf->cacheMemoryBus__DOT__m_axi_rready;
    vlSelf->m_axi_arvalid = vlSelf->cacheMemoryBus__DOT__m_axi_arvalid;
    vlSelf->m_axi_wdata = vlSelf->cacheMemoryBus__DOT__m_axi_wdata;
    vlSelf->m_axi_araddr = vlSelf->m_axi_awaddr;
    vlSelf->cacheMemoryBus__DOT__m_axi_awaddr = vlSelf->m_axi_awaddr;
    vlSelf->cacheMemoryBus__DOT__m_axi_araddr = vlSelf->m_axi_awaddr;
    vlSelf->cacheMemoryBus__DOT__busChoiceOut = vlSelf->cacheMemoryBus__DOT__busChoice__DOT__out;
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__broadcast 
        = vlSelf->cacheMemoryBus__DOT__currPow2;
    if ((0U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = (
                                                   (1U 
                                                    & ((IData)(vlSelf->command_valid) 
                                                       >> (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelf->command_store) 
                                                        >> (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut)))
                                                     ? 4U
                                                     : 1U)
                                                    : 0U);
    } else if ((1U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = ((IData)(vlSelf->m_axi_arready)
                                                    ? 2U
                                                    : 1U);
    } else if ((2U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = 2U;
    } else if ((3U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = (
                                                   (1U 
                                                    & ((IData)(vlSelf->command_rready) 
                                                       >> (IData)(vlSelf->cacheMemoryBus__DOT__currID)))
                                                    ? 0U
                                                    : 3U);
    } else if ((4U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = ((IData)(vlSelf->m_axi_awready)
                                                    ? 5U
                                                    : 4U);
    } else if ((5U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = 5U;
    }
    vlSelf->bus_ready = vlSelf->cacheMemoryBus__DOT__bus_ready;
    vlSelf->bus_valid = vlSelf->cacheMemoryBus__DOT__bus_valid;
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

extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__cacheMemoryBus__DOT__offsetCounter;
    __Vdly__cacheMemoryBus__DOT__offsetCounter = 0;
    // Body
    __Vdly__cacheMemoryBus__DOT__offsetCounter = vlSelf->cacheMemoryBus__DOT__offsetCounter;
    if (vlSelf->reset) {
        __Vdly__cacheMemoryBus__DOT__offsetCounter = 0U;
        vlSelf->cacheMemoryBus__DOT__data_buffer[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0xaU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0xbU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0xcU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0xdU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0xeU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0xfU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x10U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x11U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x12U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x13U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x14U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x15U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x16U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x17U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x18U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x19U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x1aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x1bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x1cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x1dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x1eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->cacheMemoryBus__DOT__data_buffer[0x1fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->cacheMemoryBus__DOT__addr_buffer = 0ULL;
        vlSelf->cacheMemoryBus__DOT__currID = 0U;
    } else if ((0U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__currID = vlSelf->cacheMemoryBus__DOT__busChoiceOut;
        vlSelf->cacheMemoryBus__DOT__addr_buffer = 
            (((QData)((IData)(vlSelf->command_addr[
                              (((IData)(0x3fU) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U))) 
                               >> 5U)])) << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U))))) 
             | (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U)))
                  ? 0ULL : ((QData)((IData)(vlSelf->command_addr[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U))) 
                                             >> 5U)])) 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U))))) 
                | ((QData)((IData)(vlSelf->command_addr[
                                   (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U) 
                                          >> 5U))])) 
                   >> (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut), 6U)))));
    } else if ((1U != vlSelf->cacheMemoryBus__DOT__state)) {
        if ((2U == vlSelf->cacheMemoryBus__DOT__state)) {
            if (vlSelf->m_axi_rvalid) {
                VL_ASSIGNSEL_WQ(1024,64,(0x3ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)), vlSelf->cacheMemoryBus__DOT__data_buffer, vlSelf->m_axi_rdata);
                __Vdly__cacheMemoryBus__DOT__offsetCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter)));
            }
        } else if ((3U != vlSelf->cacheMemoryBus__DOT__state)) {
            if ((4U != vlSelf->cacheMemoryBus__DOT__state)) {
                if ((5U == vlSelf->cacheMemoryBus__DOT__state)) {
                    if (vlSelf->m_axi_wready) {
                        __Vdly__cacheMemoryBus__DOT__offsetCounter 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter)));
                    }
                }
            }
        }
    }
    vlSelf->cacheMemoryBus__DOT__offsetCounter = __Vdly__cacheMemoryBus__DOT__offsetCounter;
    vlSelf->m_axi_awaddr = vlSelf->cacheMemoryBus__DOT__addr_buffer;
    vlSelf->data_out[0U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0U];
    vlSelf->data_out[1U] = vlSelf->cacheMemoryBus__DOT__data_buffer[1U];
    vlSelf->data_out[2U] = vlSelf->cacheMemoryBus__DOT__data_buffer[2U];
    vlSelf->data_out[3U] = vlSelf->cacheMemoryBus__DOT__data_buffer[3U];
    vlSelf->data_out[4U] = vlSelf->cacheMemoryBus__DOT__data_buffer[4U];
    vlSelf->data_out[5U] = vlSelf->cacheMemoryBus__DOT__data_buffer[5U];
    vlSelf->data_out[6U] = vlSelf->cacheMemoryBus__DOT__data_buffer[6U];
    vlSelf->data_out[7U] = vlSelf->cacheMemoryBus__DOT__data_buffer[7U];
    vlSelf->data_out[8U] = vlSelf->cacheMemoryBus__DOT__data_buffer[8U];
    vlSelf->data_out[9U] = vlSelf->cacheMemoryBus__DOT__data_buffer[9U];
    vlSelf->data_out[0xaU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xaU];
    vlSelf->data_out[0xbU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xbU];
    vlSelf->data_out[0xcU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xcU];
    vlSelf->data_out[0xdU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xdU];
    vlSelf->data_out[0xeU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xeU];
    vlSelf->data_out[0xfU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0xfU];
    vlSelf->data_out[0x10U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x10U];
    vlSelf->data_out[0x11U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x11U];
    vlSelf->data_out[0x12U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x12U];
    vlSelf->data_out[0x13U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x13U];
    vlSelf->data_out[0x14U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x14U];
    vlSelf->data_out[0x15U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x15U];
    vlSelf->data_out[0x16U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x16U];
    vlSelf->data_out[0x17U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x17U];
    vlSelf->data_out[0x18U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x18U];
    vlSelf->data_out[0x19U] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x19U];
    vlSelf->data_out[0x1aU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1aU];
    vlSelf->data_out[0x1bU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1bU];
    vlSelf->data_out[0x1cU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1cU];
    vlSelf->data_out[0x1dU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1dU];
    vlSelf->data_out[0x1eU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1eU];
    vlSelf->data_out[0x1fU] = vlSelf->cacheMemoryBus__DOT__data_buffer[0x1fU];
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__sel 
        = vlSelf->cacheMemoryBus__DOT__currID;
    vlSelf->cacheMemoryBus__DOT__currPow2 = (3U & VL_POWSS_III(2,32,1, (IData)(2U), (IData)(vlSelf->cacheMemoryBus__DOT__currID), 1,0));
    if (vlSelf->reset) {
        vlSelf->cacheMemoryBus__DOT__state = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
        vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
        vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
    } else {
        vlSelf->cacheMemoryBus__DOT__state = vlSelf->cacheMemoryBus__DOT__next_state;
        if ((0U == vlSelf->cacheMemoryBus__DOT__state)) {
            vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_ready 
                = vlSelf->cacheMemoryBus__DOT__currPow2;
            vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        } else if ((1U == vlSelf->cacheMemoryBus__DOT__state)) {
            vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 1U;
            vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        } else if ((2U == vlSelf->cacheMemoryBus__DOT__state)) {
            vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_rready = 1U;
            vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        } else if ((3U == vlSelf->cacheMemoryBus__DOT__state)) {
            vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_valid 
                = vlSelf->cacheMemoryBus__DOT__currPow2;
            vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        } else if ((4U == vlSelf->cacheMemoryBus__DOT__state)) {
            vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 1U;
            vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_wdata = 0ULL;
        } else if ((5U == vlSelf->cacheMemoryBus__DOT__state)) {
            vlSelf->cacheMemoryBus__DOT__m_axi_wvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_awvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_rready = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_arvalid = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_ready = 0U;
            vlSelf->cacheMemoryBus__DOT__bus_valid = 0U;
            vlSelf->cacheMemoryBus__DOT__m_axi_wdata 
                = (((QData)((IData)(vlSelf->cacheMemoryBus__DOT__data_buffer[
                                    (((IData)(0x3fU) 
                                      + (0x3ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))))) 
                   | (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelf->cacheMemoryBus__DOT__data_buffer[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U))))) 
                      | ((QData)((IData)(vlSelf->cacheMemoryBus__DOT__data_buffer[
                                         (0x1fU & (
                                                   VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U) 
                                                   >> 5U))])) 
                         >> (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->cacheMemoryBus__DOT__offsetCounter), 6U)))));
        }
    }
    vlSelf->m_axi_araddr = vlSelf->m_axi_awaddr;
    vlSelf->cacheMemoryBus__DOT__m_axi_awaddr = vlSelf->m_axi_awaddr;
    vlSelf->cacheMemoryBus__DOT__m_axi_araddr = vlSelf->m_axi_awaddr;
    vlSelf->cacheMemoryBus__DOT__data_out[0U] = vlSelf->data_out[0U];
    vlSelf->cacheMemoryBus__DOT__data_out[1U] = vlSelf->data_out[1U];
    vlSelf->cacheMemoryBus__DOT__data_out[2U] = vlSelf->data_out[2U];
    vlSelf->cacheMemoryBus__DOT__data_out[3U] = vlSelf->data_out[3U];
    vlSelf->cacheMemoryBus__DOT__data_out[4U] = vlSelf->data_out[4U];
    vlSelf->cacheMemoryBus__DOT__data_out[5U] = vlSelf->data_out[5U];
    vlSelf->cacheMemoryBus__DOT__data_out[6U] = vlSelf->data_out[6U];
    vlSelf->cacheMemoryBus__DOT__data_out[7U] = vlSelf->data_out[7U];
    vlSelf->cacheMemoryBus__DOT__data_out[8U] = vlSelf->data_out[8U];
    vlSelf->cacheMemoryBus__DOT__data_out[9U] = vlSelf->data_out[9U];
    vlSelf->cacheMemoryBus__DOT__data_out[0xaU] = vlSelf->data_out[0xaU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xbU] = vlSelf->data_out[0xbU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xcU] = vlSelf->data_out[0xcU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xdU] = vlSelf->data_out[0xdU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xeU] = vlSelf->data_out[0xeU];
    vlSelf->cacheMemoryBus__DOT__data_out[0xfU] = vlSelf->data_out[0xfU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x10U] = 
        vlSelf->data_out[0x10U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x11U] = 
        vlSelf->data_out[0x11U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x12U] = 
        vlSelf->data_out[0x12U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x13U] = 
        vlSelf->data_out[0x13U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x14U] = 
        vlSelf->data_out[0x14U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x15U] = 
        vlSelf->data_out[0x15U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x16U] = 
        vlSelf->data_out[0x16U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x17U] = 
        vlSelf->data_out[0x17U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x18U] = 
        vlSelf->data_out[0x18U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x19U] = 
        vlSelf->data_out[0x19U];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1aU] = 
        vlSelf->data_out[0x1aU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1bU] = 
        vlSelf->data_out[0x1bU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1cU] = 
        vlSelf->data_out[0x1cU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1dU] = 
        vlSelf->data_out[0x1dU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1eU] = 
        vlSelf->data_out[0x1eU];
    vlSelf->cacheMemoryBus__DOT__data_out[0x1fU] = 
        vlSelf->data_out[0x1fU];
    vlSelf->cacheMemoryBus__DOT__busChoiceReply__DOT__broadcast 
        = vlSelf->cacheMemoryBus__DOT__currPow2;
    vlSelf->m_axi_wvalid = vlSelf->cacheMemoryBus__DOT__m_axi_wvalid;
    vlSelf->m_axi_awvalid = vlSelf->cacheMemoryBus__DOT__m_axi_awvalid;
    vlSelf->m_axi_rready = vlSelf->cacheMemoryBus__DOT__m_axi_rready;
    vlSelf->m_axi_arvalid = vlSelf->cacheMemoryBus__DOT__m_axi_arvalid;
    vlSelf->bus_ready = vlSelf->cacheMemoryBus__DOT__bus_ready;
    vlSelf->bus_valid = vlSelf->cacheMemoryBus__DOT__bus_valid;
    vlSelf->m_axi_wdata = vlSelf->cacheMemoryBus__DOT__m_axi_wdata;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((0U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = (
                                                   (1U 
                                                    & ((IData)(vlSelf->command_valid) 
                                                       >> (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelf->command_store) 
                                                        >> (IData)(vlSelf->cacheMemoryBus__DOT__busChoiceOut)))
                                                     ? 4U
                                                     : 1U)
                                                    : 0U);
    } else if ((1U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = ((IData)(vlSelf->m_axi_arready)
                                                    ? 2U
                                                    : 1U);
    } else if ((2U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = 2U;
    } else if ((3U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = (
                                                   (1U 
                                                    & ((IData)(vlSelf->command_rready) 
                                                       >> (IData)(vlSelf->cacheMemoryBus__DOT__currID)))
                                                    ? 0U
                                                    : 3U);
    } else if ((4U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = ((IData)(vlSelf->m_axi_awready)
                                                    ? 5U
                                                    : 4U);
    } else if ((5U == vlSelf->cacheMemoryBus__DOT__state)) {
        vlSelf->cacheMemoryBus__DOT__next_state = 5U;
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
            VL_FATAL_MT("cacheMemoryBus.sv", 1, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("cacheMemoryBus.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("cacheMemoryBus.sv", 1, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->command_valid & 0xfcU))) {
        Verilated::overWidthError("command_valid");}
    if (VL_UNLIKELY((vlSelf->command_store & 0xfcU))) {
        Verilated::overWidthError("command_store");}
    if (VL_UNLIKELY((vlSelf->command_rready & 0xfcU))) {
        Verilated::overWidthError("command_rready");}
    if (VL_UNLIKELY((vlSelf->m_axi_awready & 0xfeU))) {
        Verilated::overWidthError("m_axi_awready");}
    if (VL_UNLIKELY((vlSelf->m_axi_wready & 0xfeU))) {
        Verilated::overWidthError("m_axi_wready");}
    if (VL_UNLIKELY((vlSelf->m_axi_bresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_bresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_bvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_bvalid");}
    if (VL_UNLIKELY((vlSelf->m_axi_arready & 0xfeU))) {
        Verilated::overWidthError("m_axi_arready");}
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
