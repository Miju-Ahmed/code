module Ripple_Carry_Counter (
    q, clk, reset
);

output[3:0]q;
input clk, reset;
T_FF tff0(q[0], clk, reset);
T_FF tff1(q[1], q[0], reset); 
T_FF tff2(q[2], q[1], reset);
T_FF tff3(q[3], q[2], reset);

endmodule

module T_FF(q, clk, reset);
output q;
input clk, reset;
wire  d;
not(d, q);
D_FF dff0(q, d, clk, reset);
endmodule

module D_FF(q, d, clk, reset);
output reg q;
input d, clk, reset;
always @(posedge clk or posedge reset) begin
    if(reset)
        q = 1'b0;
    `else
        q = d;
end
endmodule


module tb;
reg clk;
reg reset;
wire [3:0]q;
Ripple_Carry_Counter dut(clk, reset, q);
initial 
    clk = 0;
always
    #5 clk = ~clk;

initial
    begin
        reset = 1;
        #15 reset = 0;
        #180 reset = 1;
        #10 reset = 1;
        #20 $finish;
    end
    initial
        $monitor("time = %g, reset = %b, clk = %b, q = %d", $time, reset, clk, q)
endmodule