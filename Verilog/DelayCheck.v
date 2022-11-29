module D(out, a, b, c);
output out;
input a, b, c;
wire e;
and #(5) a1(e, a,b);
or #(4) o1(out, e, c);
endmodule

module stimulus;
reg a, b, c;
wire out;
D d1(out, a, b, c);
initial
begin
    a = 1'b0; b = 1'b0; c = 1'b0;
    #10 a = 1'b1; b = 1'b1; c = 1'b1;
    #10 a = 1'b1; b = 1'b0; c = 1'b0;
    #20 $finish;
end
endmodule
