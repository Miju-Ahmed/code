module jk2(j,k,clk,clr,q,qbar);
input j,k,clk,clr;
output q,qbar;
wire a,b,y,ybar,c,d,cbar;
nand(a,j,clk,clr,qbar);
nand(b,k,clk,q);
nand(y,ybar,a);
nand(ybar, y,b,clr);
not(cbar, clk);
nand(c,y,cbar);
nand(d,ybar,cbar);
nand(q,qbar,c);
nand(qbar,q,d,clr);
endmodule
