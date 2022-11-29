module fa_3(a,b,cin,s,cout);
input a,b,cin;
output s,cout;
wire c1,c2,s1;

xor(s1,a,b);
and(c1,a,b);
and(c2,s1,cin);

xor(s,s1,cin);
or(cout,c1,c2);

endmodule
