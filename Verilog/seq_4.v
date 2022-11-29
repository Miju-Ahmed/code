module s_4(clk,clr,a,abr);
input clk,clr;
output[3:0]a,abr;

tff_4 tf0(((~a[1]&~a[0])|(~a[1]&~a[2])|(a[1]&a[2]&a[3])),clk,clr,a[0],abr[0]);
tff_4 tf1((a[3]|(a[1]&a[2])),clk,clr,a[1],abr[1]);
tff_4 tf2((~a[1]|(~a[2]&~a[3])|(a[2]&a[3])),clk,clr,a[2],abr[2]);
tff_4 tf3(((~a[3]&~a[2])|(a[1]&a[2])|(~a[1]&~a[0])|(~a[1]&~a[2])),clk,clr,a[3],abr[3]);

endmodule
