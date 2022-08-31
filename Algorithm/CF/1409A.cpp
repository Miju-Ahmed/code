#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b;
    cin>>b>>a;
    ll d;
    d = b-a;
    if(d<0)
        d = -d;
    if(d%10==0)
    {
        cout<<d/10<<endl;
        return;
    }
    ll r = d/10 + 1;
    cout<<r<<endl;   
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}