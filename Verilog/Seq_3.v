module seq_3(clk,clr,q,qbar);
input clk,clr;
output[3:0]q,qbar;

tff_3 tff0((~q[1]&~q[0])|(~q[2]&q[3]),clk,clr,q[0],qbar[0]);
tff_3 tff1((q[1]^q[3])|(~q[2]&~q[3]),clk,clr,q[0],qbar[0]);
tff_3 tff2(~q[1]|(q[3]&q[1]&~q[0]),clk,clr,q[2],qbar[2]);
tff_3 tff3((q[3]&q[1])|(~q[3]&q[2]),clk,clr,q[3],qbar[3]);

endmodule
