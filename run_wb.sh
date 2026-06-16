verilator --binary -j 0 -Wall --trace --top tb_wb \
    -Wno-SYNCASYNCNET \
    wb_stage.sv tb_wb.sv

./obj_dir/Vtb_wb

surfer tb_wb.vcd
