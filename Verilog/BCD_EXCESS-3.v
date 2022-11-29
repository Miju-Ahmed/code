module bcd_excess(e, b); 
input[3:0]b;
output[3:0]e;
not(e[0], b[0]);
xor(e[1], b[1], b[0]);
wire a;
or(a, b[1], b[0]);
xor(e[2], b[2],a);
endmodule

module stimulus;
reg[3:0]b;
wire [3:0]e;
bcd_excess be(e, b);
initial
begin
    $monitor($time, "BCD values:::::EXCESS-3 calues");
end
initial
begin
    b = 4'd0;
    #5 b = 4'd3;
    #5 b = 4'd5;
end

endmodule
