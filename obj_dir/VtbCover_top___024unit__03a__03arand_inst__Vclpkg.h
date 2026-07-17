// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbCover_top.h for the primary calling header

#ifndef VERILATED_VTBCOVER_TOP___024UNIT__03A__03ARAND_INST__VCLPKG_H_
#define VERILATED_VTBCOVER_TOP___024UNIT__03A__03ARAND_INST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VtbCover_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbCover_top___024unit__03a__03arand_inst__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VtbCover_top__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[44]{};

    // CONSTRUCTORS
    VtbCover_top___024unit__03a__03arand_inst__Vclpkg();
    ~VtbCover_top___024unit__03a__03arand_inst__Vclpkg();
    void ctor(VtbCover_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VtbCover_top___024unit__03a__03arand_inst__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class VtbCover_top__Syms;

class VtbCover_top___024unit__03a__03arand_inst : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ __PVT__opcode;
    CData/*4:0*/ __PVT__rs;
    CData/*4:0*/ __PVT__rt;
    CData/*4:0*/ __PVT__rd;
    CData/*4:0*/ __PVT__shamt;
    CData/*5:0*/ __PVT__funct;
    SData/*15:0*/ __PVT__immediate;
    IData/*25:0*/ __PVT__addr;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::rand_inst"; }
    VlClass* clone() const { return new VtbCover_top___024unit__03a__03arand_inst(*this); }
    void __VnoInFunc___VBasicRand(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VtbCover_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_addr_range_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_funct_valid_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_i_type_name(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_i_type_name__Vfuncrtn);
    void __VnoInFunc_get_instruction_name(VtbCover_top__Syms* __restrict vlSymsp, CData/*2:0*/ actual_format, std::string &get_instruction_name__Vfuncrtn);
    void __VnoInFunc_get_j_type_name(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_j_type_name__Vfuncrtn);
    void __VnoInFunc_get_r_type_name(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_r_type_name__Vfuncrtn);
    void __VnoInFunc_opcode_valid_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_shamt_range_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_valid_reg_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VtbCover_top__Syms* __restrict vlSymsp);
  public:
    VtbCover_top___024unit__03a__03arand_inst() = default;
    void init(VtbCover_top__Syms* __restrict vlSymsp);
    ~VtbCover_top___024unit__03a__03arand_inst() {}
};


#endif  // guard
