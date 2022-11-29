module tff2(t,clk,clr,q,qbar);
input t,clk,clr;
output q,qbar;
jk2 jk(t,t,clk,clr,q,qbar);
endmodule
