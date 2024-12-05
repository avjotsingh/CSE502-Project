// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , clk("clk")
    , reset("reset")
    , hz32768timer("hz32768timer")
    , m_axi_awlen("m_axi_awlen")
    , m_axi_awsize("m_axi_awsize")
    , m_axi_awburst("m_axi_awburst")
    , m_axi_awlock("m_axi_awlock")
    , m_axi_awcache("m_axi_awcache")
    , m_axi_awprot("m_axi_awprot")
    , m_axi_awvalid("m_axi_awvalid")
    , m_axi_awready("m_axi_awready")
    , m_axi_wstrb("m_axi_wstrb")
    , m_axi_wlast("m_axi_wlast")
    , m_axi_wvalid("m_axi_wvalid")
    , m_axi_wready("m_axi_wready")
    , m_axi_bresp("m_axi_bresp")
    , m_axi_bvalid("m_axi_bvalid")
    , m_axi_bready("m_axi_bready")
    , m_axi_arlen("m_axi_arlen")
    , m_axi_arsize("m_axi_arsize")
    , m_axi_arburst("m_axi_arburst")
    , m_axi_arlock("m_axi_arlock")
    , m_axi_arcache("m_axi_arcache")
    , m_axi_arprot("m_axi_arprot")
    , m_axi_arvalid("m_axi_arvalid")
    , m_axi_arready("m_axi_arready")
    , m_axi_rresp("m_axi_rresp")
    , m_axi_rlast("m_axi_rlast")
    , m_axi_rvalid("m_axi_rvalid")
    , m_axi_rready("m_axi_rready")
    , m_axi_acvalid("m_axi_acvalid")
    , m_axi_acready("m_axi_acready")
    , m_axi_acsnoop("m_axi_acsnoop")
    , m_axi_awid("m_axi_awid")
    , m_axi_bid("m_axi_bid")
    , m_axi_arid("m_axi_arid")
    , m_axi_rid("m_axi_rid")
    , entry("entry")
    , stackptr("stackptr")
    , satp("satp")
    , m_axi_awaddr("m_axi_awaddr")
    , m_axi_wdata("m_axi_wdata")
    , m_axi_araddr("m_axi_araddr")
    , m_axi_rdata("m_axi_rdata")
    , m_axi_acaddr("m_axi_acaddr")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
