module ripple_counter(q,clk,clr);
input clr,clk;
output[3:0]q;
wire [3:0]qbar;
jkff jk0(1,1,clk,clr,q[0],qbar[0]);
jkff jk1(1,1,q[0],clr,q[1],qbar[1]);
jkff jk2(1,1,q[1],clr,q[2],qbar[2]);
jkff jk3(1,1,q[2],clr,q[3],qbar[3]);
endmodule
