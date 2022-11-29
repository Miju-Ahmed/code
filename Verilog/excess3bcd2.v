module e2b(b,e);
input[3:0]e;
output[3:0]b;
wire a,c,d,f,g;

not(b[0],e[0]);

xor(b[1],e[1],e[0]);

nor(a,e[2],e[1]);
nor(c,e[0],e[2]);
and(d,e[0],e[1],e[2]);
or(b[2],a,c,d);

and(f,e[0],e[1]);
or(g,f,e[2]);
and(b[3],g,e[3]);
endmodule
