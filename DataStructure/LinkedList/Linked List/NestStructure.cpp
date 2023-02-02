#include<bits/stdc++.h>
using namespace std;

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

    cout<<"Imaginary part : "<<num1.comp.imag<<endl;
    cout<<"Real part : "<<num1.comp.real<<endl;
    cout<<"Integer : "<<num1.integer<<endl;
    return 0;
}
