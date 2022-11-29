module up_4(m,clk,clr,a,abr);
input m,clk,clr;
output[2:0]a,abr;
wire to,t1,t2;

assign t0=1;

xor(t1,m,a[0]);

wire c,d;
and(c,~m,a[0],a[1]);
and(d,m,~a[0],~a[1]);
or(t2,c,d);

tff_4 tf0(t0,clk,clr,a[0],abr[0]);
tff_4 tf1(t1,clk,clr,a[1],abr[1]);
tff_4 tff2(t2,clk,clr,a[2],abr[2]);

endmodule
