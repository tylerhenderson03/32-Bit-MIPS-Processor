global env

## Define Variables
set my_toplevel $env(TOP_LEVEL)
set netlist_path "../synthesis/outputs"
set top_netlist_file "${netlist_path}/${my_toplevel}_netlist.v"
set lef_files "$env(TECH_LEF) $env(LIB_LEF)"
set mmmc_file "viewDefinition.tcl"

## Import Design
set_db init_netlist_files $top_netlist_file
set_db init_lef_files $lef_files
set_db init_power_nets VDD
set_db init_ground_nets VSS
set_db init_mmmc_files $mmmc_file
read_mmmc $mmmc_file
read_physical -lef $lef_files
read_netlist $top_netlist_file -top $my_toplevel
init_design
gui_show
