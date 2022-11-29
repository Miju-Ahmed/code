module mod_4(clk,clr,a,abr);
input clk,clr;
output[3:0]a,abr;

wire j,k;
assign j=1;
assign k=1;

jk_4 jk0(j,k,clk,clr,a[0],abr[0]);
jk_4 jk1(~a[3],k,a[0],clr,a[1],abr[1]);
jk_4 jk2(j,k,a[1],clr,a[2],abr[2]);
jk_4 jk3((a[1]&a[2]),k,a[0],clr,a[3],abr[3]);

endmodule
