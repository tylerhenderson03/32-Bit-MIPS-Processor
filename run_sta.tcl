# 1. Read the SkyWater 130nm shared cell library file
read_liberty ./Innovus_Example_499/sky130_ss_1.62_125_nldm.lib

# 2. Read the gate-level structural netlist from your reports folder
read_verilog ./reports/netlist_nodiv.v

# 3. Link the design to your top module
link_design top

# 4. Read your SDC constraints file
read_sdc ./Innovus_Example_499/constraints/constraints_top.sdc

# 5. Generate complete timing reports
report_checks -path_delay max -format full_clock_expanded
report_wns
report_tns
# 7. Dump the worst 10 Setup (Max) violations into a clean text file
report_checks -path_delay max -format full_clock_expanded -group_count 10 > setup_violations.rpt

# 8. Dump the worst 10 Hold (Min) violations into a clean text file
report_checks -path_delay min -format full_clock_expanded -group_count 10 > hold_violations.rpt
