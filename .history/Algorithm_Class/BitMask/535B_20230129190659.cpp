#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
2^1 + 2^2 + 2^3 + ...x
= (2*(2^(x-1)-1))/(2-1)
=2^x-2

void solve()
{
    int n;  cin>>n;
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    int c1=0,c2=0;
    c1 = (1<<c)-2;  

}

int main()
{
    solve();
    return 0;
}