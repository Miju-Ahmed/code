module mux4_to_1(out, a, b, c, d, s1, s0);
input a, b, c, d, s0, s1;
output out;
wire f, g, h, i, s0n, s1n;
not(s0n, s0);
not(s1n, s1);
and(f, a, s1n, s0);
and(g, b, s1n, s0);
and(h, c, s1, s0n);
and(i, d, s1, s0n);
or(out, f, g, h, i);
endmodule

module stimulus;
reg in0, in1, in2, in3;
reg s1, s0;
wire out;
mux4_to_1 mymux(out, in0, in1, in2, in3, s1, s0);
initial
    begin
        in0 = 1; in1 = 0; in2 = 1; in3 = 0;
        #1 $display("in0 = %b, in1 = %b, in2 = %b, in3 = %b\n", in0, in1, in2, in3);
        
        s1 = 0; s0  = 0;
        #1 $display("s1 = %b, s0 = %b, out = %b\n", s1, s0, out);

        s1 = 1; s0 = 0;
        #1 $display("s1 = %b, s0 = %b, out = %b\n", s1, s0, out);

        s1 = 1; s0  = 0;
        #1 $display("s1 = %b, s0 = %b, out = %b\n", s1, s0, out);

        s1 = 1; s0 = 1;
        #1 $display("s1 = %b, s0 = %b, out = %b\n", s1, s0, out);
    end
endmodule