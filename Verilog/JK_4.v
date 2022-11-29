module jk_4(j,k,clk,clr,a,abar);
input j,k,clk,clr;
output a,abar;

wire b,c,y,ybar,d,e;

nand(b,j,clk,clr,abar);
nand(c,k,clk,a);

nand(y,b,ybar);
nand(ybar,y,clr,c);

nand(d,y,~clk);
nand(e,ybar,~clk);

nand(a,abar,d);
nand(abar,a,e,clr);

endmodule
