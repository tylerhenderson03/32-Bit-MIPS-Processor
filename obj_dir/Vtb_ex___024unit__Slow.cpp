// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ex.h for the primary calling header

#include "Vtb_ex__pch.h"

void Vtb_ex___024unit___ctor_var_reset(Vtb_ex___024unit* vlSelf);

Vtb_ex___024unit::Vtb_ex___024unit() = default;
Vtb_ex___024unit::~Vtb_ex___024unit() = default;

void Vtb_ex___024unit::ctor(Vtb_ex__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_ex___024unit___ctor_var_reset(this);
}

void Vtb_ex___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_ex___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
