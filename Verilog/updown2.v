module updown2(m,clk,clr,q,qbar);
input m,clk,clr;
output[2:0] q,qbar;
wire t1,t2,t3,s;
xor(t1,m,q[0]);
and(t2,~m,q[0],q[1]);
and(t3,m,~q[0],~q[1]);
or(s,t2,t3);
tff2 tf0(1,clk,clr,q[0],qbar[0]);
tff2 tf1(t1,clk,clr,q[1],qbar[1]);
tff2 tf2(s,clk,clr,q[2],qbar[2]);
endmodule

