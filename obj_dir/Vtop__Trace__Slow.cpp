// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+9,"clk",-1);
	vcdp->declBit  (c+10,"reset",-1);
	vcdp->declBit  (c+11,"hz32768timer",-1);
	vcdp->declQuad (c+12,"entry",-1,63,0);
	vcdp->declQuad (c+14,"stackptr",-1,63,0);
	vcdp->declQuad (c+16,"satp",-1,63,0);
	vcdp->declBus  (c+18,"m_axi_awid",-1,12,0);
	vcdp->declQuad (c+19,"m_axi_awaddr",-1,63,0);
	vcdp->declBus  (c+21,"m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+22,"m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+23,"m_axi_awburst",-1,1,0);
	vcdp->declBit  (c+24,"m_axi_awlock",-1);
	vcdp->declBus  (c+25,"m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+26,"m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+27,"m_axi_awvalid",-1);
	vcdp->declBit  (c+28,"m_axi_awready",-1);
	vcdp->declQuad (c+29,"m_axi_wdata",-1,63,0);
	vcdp->declBus  (c+31,"m_axi_wstrb",-1,7,0);
	vcdp->declBit  (c+32,"m_axi_wlast",-1);
	vcdp->declBit  (c+33,"m_axi_wvalid",-1);
	vcdp->declBit  (c+34,"m_axi_wready",-1);
	vcdp->declBus  (c+35,"m_axi_bid",-1,12,0);
	vcdp->declBus  (c+36,"m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+37,"m_axi_bvalid",-1);
	vcdp->declBit  (c+38,"m_axi_bready",-1);
	vcdp->declBus  (c+39,"m_axi_arid",-1,12,0);
	vcdp->declQuad (c+40,"m_axi_araddr",-1,63,0);
	vcdp->declBus  (c+42,"m_axi_arlen",-1,7,0);
	vcdp->declBus  (c+43,"m_axi_arsize",-1,2,0);
	vcdp->declBus  (c+44,"m_axi_arburst",-1,1,0);
	vcdp->declBit  (c+45,"m_axi_arlock",-1);
	vcdp->declBus  (c+46,"m_axi_arcache",-1,3,0);
	vcdp->declBus  (c+47,"m_axi_arprot",-1,2,0);
	vcdp->declBit  (c+48,"m_axi_arvalid",-1);
	vcdp->declBit  (c+49,"m_axi_arready",-1);
	vcdp->declBus  (c+50,"m_axi_rid",-1,12,0);
	vcdp->declQuad (c+51,"m_axi_rdata",-1,63,0);
	vcdp->declBus  (c+53,"m_axi_rresp",-1,1,0);
	vcdp->declBit  (c+54,"m_axi_rlast",-1);
	vcdp->declBit  (c+55,"m_axi_rvalid",-1);
	vcdp->declBit  (c+56,"m_axi_rready",-1);
	vcdp->declBit  (c+57,"m_axi_acvalid",-1);
	vcdp->declBit  (c+58,"m_axi_acready",-1);
	vcdp->declQuad (c+59,"m_axi_acaddr",-1,63,0);
	vcdp->declBus  (c+61,"m_axi_acsnoop",-1,3,0);
	vcdp->declBus  (c+62,"top ID_WIDTH",-1,31,0);
	vcdp->declBus  (c+63,"top ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+63,"top DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+64,"top STRB_WIDTH",-1,31,0);
	vcdp->declBit  (c+9,"top clk",-1);
	vcdp->declBit  (c+10,"top reset",-1);
	vcdp->declBit  (c+11,"top hz32768timer",-1);
	vcdp->declQuad (c+12,"top entry",-1,63,0);
	vcdp->declQuad (c+14,"top stackptr",-1,63,0);
	vcdp->declQuad (c+16,"top satp",-1,63,0);
	vcdp->declBus  (c+18,"top m_axi_awid",-1,12,0);
	vcdp->declQuad (c+19,"top m_axi_awaddr",-1,63,0);
	vcdp->declBus  (c+21,"top m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+22,"top m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+23,"top m_axi_awburst",-1,1,0);
	vcdp->declBit  (c+24,"top m_axi_awlock",-1);
	vcdp->declBus  (c+25,"top m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+26,"top m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+27,"top m_axi_awvalid",-1);
	vcdp->declBit  (c+28,"top m_axi_awready",-1);
	vcdp->declQuad (c+29,"top m_axi_wdata",-1,63,0);
	vcdp->declBus  (c+31,"top m_axi_wstrb",-1,7,0);
	vcdp->declBit  (c+32,"top m_axi_wlast",-1);
	vcdp->declBit  (c+33,"top m_axi_wvalid",-1);
	vcdp->declBit  (c+34,"top m_axi_wready",-1);
	vcdp->declBus  (c+35,"top m_axi_bid",-1,12,0);
	vcdp->declBus  (c+36,"top m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+37,"top m_axi_bvalid",-1);
	vcdp->declBit  (c+38,"top m_axi_bready",-1);
	vcdp->declBus  (c+39,"top m_axi_arid",-1,12,0);
	vcdp->declQuad (c+40,"top m_axi_araddr",-1,63,0);
	vcdp->declBus  (c+42,"top m_axi_arlen",-1,7,0);
	vcdp->declBus  (c+43,"top m_axi_arsize",-1,2,0);
	vcdp->declBus  (c+44,"top m_axi_arburst",-1,1,0);
	vcdp->declBit  (c+45,"top m_axi_arlock",-1);
	vcdp->declBus  (c+46,"top m_axi_arcache",-1,3,0);
	vcdp->declBus  (c+47,"top m_axi_arprot",-1,2,0);
	vcdp->declBit  (c+48,"top m_axi_arvalid",-1);
	vcdp->declBit  (c+49,"top m_axi_arready",-1);
	vcdp->declBus  (c+50,"top m_axi_rid",-1,12,0);
	vcdp->declQuad (c+51,"top m_axi_rdata",-1,63,0);
	vcdp->declBus  (c+53,"top m_axi_rresp",-1,1,0);
	vcdp->declBit  (c+54,"top m_axi_rlast",-1);
	vcdp->declBit  (c+55,"top m_axi_rvalid",-1);
	vcdp->declBit  (c+56,"top m_axi_rready",-1);
	vcdp->declBit  (c+57,"top m_axi_acvalid",-1);
	vcdp->declBit  (c+58,"top m_axi_acready",-1);
	vcdp->declQuad (c+59,"top m_axi_acaddr",-1,63,0);
	vcdp->declBus  (c+61,"top m_axi_acsnoop",-1,3,0);
	vcdp->declQuad (c+4,"top pc",-1,63,0);
	vcdp->declBus  (c+6,"top test_in",-1,7,0);
	vcdp->declBus  (c+1,"top test_out",-1,2,0);
	vcdp->declBit  (c+7,"top test_start",-1);
	vcdp->declBus  (c+8,"top test2_in",-1,2,0);
	vcdp->declBus  (c+2,"top test2_out",-1,7,0);
	vcdp->declBus  (c+65,"top min LOG_INPUTS",-1,31,0);
	vcdp->declBus  (c+6,"top min in",-1,7,0);
	vcdp->declBus  (c+1,"top min out",-1,2,0);
	vcdp->declBus  (c+3,"top min i",-1,2,0);
	vcdp->declBus  (c+65,"top min_inv LOG_INPUTS",-1,31,0);
	vcdp->declBus  (c+8,"top min_inv in",-1,2,0);
	vcdp->declBus  (c+2,"top min_inv out",-1,7,0);
	vcdp->declBus  (c+66,"top min_inv i",-1,7,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->top__DOT__test_out),3);
	vcdp->fullBus  (c+2,(vlTOPp->top__DOT__test2_out),8);
	vcdp->fullBus  (c+3,(vlTOPp->top__DOT__min__DOT__i),3);
	vcdp->fullQuad (c+4,(vlTOPp->top__DOT__pc),64);
	vcdp->fullBus  (c+6,(vlTOPp->top__DOT__test_in),8);
	vcdp->fullBit  (c+7,(vlTOPp->top__DOT__test_start));
	vcdp->fullBus  (c+8,(vlTOPp->top__DOT__test2_in),3);
	vcdp->fullBit  (c+9,(vlTOPp->clk));
	vcdp->fullBit  (c+10,(vlTOPp->reset));
	vcdp->fullBit  (c+11,(vlTOPp->hz32768timer));
	vcdp->fullQuad (c+12,(vlTOPp->entry),64);
	vcdp->fullQuad (c+14,(vlTOPp->stackptr),64);
	vcdp->fullQuad (c+16,(vlTOPp->satp),64);
	vcdp->fullBus  (c+18,(vlTOPp->m_axi_awid),13);
	vcdp->fullQuad (c+19,(vlTOPp->m_axi_awaddr),64);
	vcdp->fullBus  (c+21,(vlTOPp->m_axi_awlen),8);
	vcdp->fullBus  (c+22,(vlTOPp->m_axi_awsize),3);
	vcdp->fullBus  (c+23,(vlTOPp->m_axi_awburst),2);
	vcdp->fullBit  (c+24,(vlTOPp->m_axi_awlock));
	vcdp->fullBus  (c+25,(vlTOPp->m_axi_awcache),4);
	vcdp->fullBus  (c+26,(vlTOPp->m_axi_awprot),3);
	vcdp->fullBit  (c+27,(vlTOPp->m_axi_awvalid));
	vcdp->fullBit  (c+28,(vlTOPp->m_axi_awready));
	vcdp->fullQuad (c+29,(vlTOPp->m_axi_wdata),64);
	vcdp->fullBus  (c+31,(vlTOPp->m_axi_wstrb),8);
	vcdp->fullBit  (c+32,(vlTOPp->m_axi_wlast));
	vcdp->fullBit  (c+33,(vlTOPp->m_axi_wvalid));
	vcdp->fullBit  (c+34,(vlTOPp->m_axi_wready));
	vcdp->fullBus  (c+35,(vlTOPp->m_axi_bid),13);
	vcdp->fullBus  (c+36,(vlTOPp->m_axi_bresp),2);
	vcdp->fullBit  (c+37,(vlTOPp->m_axi_bvalid));
	vcdp->fullBit  (c+38,(vlTOPp->m_axi_bready));
	vcdp->fullBus  (c+39,(vlTOPp->m_axi_arid),13);
	vcdp->fullQuad (c+40,(vlTOPp->m_axi_araddr),64);
	vcdp->fullBus  (c+42,(vlTOPp->m_axi_arlen),8);
	vcdp->fullBus  (c+43,(vlTOPp->m_axi_arsize),3);
	vcdp->fullBus  (c+44,(vlTOPp->m_axi_arburst),2);
	vcdp->fullBit  (c+45,(vlTOPp->m_axi_arlock));
	vcdp->fullBus  (c+46,(vlTOPp->m_axi_arcache),4);
	vcdp->fullBus  (c+47,(vlTOPp->m_axi_arprot),3);
	vcdp->fullBit  (c+48,(vlTOPp->m_axi_arvalid));
	vcdp->fullBit  (c+49,(vlTOPp->m_axi_arready));
	vcdp->fullBus  (c+50,(vlTOPp->m_axi_rid),13);
	vcdp->fullQuad (c+51,(vlTOPp->m_axi_rdata),64);
	vcdp->fullBus  (c+53,(vlTOPp->m_axi_rresp),2);
	vcdp->fullBit  (c+54,(vlTOPp->m_axi_rlast));
	vcdp->fullBit  (c+55,(vlTOPp->m_axi_rvalid));
	vcdp->fullBit  (c+56,(vlTOPp->m_axi_rready));
	vcdp->fullBit  (c+57,(vlTOPp->m_axi_acvalid));
	vcdp->fullBit  (c+58,(vlTOPp->m_axi_acready));
	vcdp->fullQuad (c+59,(vlTOPp->m_axi_acaddr),64);
	vcdp->fullBus  (c+61,(vlTOPp->m_axi_acsnoop),4);
	vcdp->fullBus  (c+62,(0xdU),32);
	vcdp->fullBus  (c+63,(0x40U),32);
	vcdp->fullBus  (c+64,(8U),32);
	vcdp->fullBus  (c+65,(3U),32);
	vcdp->fullBus  (c+66,(vlTOPp->top__DOT__min_inv__DOT__i),8);
    }
}
