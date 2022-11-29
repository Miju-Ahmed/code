module tff(t,clk,clr,q,qbar);
input clk,clr,t;
output q,qbar;
jkff jk0(t,t,clk,clr,q,qbar);
endmodule
