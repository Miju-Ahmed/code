module full_adder(s,cout,a,b,cin);
output s,cout;
input a,b,cin;
wire c1,c2,s1;
xor(s1,a,b);
and(c1,a,b);
xor(s,s1,cin);
and(c2,s1,cin);
or(cout,c1,c2);
endmodule

module Full_Adder4(s,cout,a,b,cin);
output[3:0]s;
output cout;
input[3:0]a,b;
input cin;
wire c1,c2,c3;
full_adder fa0(s[0],c1,a[0],b[0],cin);
full_adder fa1(s[1],c2,a[1],b[1],c1);
full_adder fa2(s[2],c3,a[2],b[2],c2);
full_adder fa3(s[3],cout,a[3],b[3],c3);
endmodule 
