module jkff(j,k,clk,clr,q,qbar);
input j,k,clk,clr;
output q,qbar;
wire a,b,y,ybar,c,d,cbar;
not(cbar,clk);
nand(a,j,clk,clr,qbar);
nand(b,q,clk,k);
nand(y,a,ybar);
nand(ybar,y,b,clr);
nand(c,y,cbar);
nand(d,ybar,cbar);
nand(q,c,qbar);
nand(qbar,q,clr,d);
endmodule
