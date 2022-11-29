module fa(a,b,cin,s,cout);
input a,b,cin;
output cout,s;
wire s1,c1,c2;
xor(s1,a,b);
and(c1,a,b);
xor(s,s1,cin);
and(c2,s1,cin);
or(cout,c2,c1);
endmodule