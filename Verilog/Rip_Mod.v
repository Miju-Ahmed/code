module mod3(j,k,clk,clr,q,qbar);
input j,k,clk,clr;
output[3:0]q,qbar;
assign j=1;
assign k=1;
jkff jk0(j,k,clk,clr,q[0],qbar[0]);
jkff jk1(~q[3],k,q[0],clr,q[1],qbar[1]);
jkff jk2(j,k,q[1],clr,q[2],qbar[2]);
jkff jk3((q[1]&q[2]),k,q[0],clr,q[3],qbar[3]);
endmodule