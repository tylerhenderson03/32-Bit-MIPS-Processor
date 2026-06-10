// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ex.h for the primary calling header

#ifndef VERILATED_VTB_EX___024UNIT_H_
#define VERILATED_VTB_EX___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ex__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ex___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_ex__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_ex___024unit();
    ~Vtb_ex___024unit();
    void ctor(Vtb_ex__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_ex___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
