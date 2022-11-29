module tff_4(t,clk,clr,a,abr);
input t,clk,clr;
output a,abr;

jk_4 jk(t,t,clk,clr,a,abr);

endmodule
