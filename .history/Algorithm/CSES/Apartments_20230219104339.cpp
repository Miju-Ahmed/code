#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,k;   cin>>n>>m>>k;
    ll a[n],b[m],c[n];
    for(int i=0; i<n; i++)
    {
        ll x;  cin>>x;
        a[i]=x-k;
        c[i]=x+k;
    }
    ll ans=0;
    for(int j=0; j<m; j++)
    {
        ll x;   cin>>x;
        for(int i=0; i<n; i++)
        {
            if(x>=a[i]&&x<=c[i])
                ans++;
        }
    }

}