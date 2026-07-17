// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTBCOVER_TOP__SYMS_H_
#define VERILATED_VTBCOVER_TOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VtbCover_top.h"

// INCLUDE MODULE CLASSES
#include "VtbCover_top___024root.h"
#include "VtbCover_top_std.h"
#include "VtbCover_top___024unit.h"
#include "VtbCover_top_std__03a__03asemaphore__Vclpkg.h"
#include "VtbCover_top_std__03a__03aprocess__Vclpkg.h"
#include "VtbCover_top___024unit__03a__03acover_top__Vclpkg.h"
#include "VtbCover_top___024unit__03a__03arand_inst__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VtbCover_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VtbCover_top* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VtbCover_top___024root         TOP;
    VtbCover_top___024unit__03a__03acover_top__Vclpkg TOP____024unit__03a__03acover_top__Vclpkg;
    VtbCover_top___024unit__03a__03arand_inst__Vclpkg TOP____024unit__03a__03arand_inst__Vclpkg;
    VtbCover_top___024unit         TOP____024unit;
    VtbCover_top_std               TOP__std;
    VtbCover_top_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VtbCover_top_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // COVERAGE
    uint32_t __Vcoverage[2230];

    // CONSTRUCTORS
    VtbCover_top__Syms(VerilatedContext* contextp, const char* namep, VtbCover_top* modelp);
    ~VtbCover_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
