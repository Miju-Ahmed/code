module jkff_3(j,k,clk,clr,q,qbar);
input j,k,clk,clr;
output q,qbar;
wire a,b,y,ybar,c,d;

nand(a,j,clk,clr,qbar);
nand(b,k,clk,q);

nand(y,a,ybar);
nand(ybar,b,clr,y);

nand(c,y,~clk);
nand(d,ybar,~clk);

nand(q,qbar,c);
nand(qbar,q,d,clr);

endmodule
