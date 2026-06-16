// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wb.h for the primary calling header

#include "Vtb_wb__pch.h"

void Vtb_wb___024unit___ctor_var_reset(Vtb_wb___024unit* vlSelf);

Vtb_wb___024unit::Vtb_wb___024unit() = default;
Vtb_wb___024unit::~Vtb_wb___024unit() = default;

void Vtb_wb___024unit::ctor(Vtb_wb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_wb___024unit___ctor_var_reset(this);
}

void Vtb_wb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_wb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
