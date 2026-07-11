# 1. Read the SkyWater 130nm shared cell library file
read_liberty ./Innovus_Example_499/sky130_ss_1.62_125_nldm.lib

# 2. Read the gate-level structural netlist from your reports folder
read_verilog ./reports/netlist.v

# 3. Link the design to your top module
link_design top

# 4. Read your SDC constraints file
read_sdc ./Innovus/constraints/constraints.sdc

# 5. Generate complete timing reports
report_checks -path_delay max -format full_clock_expanded
report_wns
report_tns
report_timing -max_slew -max_capacitance -max_fanout
