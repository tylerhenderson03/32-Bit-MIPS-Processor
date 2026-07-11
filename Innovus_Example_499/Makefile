# Makefile for TSMC 180nm digital synthesis design flow using Cadence Genus and Innovus
# by Calder Wilson, Sept. 2023
# Updated: M.L. Johnston, Feb. 2025
# Before running, source xrun.cshrc that contains path to genus and innovus tools

# make <options>:
# 	all: runs synthesis and pnr, default command
# 	synthesis: runs synthesis only
# 	sim: runs simulation of input verilog design
# 	sim_rtl: runs RTL simulation after synthesis
# 	clean: removes all synthesis files


PROJECT_HOME    = ${CURDIR}
# For every project, user should update the following:
TOP_LEVEL       = counter_4b
VERILOG_FILES 	= $(PROJECT_HOME)/rtl/counter_4b.v
# Update if doing simulation, not used for pnr:
VERILOG_TB		= $(PROJECT_HOME)/simulation/tb_counter.v

# CMOS technology and standard cell libraries are defined here
IP_HOME     	= /nfs/guille/johnston/ece499/pnr/sky130_scl_9T_0.0.5a/sky130_scl_9T_0.0.5
VERILOG_LIB 	= $(IP_HOME)/verilog/sky130_scl_9T.v
SLOW_LIB    	= $(IP_HOME)/lib/sky130_ss_1.62_125_nldm.lib
FAST_LIB    	= $(IP_HOME)/lib/sky130_ff_1.98_0_nldm.lib
LIB_LEF     	= $(IP_HOME)/lef/sky130_scl_9T.lef
LIB_CDL     	= $(IP_HOME)/cdl/sky130_scl_9T.cdl
TECH_LEF    	= $(IP_HOME)/lef/sky130_scl_9T.tlef
CAP_TABLE	= /nfs/guille/johnston/ece499/pnr/sky130.captable
MAP_FILE	= $(IP_HOME)/gds/sky130_stream.mapFile




# SYNTHESIS - Genus
# User Editable Input files:
#	constrains/constraints_top.sdc		set timing constraints, clock freq, slack, etc.
# 	synthesis/genus_script.tcl		synthesis flow, likely won't change
# Output files:
#	synthesis/outputs			verilog netlist, .sdc, .sdf
#	synthesis/reports			timing, area, power reports
synthesis/outputs/$(TOP_LEVEL)_netlist.v: $(VERILOG_FILES) synthesis/genus_script.tcl constraints/constraints_top.sdc
	@echo "##################################################################"
	@echo "#     Synthesis"
	@echo "##################################################################"
	# cd only changes directory for commands connected by semicolon
	cd synthesis; \
	TOP_LEVEL=$(TOP_LEVEL) SLOW_LIB=$(SLOW_LIB) TECH_LEF=$(TECH_LEF) LIB_LEF=$(LIB_LEF) CAP_TABLE=$(CAP_TABLE) VERILOG_FILES=$(VERILOG_FILES) \
	TOP_LEVEL=$(TOP_LEVEL) SLOW_LIB=$(SLOW_LIB) TECH_LEF=$(TECH_LEF) LIB_LEF=$(LIB_LEF) VERILOG_FILES=$(VERILOG_FILES) \
	genus -f genus_script.tcl; \
	#lec -XL -nogui -color -64 -dofile lec_script.tcl



# Run to only do synthesis, output is gate level verilog netlist
synthesis: synthesis/outputs/$(TOP_LEVEL)_netlist.v
	@echo "Synthesis Complete"


## ORIGINAL VERILOG SIMULATION
sim: $(VERILOG_FILES) $(VERILOG_TB)
	@echo "##################################################################"
	@echo "#    Starting Simulation"
	@echo "##################################################################"
	cd simulation; \
	xrun $(VERILOG_FILES) $(VERILOG_TB) -access +rwc -gui &


## POST-SYNTHESIS RTL SIMULATION
sim_rtl: synthesis/outputs/$(TOP_LEVEL)_netlist.v $(VERILOG_TB) 
	@echo "##################################################################"
	@echo "#    Doing the gate level simulation"
	@echo "##################################################################"
	cd simulation; \
	xrun  -timescale 1ns/10ps ../synthesis/outputs/$(TOP_LEVEL)_netlist.v $(VERILOG_TB) -v $(VERILOG_LIB) -access +rwc -gui &

# PLACE & ROUTE INITIALIZATION
pnr_init: synthesis/outputs/$(TOP_LEVEL)_netlist.v pnr/innovus_init.tcl
	@echo "##################################################################"
	@echo "#    Innovus initialization"
	@echo "##################################################################"
	@mkdir pnr/reports
	cd pnr; \
	PROJECT_HOME=$(PROJECT_HOME) TOP_LEVEL=$(TOP_LEVEL) TECH_LEF=$(TECH_LEF) LIB_LEF=$(LIB_LEF) SLOW_LIB=$(SLOW_LIB) FAST_LIB=$(FAST_LIB) CAP_TABLE=$(CAP_TABLE) MAP_FILE=$(MAP_FILE) \
	innovus -stylus -files innovus_init.tcl


clean:
	rm -rf $(PROJECT_HOME)/synthesis/outputs
	rm -rf $(PROJECT_HOME)/synthesis/*fv*
	rm -rf $(PROJECT_HOME)/synthesis/reports
	rm -rf $(PROJECT_HOME)/synthesis/noneq*
	rm -rf $(PROJECT_HOME)/synthesis/reports
	rm -f $(PROJECT_HOME)/synthesis/*.log*
	rm -f $(PROJECT_HOME)/synthesis/*.cmd*
	rm -f $(PROJECT_HOME)/synthesis/*.lec*
		rm -f $(PROJECT_HOME)/pnr/*.log*
	rm -f $(PROJECT_HOME)/pnr/*.cmd*
	rm -f $(PROJECT_HOME)/pnr/*.rpt*
	rm -rf $(PROJECT_HOME)/pnr/outputs
	rm -rf $(PROJECT_HOME)/pnr/timingReports
	rm -rf $(PROJECT_HOME)/pnr/reports
	rm -rf $(PROJECT_HOME)/pnr/innovus.db
	rm -f $(PROJECT_HOME)/pnr/*lec*
	rm -rf $(PROJECT_HOME)/pnr/fv
	
# If you want to re-run pnr but not synthesis
pnr_clean:
	rm -f $(PROJECT_HOME)/pnr/*.log*
	rm -f $(PROJECT_HOME)/pnr/*.cmd*
	rm -f $(PROJECT_HOME)/pnr/*.rpt*
	rm -rf $(PROJECT_HOME)/pnr/outputs
	rm -rf $(PROJECT_HOME)/pnr/timingReports
	rm -rf $(PROJECT_HOME)/pnr/reports
	rm -rf $(PROJECT_HOME)/pnr/innovus.db
	rm -f $(PROJECT_HOME)/pnr/*lec*
	rm -rf $(PROJECT_HOME)/pnr/fv


