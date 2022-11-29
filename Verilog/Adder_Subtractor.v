module full_adder(sum,cout,a,b,cin);
input a,b,cin;
output sum,cout;
wire s1,c1,c2;
xor(s1,a,b);
and(c1,a,b);
xor(sum,s1,cin);
and(c2,s1,cin);
or(cout,c1,c2);
endmodule

module Add_Sub(sum,cout,a,b,m);
input[3:0]a,b;
input m;
output [3:0]sum;
output cout;
wire [3:0]c;
xor(c[0],m,b[0]);
xor(c[1],m,b[1]);
xor(c[2],m,b[2]);
xor(c[3],m,b[3]);
wire c1,c2,c3;
full_adder fa0(sum[0],c1,a[0],c[0],m);
full_adder fa1(sum[1],c2,a[1],c[1],c1);
full_adder fa2(sum[2],c3,a[2],c[2],c2);
full_adder fa3(sum[3],cout,a[3],c[3],c3);
endmodule


