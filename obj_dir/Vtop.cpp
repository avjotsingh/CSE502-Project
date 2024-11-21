// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vtop::__Vtable1_top__DOT__test2_out[8],7,0);

//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, Vtop___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at top.sv:91
    VL_WRITEF("Initializing top, entry point = 0x%x\n",
	      64,vlTOPp->entry);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__top__DOT__test_in,7,0);
    VL_SIG8(__Vdly__top__DOT__test_start,0,0);
    VL_SIG8(__Vdly__top__DOT__test2_in,2,0);
    //char	__VpadToAlign27[5];
    VL_SIG64(__Vdly__top__DOT__pc,63,0);
    // Body
    __Vdly__top__DOT__pc = vlTOPp->top__DOT__pc;
    __Vdly__top__DOT__test_start = vlTOPp->top__DOT__test_start;
    __Vdly__top__DOT__test_in = vlTOPp->top__DOT__test_in;
    __Vdly__top__DOT__test2_in = vlTOPp->top__DOT__test2_in;
    // ALWAYS at top.sv:72
    if (VL_LIKELY(vlTOPp->reset)) {
	__Vdly__top__DOT__pc = vlTOPp->entry;
	__Vdly__top__DOT__test_in = 0U;
	__Vdly__top__DOT__test_start = 0U;
	__Vdly__top__DOT__test2_in = 0U;
    } else {
	VL_WRITEF("min_inv: in is %b, out is %b\n",
		  3,vlTOPp->top__DOT__test2_in,8,(IData)(vlTOPp->top__DOT__test2_out));
	if (VL_UNLIKELY(vlTOPp->top__DOT__test_start)) {
	    VL_WRITEF("Hello World!  @ %x\n",64,vlTOPp->top__DOT__pc);
	    vl_finish("top.sv",87,"");
	} else {
	    __Vdly__top__DOT__test2_in = (7U & ((IData)(1U) 
						+ (IData)(vlTOPp->top__DOT__test2_in)));
	    if ((0xffU == (IData)(vlTOPp->top__DOT__test_in))) {
		__Vdly__top__DOT__test_start = 1U;
	    }
	    __Vdly__top__DOT__test_in = (0xffU & ((IData)(1U) 
						  + (IData)(vlTOPp->top__DOT__test_in)));
	}
    }
    vlTOPp->top__DOT__test_start = __Vdly__top__DOT__test_start;
    vlTOPp->top__DOT__pc = __Vdly__top__DOT__pc;
    vlTOPp->top__DOT__test_in = __Vdly__top__DOT__test_in;
    vlTOPp->top__DOT__test2_in = __Vdly__top__DOT__test2_in;
    // ALWAYS at minimum.sv:13
    vlTOPp->top__DOT__test_out = 0U;
    vlTOPp->top__DOT__min__DOT__i = 1U;
    while ((0U != (IData)(vlTOPp->top__DOT__min__DOT__i))) {
	vlTOPp->top__DOT__test_out = ((1U & ((IData)(vlTOPp->top__DOT__test_in) 
					     >> (IData)(vlTOPp->top__DOT__min__DOT__i)))
				       ? (IData)(vlTOPp->top__DOT__min__DOT__i)
				       : (IData)(vlTOPp->top__DOT__test_out));
	vlTOPp->top__DOT__min__DOT__i = (7U & ((IData)(1U) 
					       + (IData)(vlTOPp->top__DOT__min__DOT__i)));
    }
    // ALWAYS at minimum_inverse.sv:11
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__test2_in;
    vlTOPp->top__DOT__test2_out = vlTOPp->__Vtable1_top__DOT__test2_out
	[vlTOPp->__Vtableidx1];
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at minimum.sv:13
    vlTOPp->top__DOT__test_out = 0U;
    vlTOPp->top__DOT__min__DOT__i = 1U;
    while ((0U != (IData)(vlTOPp->top__DOT__min__DOT__i))) {
	vlTOPp->top__DOT__test_out = ((1U & ((IData)(vlTOPp->top__DOT__test_in) 
					     >> (IData)(vlTOPp->top__DOT__min__DOT__i)))
				       ? (IData)(vlTOPp->top__DOT__min__DOT__i)
				       : (IData)(vlTOPp->top__DOT__test_out));
	vlTOPp->top__DOT__min__DOT__i = (7U & ((IData)(1U) 
					       + (IData)(vlTOPp->top__DOT__min__DOT__i)));
    }
    // ALWAYS at minimum_inverse.sv:11
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__test2_in;
    vlTOPp->top__DOT__test2_out = vlTOPp->__Vtable1_top__DOT__test2_out
	[vlTOPp->__Vtableidx1];
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    hz32768timer = VL_RAND_RESET_I(1);
    entry = VL_RAND_RESET_Q(64);
    stackptr = VL_RAND_RESET_Q(64);
    satp = VL_RAND_RESET_Q(64);
    m_axi_awid = VL_RAND_RESET_I(13);
    m_axi_awaddr = VL_RAND_RESET_Q(64);
    m_axi_awlen = VL_RAND_RESET_I(8);
    m_axi_awsize = VL_RAND_RESET_I(3);
    m_axi_awburst = VL_RAND_RESET_I(2);
    m_axi_awlock = VL_RAND_RESET_I(1);
    m_axi_awcache = VL_RAND_RESET_I(4);
    m_axi_awprot = VL_RAND_RESET_I(3);
    m_axi_awvalid = VL_RAND_RESET_I(1);
    m_axi_awready = VL_RAND_RESET_I(1);
    m_axi_wdata = VL_RAND_RESET_Q(64);
    m_axi_wstrb = VL_RAND_RESET_I(8);
    m_axi_wlast = VL_RAND_RESET_I(1);
    m_axi_wvalid = VL_RAND_RESET_I(1);
    m_axi_wready = VL_RAND_RESET_I(1);
    m_axi_bid = VL_RAND_RESET_I(13);
    m_axi_bresp = VL_RAND_RESET_I(2);
    m_axi_bvalid = VL_RAND_RESET_I(1);
    m_axi_bready = VL_RAND_RESET_I(1);
    m_axi_arid = VL_RAND_RESET_I(13);
    m_axi_araddr = VL_RAND_RESET_Q(64);
    m_axi_arlen = VL_RAND_RESET_I(8);
    m_axi_arsize = VL_RAND_RESET_I(3);
    m_axi_arburst = VL_RAND_RESET_I(2);
    m_axi_arlock = VL_RAND_RESET_I(1);
    m_axi_arcache = VL_RAND_RESET_I(4);
    m_axi_arprot = VL_RAND_RESET_I(3);
    m_axi_arvalid = VL_RAND_RESET_I(1);
    m_axi_arready = VL_RAND_RESET_I(1);
    m_axi_rid = VL_RAND_RESET_I(13);
    m_axi_rdata = VL_RAND_RESET_Q(64);
    m_axi_rresp = VL_RAND_RESET_I(2);
    m_axi_rlast = VL_RAND_RESET_I(1);
    m_axi_rvalid = VL_RAND_RESET_I(1);
    m_axi_rready = VL_RAND_RESET_I(1);
    m_axi_acvalid = VL_RAND_RESET_I(1);
    m_axi_acready = VL_RAND_RESET_I(1);
    m_axi_acaddr = VL_RAND_RESET_Q(64);
    m_axi_acsnoop = VL_RAND_RESET_I(4);
    top__DOT__pc = VL_RAND_RESET_Q(64);
    top__DOT__test_in = VL_RAND_RESET_I(8);
    top__DOT__test_out = VL_RAND_RESET_I(3);
    top__DOT__test_start = VL_RAND_RESET_I(1);
    top__DOT__test2_in = VL_RAND_RESET_I(3);
    top__DOT__test2_out = VL_RAND_RESET_I(8);
    top__DOT__min__DOT__i = VL_RAND_RESET_I(3);
    top__DOT__min_inv__DOT__i = VL_RAND_RESET_I(8);
    __Vtableidx1 = VL_RAND_RESET_I(3);
    __Vtable1_top__DOT__test2_out[0] = 1U;
    __Vtable1_top__DOT__test2_out[1] = 2U;
    __Vtable1_top__DOT__test2_out[2] = 4U;
    __Vtable1_top__DOT__test2_out[3] = 8U;
    __Vtable1_top__DOT__test2_out[4] = 0x10U;
    __Vtable1_top__DOT__test2_out[5] = 0x20U;
    __Vtable1_top__DOT__test2_out[6] = 0x40U;
    __Vtable1_top__DOT__test2_out[7] = 0x80U;
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vtop::_configure_coverage(Vtop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_configure_coverage\n"); );
}
