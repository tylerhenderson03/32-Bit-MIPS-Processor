# synth_nodiv.tcl
yosys -import

exec sv2v \
    rtl/alu.sv rtl/data_mem.sv rtl/ex_stage.sv \
    rtl/id_stage.sv rtl/if_stage.sv \
    rtl/mem_stage.sv rtl/wb_stage.sv rtl/top.sv \
    -w converted_nodiv/

foreach f [glob converted_nodiv/*.v] {
    read_verilog $f
}

synth -top top

# map flip-flops to sky130 cells
dfflibmap -liberty Innovus_Example_499/sky130_ss_1.62_125_nldm.lib

# map combinational logic to sky130 cells
abc -liberty Innovus_Example_499/sky130_ss_1.62_125_nldm.lib

opt_clean -purge

tee -o reports/stat_nodiv.txt stat

# -noexpr forces gate instantiations instead of assign expressions
write_verilog -noattr -noexpr reports/netlist_nodiv.v

tee -o reports/stat_nodiv.txt stat
tee -o reports/critical_path_nodiv.txt ltp
write_verilog -noattr reports/netlist_nodiv.v