// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::top__DOT__ID_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__STRB_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__branch_predictor__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__branch_predictor__DOT__INDEX_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__branch_predictor__DOT__TAG_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__TAG_LENGTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__INDEX_LENGTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__OFFSET_LENGTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__STATE_BITS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__store_modifier__DOT__REG_LOG;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_cache__DOT__store_modifier__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__if_id__DOT__INSTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__if_id__DOT__DATA_WIDTH;


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
