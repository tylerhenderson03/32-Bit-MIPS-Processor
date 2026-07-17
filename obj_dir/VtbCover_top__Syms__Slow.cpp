// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VtbCover_top__pch.h"

VtbCover_top__Syms::VtbCover_top__Syms(VerilatedContext* contextp, const char* namep, VtbCover_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(676);
    // Setup sub module instances
    TOP____024unit__03a__03acover_top__Vclpkg.ctor(this, "$unit::cover_top__Vclpkg");
    TOP____024unit__03a__03arand_inst__Vclpkg.ctor(this, "$unit::rand_inst__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    TOP__std.ctor(this, "std");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03acover_top__Vclpkg = &TOP____024unit__03a__03acover_top__Vclpkg;
    TOP.__024unit__03a__03arand_inst__Vclpkg = &TOP____024unit__03a__03arand_inst__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__std = &TOP__std;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03acover_top__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03arand_inst__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

VtbCover_top__Syms::~VtbCover_top__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std.dtor();
    TOP____024unit.dtor();
    TOP____024unit__03a__03arand_inst__Vclpkg.dtor();
    TOP____024unit__03a__03acover_top__Vclpkg.dtor();
}

void VtbCover_top__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VtbCover_top__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VtbCover_top__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
