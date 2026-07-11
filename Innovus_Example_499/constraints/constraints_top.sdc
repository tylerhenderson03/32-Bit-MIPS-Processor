## capacitance units are pF, time units are ns
# clock with 10ns period, 50% duty cycle
create_clock -name clk -period 10 -waveform {0 5} [get_ports "clk"]
# transition delay
set_clock_transition -rise 0.5 [get_clocks "clk"]
set_clock_transition -fall 0.5 [get_clocks "clk"]
# set uncertainty due to clock skew and jitter, for both setup and hold, but can specify separately
set_clock_uncertainty 0.15 [get_ports "clk"]
# input and output delays used for timing slack calculations
set_input_delay -max 2.0 [get_ports "rst"] -clock [get_clocks "clk"]
set_output_delay -max 4.0 [get_ports "count"] -clock [get_clocks "clk"]
# set output capacitive load
set_load -pin_load 0.1 [all_outputs]
