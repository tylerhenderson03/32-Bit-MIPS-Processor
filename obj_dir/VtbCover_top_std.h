// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbCover_top.h for the primary calling header

#ifndef VERILATED_VTBCOVER_TOP_STD_H_
#define VERILATED_VTBCOVER_TOP_STD_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VtbCover_top_std.h"


class VtbCover_top__Syms;
struct VtbCover_top_vl_covergroup_options_t__struct__0 {
    std::string __PVT__name;
    IData/*31:0*/ __PVT__weight;
    IData/*31:0*/ __PVT__goal;
    std::string __PVT__comment;
    IData/*31:0*/ __PVT__at_least;
    IData/*31:0*/ __PVT__auto_bin_max;
    IData/*31:0*/ __PVT__cross_num_print_missing;
    CData/*0:0*/ __PVT__cross_retain_auto_bins;
    CData/*0:0*/ __PVT__detect_overlap;
    CData/*0:0*/ __PVT__per_instance;
    CData/*0:0*/ __PVT__get_inst_coverage;

    bool operator==(const VtbCover_top_vl_covergroup_options_t__struct__0& rhs) const {
        return __PVT__name == rhs.__PVT__name
            && __PVT__weight == rhs.__PVT__weight
            && __PVT__goal == rhs.__PVT__goal
            && __PVT__comment == rhs.__PVT__comment
            && __PVT__at_least == rhs.__PVT__at_least
            && __PVT__auto_bin_max == rhs.__PVT__auto_bin_max
            && __PVT__cross_num_print_missing == rhs.__PVT__cross_num_print_missing
            && __PVT__cross_retain_auto_bins == rhs.__PVT__cross_retain_auto_bins
            && __PVT__detect_overlap == rhs.__PVT__detect_overlap
            && __PVT__per_instance == rhs.__PVT__per_instance
            && __PVT__get_inst_coverage == rhs.__PVT__get_inst_coverage;
    }
    bool operator!=(const VtbCover_top_vl_covergroup_options_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VtbCover_top_vl_covergroup_options_t__struct__0& rhs) const {
        if (__PVT__name < rhs.__PVT__name) return true;
        if (rhs.__PVT__name < __PVT__name) return false;
        if (__PVT__weight < rhs.__PVT__weight) return true;
        if (rhs.__PVT__weight < __PVT__weight) return false;
        if (__PVT__goal < rhs.__PVT__goal) return true;
        if (rhs.__PVT__goal < __PVT__goal) return false;
        if (__PVT__comment < rhs.__PVT__comment) return true;
        if (rhs.__PVT__comment < __PVT__comment) return false;
        if (__PVT__at_least < rhs.__PVT__at_least) return true;
        if (rhs.__PVT__at_least < __PVT__at_least) return false;
        if (__PVT__auto_bin_max < rhs.__PVT__auto_bin_max) return true;
        if (rhs.__PVT__auto_bin_max < __PVT__auto_bin_max) return false;
        if (__PVT__cross_num_print_missing < rhs.__PVT__cross_num_print_missing) return true;
        if (rhs.__PVT__cross_num_print_missing < __PVT__cross_num_print_missing) return false;
        if (__PVT__cross_retain_auto_bins < rhs.__PVT__cross_retain_auto_bins) return true;
        if (rhs.__PVT__cross_retain_auto_bins < __PVT__cross_retain_auto_bins) return false;
        if (__PVT__detect_overlap < rhs.__PVT__detect_overlap) return true;
        if (rhs.__PVT__detect_overlap < __PVT__detect_overlap) return false;
        if (__PVT__per_instance < rhs.__PVT__per_instance) return true;
        if (rhs.__PVT__per_instance < __PVT__per_instance) return false;
        if (__PVT__get_inst_coverage < rhs.__PVT__get_inst_coverage) return true;
        if (rhs.__PVT__get_inst_coverage < __PVT__get_inst_coverage) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VtbCover_top_vl_covergroup_options_t__struct__0> : public std::true_type {};
struct VtbCover_top_vl_covergroup_type_options_t__struct__0 {
    IData/*31:0*/ __PVT__weight;
    IData/*31:0*/ __PVT__goal;
    std::string __PVT__comment;
    CData/*0:0*/ __PVT__strobe;
    CData/*0:0*/ __PVT__merge_instances;
    CData/*0:0*/ __PVT__distribute_first;
    double __PVT__real_interval;

    bool operator==(const VtbCover_top_vl_covergroup_type_options_t__struct__0& rhs) const {
        return __PVT__weight == rhs.__PVT__weight
            && __PVT__goal == rhs.__PVT__goal
            && __PVT__comment == rhs.__PVT__comment
            && __PVT__strobe == rhs.__PVT__strobe
            && __PVT__merge_instances == rhs.__PVT__merge_instances
            && __PVT__distribute_first == rhs.__PVT__distribute_first
            && __PVT__real_interval == rhs.__PVT__real_interval;
    }
    bool operator!=(const VtbCover_top_vl_covergroup_type_options_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VtbCover_top_vl_covergroup_type_options_t__struct__0& rhs) const {
        if (__PVT__weight < rhs.__PVT__weight) return true;
        if (rhs.__PVT__weight < __PVT__weight) return false;
        if (__PVT__goal < rhs.__PVT__goal) return true;
        if (rhs.__PVT__goal < __PVT__goal) return false;
        if (__PVT__comment < rhs.__PVT__comment) return true;
        if (rhs.__PVT__comment < __PVT__comment) return false;
        if (__PVT__strobe < rhs.__PVT__strobe) return true;
        if (rhs.__PVT__strobe < __PVT__strobe) return false;
        if (__PVT__merge_instances < rhs.__PVT__merge_instances) return true;
        if (rhs.__PVT__merge_instances < __PVT__merge_instances) return false;
        if (__PVT__distribute_first < rhs.__PVT__distribute_first) return true;
        if (rhs.__PVT__distribute_first < __PVT__distribute_first) return false;
        if (__PVT__real_interval < rhs.__PVT__real_interval) return true;
        if (rhs.__PVT__real_interval < __PVT__real_interval) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VtbCover_top_vl_covergroup_type_options_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VtbCover_top_std final {
  public:

    // INTERNAL VARIABLES
    VtbCover_top__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[1]{};

    // CONSTRUCTORS
    VtbCover_top_std();
    ~VtbCover_top_std();
    void ctor(VtbCover_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VtbCover_top_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
