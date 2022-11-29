module jk_flop(q,qbar,j,k,clock,clear);
input j,k,clock,clear;
output q ,qbar;
wire a,b,y,ybar,cbar,c,d;
not(cbar,clock);
nand(a,qbar,j,clock,clear);
nand(b,q,k,clock);
nand(y,a,ybar);
nand(ybar,y,clear,b);
nand(c,y,cbar);
nand(d,cbar,ybar);
nand(q,c,qbar);
nand(qbar,q,clear,d);
endmodule


module T_flop(q,qbar,t,clock,clear);
input  t,clock,clear;
output q,qbar;
jk_flop fl(q,qbar,t,t,clock,clear);
endmodule


module updown_counter(q,qbar,m,clear);
input m,clear;
output [2:0]q,qbar;
wire t1,t2,t3,s;
xor(t1,m,q[0]);
and(t2,~m,q[0],q[1]);
and(t3,m,~q[0],~q[1]);
or(s,t2,t3);
T_flop fl1(q[0],qbar[0],1,clock,clear);
T_flop fl2(q[1],qbar[1],t1,clock,clear);
T_flop fl3(q[2],qbar[2],s,clock,clear);
endmodule
