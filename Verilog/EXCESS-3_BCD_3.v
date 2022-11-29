module eb_3(e,b);
input[3:0]e;
output[3:0]b;

not(b[0],e[0]);

xor(b[1],e[1],e[0]);

wire a,c,d;
nor(a,e[2],e[1]);
nor(c,e[2],e[0]);
and(d,e[2],e[1],e[0]);
or(b[2],a,c,d);

wire f,g;
and(f,e[1],e[0]);
or(g,f,e[2]);
and(b[3],g,e[3]);

endmodule
