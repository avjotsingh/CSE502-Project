// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::cacheMemoryBus__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cacheMemoryBus__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cacheMemoryBus__DOT__CHUNKS_LOG;
constexpr IData/*31:0*/ Vtop___024root::cacheMemoryBus__DOT__CONNECTIONS;
constexpr IData/*31:0*/ Vtop___024root::cacheMemoryBus__DOT__busChoice__DOT__LOG_INPUTS;
constexpr IData/*31:0*/ Vtop___024root::cacheMemoryBus__DOT__busChoiceReply__DOT__LOG_INPUTS;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
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
