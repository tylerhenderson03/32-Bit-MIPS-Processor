# synth.tcl — Yosys synthesis script for MIPS32 pipelined CPU
# Usage: yosys synth.tcl
# Run from the microprocessor/ directory

    yosys -import

# -------------------------------------------------------
# 1. Read all SystemVerilog source files
#    (testbenches excluded — only synthesizable RTL)
# -------------------------------------------------------
# convert all SV files to Verilog first
exec sv2v \
    ./rtl/alu.sv ./rtl/data_mem.sv ./rtl/ex_stage.sv \
    ./rtl/id_stage.sv ./rtl/if_stage.sv \
    ./rtl/mem_stage.sv ./rtl/wb_stage.sv ./rtl/top.sv \
    -w converted/

    #./rtl/alu.sv ./rtl/data_mem.sv ./rtl/ex_stage.sv ./rtl/fwd_unit.sv \
    #./rtl/hazard_detection.sv ./rtl/id_stage.sv ./rtl/if_stage.sv \
    #./rtl/mem_stage.sv ./rtl/wb_stage.sv ./rtl/top.sv \
    #-w converted/

# read converted files
foreach f [glob converted/*.v] {
    read_verilog $f
}

# -------------------------------------------------------
# 2. Elaborate and synthesize targeting generic cells
# -------------------------------------------------------
    synth -top top

# map to sky130 standard cells
    dfflibmap -liberty Innovus_Example_499/sky130_ss_1.62_125_nldm.lib
    abc -liberty Innovus_Example_499/sky130_ss_1.62_125_nldm.lib

# clean up
    opt_clean -purge

# write gate-level netlist
    write_verilog -noattr -noexpr reports/netlist.v

# -------------------------------------------------------
# 3. Reports
# -------------------------------------------------------

# Gate count, flip-flop count, estimated area
    tee -o reports/stat.txt stat

# Longest topological path — critical path depth in logic levels
    tee -o reports/critical_path.txt ltp

# Write synthesized netlist for use with OpenSTA later
    write_verilog -noattr reports/netlist.v

    puts ""
    puts "====================================="
    puts " Synthesis complete."
    puts " Reports written to reports/"
    puts "====================================="