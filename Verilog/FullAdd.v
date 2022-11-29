module fulladd(sum, cout, a, b, cin);
output sum, cout;
input a, b, cin;
wire s1, c1, c2;

xor(s1, a, b);
and(c1, a, b);

xor(sum, s1, cin);
and(c2, s1, cin);

or(cout, c1, c2);
endmodule

module Full_Adder(sum, cout, a, b, cin);
output [3:0]sum;
output cout;
input[3:0] a, b;
input cin;
wire c1, c2, c3;

fulladd fa0(sum[0], c1, a[0], b[0], cin);
fulladd fa1(sum[1], c2, a[1], b[1], c1);
fulladd fa2(sum[2], c3, a[2], b[2], c2);
fulladd fa3(sum[3], cout, a[3], b[3], c3);


endmodule

module stimulus;
reg[3:0] a, b;
reg cin;
wire[3:0] sum;
wire cout;

Full_Adder fa(sum, cout, a, b, cin);

initial
begin
    $monitor($time, " A = %b, B = %b, cin = %b, --- cout = %b, sum = %b", a, b, cin, cout, sum);
end

initial
begin
    a = 4'd0; b = 4'd0; cin = 1'b0;
    #5 a = 4'd3; b = 4'd4;
    #5 a = 4'd2; b = 4'd5;
    #5 a = 4'd9; b = 4'd9;
    #5 a = 4'd10; b = 4'd15;
    #5 a = 4'd10; b = 4'd5; cin = 1'b1;
end

endmodule