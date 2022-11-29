module SR_Latch(q, qbar, s, r);
input s, r;
output q, qbar;
nand n1(q, qbar, s);
nand n2(qbar, q, r);
endmodule

module Top;
wire q, qbar;
reg s, r;
SR_Latch m1(q, qbar, ~s, ~r);
initial
    begin
        $monitor($time, " set = %b, reset = %b, q = %b\n", s, r, q);
        s = 0;
        r = 0;
        #5 r = 1;
        #5 r = 0;
        #5 s = 1;
    end
endmodule