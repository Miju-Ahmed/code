#include<bits/stdc++.h>
using namespace std;

/*
1. Very module
2. Multiplication and division O(n^2)
3. Modulus O(n^3)
3. Bitwise Operator O(n)
*/
int main()
{
    int a,b;    cin>>a>>b;
    cout<<(a|b)<<endl;
    cout<<(a&b)<<endl;
    cout<<(a^b)<<endl;
    cout<<~a<<endl;
    cout<<(a<<1)<<endl;
    cout<<(a<<2)<<endl;
    cout<<(b>>1)<<endl;
    cout<<(b>>2)<<endl;

}