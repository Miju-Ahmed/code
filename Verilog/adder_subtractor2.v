module as2(a,b,s,m,c);
input[3:0]a,b;
output[3:0]s,c;
input m;
wire x1,x2,x3,x4;

xor(x1,b[0],m);
fa fa0(a[0],x1,m,s[0],c[0]);

xor(x2,b[1],m);
fa fa1(a[1],x2,c[0],s[1],c[1]);

xor(x3,b[2],m);
fa fa2(a[2],x3,c[1],s[2],c[2]);

xor(x4,b[3],m);
fa fa3(a[3],x4,c[2],s[3],c[3]);
endmodule