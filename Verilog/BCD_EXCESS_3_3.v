module be_3(b,e);
input[3:0]b;
output[3:0]e;

not(e[0],b[0]);

xnor(e[1],b[0],b[1]);

wire a,c,d;
or(a,b[1],b[0]);
xor(e[2],b[2],a);

and(c,a,b[2]);
or(e[3],b[3],c);

endmodule
