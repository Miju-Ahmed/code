module ha(a,b,c,s);
input a,b;
output c,s;
xor(s,a,b);
and(c,a,b);
endmodule
