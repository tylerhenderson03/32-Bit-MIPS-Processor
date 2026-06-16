// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wb.h for the primary calling header

#include "Vtb_wb__pch.h"

void Vtb_wb___024root___ctor_var_reset(Vtb_wb___024root* vlSelf);

Vtb_wb___024root::Vtb_wb___024root(Vtb_wb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_wb___024root___ctor_var_reset(this);
}

void Vtb_wb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_wb___024root::~Vtb_wb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
