// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id.h for the primary calling header

#include "Vtb_id__pch.h"

void Vtb_id___024unit___ctor_var_reset(Vtb_id___024unit* vlSelf);

Vtb_id___024unit::Vtb_id___024unit() = default;
Vtb_id___024unit::~Vtb_id___024unit() = default;

void Vtb_id___024unit::ctor(Vtb_id__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_id___024unit___ctor_var_reset(this);
}

void Vtb_id___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_id___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
