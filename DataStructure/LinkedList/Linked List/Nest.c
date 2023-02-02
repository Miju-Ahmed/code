#include<stdio.h>
struct complex
{
    /* data */
    int imag;
    float real;
};

struct number
{
    struct complex comp;
    int integer;
}num1;

int main()
{
    num1.comp.imag = 11;
    num1.comp.real = 5.25;
    num1.integer = 6;

    printf("Imaginary Part: %d\n", num1.comp.imag);
    printf("Real Part: %.2f\n", num1.comp.real);
    printf("Integer: %d", num1.integer);
    return 0;
}
