// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbCover_top.h for the primary calling header

#ifndef VERILATED_VTBCOVER_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTBCOVER_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VtbCover_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbCover_top_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VtbCover_top__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[14]{};

    // CONSTRUCTORS
    VtbCover_top_std__03a__03asemaphore__Vclpkg();
    ~VtbCover_top_std__03a__03asemaphore__Vclpkg();
    void ctor(VtbCover_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VtbCover_top_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class VtbCover_top__Syms;

class VtbCover_top_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new VtbCover_top_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VtbCover_top__Syms* __restrict vlSymsp);
  public:
    VtbCover_top_std__03a__03asemaphore() = default;
    void init(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~VtbCover_top_std__03a__03asemaphore() {}
};


#endif  // guard
