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

tee -o reports/stat_nodiv.txt stat
tee -o reports/critical_path_nodiv.txt ltp
write_verilog -noattr reports/netlist_nodiv.v