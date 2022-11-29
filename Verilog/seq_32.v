module seq_32(clk,clr,a,abar,t);
input clk,clr,t;
output[2:0]a,abar;

tff_3 tf0(~a[1],clk,clr,a[0],abar[0]);
tff_3 tf1(a[0],clk,clr,a[1],abar[1]);
tff_3 tf2(a[1],clk,clr,a[2],abar[2]);

endmodule
