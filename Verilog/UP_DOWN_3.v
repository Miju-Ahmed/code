module ud_3(m,clk,clr,q,qbar);
input clk,clr,m;
output[2:0]q,qbar;
wire t0,t1,t2;

assign t0=1;
tff_3 tff0(t0,clk,clr,q[0],qbar[0]);

xor(t1,m,q[0]);
tff_3 tff1(t1,clk,clr,q[1],qbar[1]);

wire a,b;
and(a,~m,q[0],q[1]);
and(b,m,~q[0],~q[1]);
or(t2,a,b);
tff_3 tff3(t2,clk,clr,q[2],qbar[2]);

endmodule
