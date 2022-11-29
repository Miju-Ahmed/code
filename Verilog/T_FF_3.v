module tff_3(t,clk,clr,q,qbar);
input t,clk,clr;
output q,qbar;

jkff_3 jk(t,t,clk,clr,q,qbar);

endmodule
