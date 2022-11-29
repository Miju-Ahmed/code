module as_4(m,a,b,s,c);
input[3:0]a,b;
input m;
output[3:0]s,c;
wire x0,x1,x2,x3;

xor(x0,b[0],m);
fa_4 fa0(a[0],x0,m,s[0],c[0]);

xor(x1,b[1],m);
fa_4 fa1(a[1],x1,c[0],s[1],c[1]);

xor(x2,b[2],m);
fa_4 fa2(a[2],x2,c[1],s[2],c[2]);

xor(x3,b[3],m);
fa_4 fa3(a[3],x3,c[2],s[3],c[3]);

endmodule