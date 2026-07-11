#!/bin/sh
## Cadence xrun setup 
## M.L. Johnston Feb 2026

set path = ($path /usr/local/apps/bin)

## PATHS FOR CADENCE DIGITAL VLSI CAD TOOLS 
setenv CDS_LIC_FILE 5280@linlic8.engr.oregonstate.edu
setenv CDS_AUTO_64BIT ALL

# Cadence XCelium HDL Simulation
setenv XCELIUM_HOME /usr/local/apps/cadence/XCELIUM/current
setenv PATH $XCELIUM_HOME/tools/bin:$PATH
setenv PATH $XCELIUM_HOME/tools/dfII/bin:$PATH

# Cadence Genus Digital Synthesis
setenv DDI_HOME /usr/local/apps/cadence/DDI/DDI251
setenv PATH $DDI_HOME/bin:$PATH
setenv GENUS_HOME /usr/local/apps/cadence/DDI/DDI251/GENUS251
setenv PATH $GENUS_HOME/tools.lnx86/bin:$PATH

# Cadence Innovus Placement & Routing
setenv INNOVUS_HOME /usr/local/apps/cadence/DDI/DDI251/INNOVUS251
setenv PATH $INNOVUS_HOME/tools.lnx86/bin:$PATH
setenv PATH $INNOVUS_HOME/tools/dfII/bin:$PATH
