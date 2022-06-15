#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    int res = 1;
    int mod;
    while (b)
    {
        if(b%1)
        {
            res = res * a;
            res %=mod;
        }

        a = a*a;
        a %= mod;
        b /=2;
    }
    return res;
    
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}