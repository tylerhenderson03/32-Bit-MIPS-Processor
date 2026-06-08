'timescale 1ns/1ns

module tb_top();


initial begin
  $dumpfile("tb_top.vcd");
  $dumpvars(1, tb_top);
  $monitor("%t: clk %1b, reset %1b, req %3b, done %3b, accmodule %2b, mstate %8b, nb_interrupts %5b", $time, iDUT.clk, iDUT.reset, iDUT.req, iDUT.done, iDUT.accmodule, iDUT.mstate, iDUT.nb_interrupts);
end

endmodule: tb_top
