// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbCover_top.h for the primary calling header

#ifndef VERILATED_VTBCOVER_TOP___024UNIT__03A__03ACOVER_TOP__VCLPKG_H_
#define VERILATED_VTBCOVER_TOP___024UNIT__03A__03ACOVER_TOP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VtbCover_top_std.h"


class VtbCover_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbCover_top___024unit__03a__03acover_top__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT____Vint;

    // INTERNAL VARIABLES
    VtbCover_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VtbCover_top___024unit__03a__03acover_top__Vclpkg();
    ~VtbCover_top___024unit__03a__03acover_top__Vclpkg();
    void ctor(VtbCover_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VtbCover_top___024unit__03a__03acover_top__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_coverage(VtbCover_top__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn);
};


class VtbCover_top__Syms;

class VtbCover_top___024unit__03a__03acover_top : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VtbCover_top_vl_covergroup_options_t__struct__0 __PVT__option;
    VtbCover_top_vl_covergroup_type_options_t__struct__0 __PVT__type_option;
    VlCoverpoint __PVT____Vcp_opcode_cover;
    VlCoverpoint __PVT____Vcp_funct_cover;
    VlCoverpoint __PVT____Vcp_wb_cover;
    VlCoverpoint __PVT____Vcp_ex_ctrl0;
    VlCoverpoint __PVT____Vcp_ex_ctrl1;
    VlCoverpoint __PVT____Vcp_ex_ctrl2;
    VlCoverpoint __PVT____Vcp_ex_ctrl3;
    VlCoverpoint __PVT____Vcp_ex_ctrl4;
    VlCoverpoint __PVT____Vcp_mem_ctrl0;
    VlCoverpoint __PVT____Vcp_mem_ctrl1;
    VlCoverpoint __PVT____Vcp_mem_ctrl2;
    VlCoverpoint __PVT____Vcp_mem_ctrl3;
    VlCoverpoint __PVT____Vcp_wb_ctrl;
    VlCoverpoint __PVT____Vcp_wb_ctrl1;
    VlCoverpoint __PVT____Vcp_wb_ctrl2;
    VlCoverpoint __PVT____Vcp_wb_ctrl3;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::cover_top"; }
    VlClass* clone() const { return new VtbCover_top___024unit__03a__03acover_top(*this); }
    void __VnoInFunc_get_inst_coverage(VtbCover_top__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_sample(VtbCover_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_inst_name(VtbCover_top__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_start(VtbCover_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_stop(VtbCover_top__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(VtbCover_top__Syms* __restrict vlSymsp);
  public:
    VtbCover_top___024unit__03a__03acover_top() = default;
    void init(VtbCover_top__Syms* __restrict vlSymsp);
    ~VtbCover_top___024unit__03a__03acover_top() {}
};


#endif  // guard
