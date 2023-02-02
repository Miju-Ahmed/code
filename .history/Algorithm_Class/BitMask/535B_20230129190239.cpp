#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;  cin>>n;
    while(n>0)
    {
        c++;
        n/=10;
    }
    int c = (1<<n) - 2;
}