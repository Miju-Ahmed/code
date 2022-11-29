module ad_3(a,b,s,m,c);
input[3:0]a,b;
input m;
output[3:0]s,c;

wire x0,x1,x2,x3;

xor(x0,m,b[0]);
fa_3 fa0(a[0],x0,m,s[0],c[0]);

xor(x1,m,b[1]);
fa_3 fa1(a[1],x1,c[0],s[1],c[1]);

xor(x2,m,b[2]);
fa_3 fa2(a[2],x2,c[1],s[2],c[2]);

xor(x3,m,b[3]);
fa_3 fa3(a[3],x3,c[2],s[3],c[3]);

endmodule
