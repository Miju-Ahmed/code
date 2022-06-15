#include<bits/stdc++.h>
using namespace std;

long long BinExp(long long a, long long b)
{
    long long res = 1;
    while (b>0)
    {
        if(b&1) res = res * a;
        a = a * a;
        b >>=1;
    }
    return res;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cout<<BinExp(a,b)<<endl;
    }
    return 0;
}