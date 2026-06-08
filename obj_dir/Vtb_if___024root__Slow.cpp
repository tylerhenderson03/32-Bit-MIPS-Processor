// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_if.h for the primary calling header

#include "Vtb_if__pch.h"

void Vtb_if___024root___ctor_var_reset(Vtb_if___024root* vlSelf);

Vtb_if___024root::Vtb_if___024root(Vtb_if__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_if___024root___ctor_var_reset(this);
}

void Vtb_if___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_if___024root::~Vtb_if___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
