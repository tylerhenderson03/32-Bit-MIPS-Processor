# capacitance units are fF, time units are ps
global env

## Setting .tcl variables
set my_toplevel $env(TOP_LEVEL)

## Read the chosen libraies, slow used here
read_libs $env(SLOW_LIB)
## Read physical files, enables physical layout estimation (PLE) mode
# provides better power and timing estimations than default wireload model (WLM), can be turned off for faster synthesis
read_physical -lef "$env(TECH_LEF) $env(LIB_LEF)"
#set_db cap_table_file $env(CAP_TABLE)
## Read design
read_hdl $env(VERILOG_FILES)

## Elaborate the design (consturcts design hierarchy and connects the signals)
elaborate
# Search log file for this command to check for unresolved design issues
check_design -unresolved
# Report physical layout estimation (PLE) results
report_ple

## Read the constraints
read_sdc ../constraints/constraints_top.sdc
# Search log file for this command to check for constraint issues
check_timing_intent -verbose

## Set synthesis effort levels ("low", "medium", or "high")
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort high

## Read floorplan if available, if used, remove -create_floorplan from syn_generic command
#read_def floorplan.def

## Perform synthesis
# choose -physical to enable PLE, slower but more accurate parasitic estimations
#syn_generic -physical -create_floorplan
syn_generic
#syn_map -physical
syn_map
syn_opt

## Generate reports
report_ple > reports/report_ple.rpt
report_timing > reports/report_timing.rpt
report_power > reports/report_power.rpt
report_area > reports/report_area.rpt
report_qor > reports/report_qor.rpt

## Generate outputs
write_netlist > outputs/${my_toplevel}_netlist.v
write_sdc > outputs/${my_toplevel}_sdc.sdc
write_sdf -timescale ns -nonegchecks -recrem split -edges check_edge -setuphold split > outputs/delays.sdf
write_db -to_file outputs/${my_toplevel}_syn.db
write_do_lec -revised_design outputs/${my_toplevel}_netlist.v -logfile lec.log > lec_script.tcl

## Show gui
gui_show
