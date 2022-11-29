#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll digit(ll n)
{
    d = 0;
    while(n!=0)
    {
        n/=10;
        d++;
    }
    return d;
}

void solve()
{
    ll n,d, t,p=0;         cin>>n;
    d = digit(n);
    int a[d],b[d];
    while(n!=0)
    {
        a[p] = n%10;
        p++;
        n/=10;
    }
    if(p==4||p==7)
    {
        
    }

}