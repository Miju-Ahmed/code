module boc_excess3(e,b);
input[3:0]b;
output[3:0]e;
wire n1,n2,n3,n4;
not(n1,b[0]);
not(n2,b[1]);
not(n3,b[2]);
assign e[0]=n1;
xnor(e[1],b[0],b[1]);
wire a1,a2,a3,a4,a5;
and(a2,b[0],n3);
and(a2,b[1],n3);
and(a3,n1,n2,b[2]);
or(e[2],a1,a2,a3);
and(a4,b[0],b[2]);
and(a5,b[1],b[2]);
or(e[3],b[3],a4,a5);
endmodule
