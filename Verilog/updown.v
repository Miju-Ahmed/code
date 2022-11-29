module updown(q,qbar,m,clr,clk);
input m,clr,clk;
output[2:0]q,qbar;
wire t0,t1,t2,a,b,c;
assign t0=1;
xor(t1,m,q);
and(a,m,~q[0],~q[1]);
and(b,~m,q[0],q[1]);
or(t2,a,b);
tff tf0(t0,clk,clr,q[0],qbar[0]);
tff tf1(t1,clk,clr,q[1],qbar[1]);
tff tf2(t2,clk,clr,q[2],qbar[2]);
endmodule

