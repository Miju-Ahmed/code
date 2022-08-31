#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a[2], b[2], f[2];
    cin>>a[0]; cin>>a[1];
    cin>>b[0]; cin>>b[1];
    cin>>f[0]; cin>>f[1];

    ll r=0;
    ll dx = a[0] - b[0];
    if(dx<0) dx = -dx;
    ll dy = a[1] - b[1];
    if(dy<0) dy = -dy;

    r = dx + dy;
    if((a[1]==f[1]&&a[1]==b[1])&&((a[0]<f[0]&&f[0]<b[0])||(b[0]<f[0]&&f[0]<a[0])))
        r = r+2;
    if((a[0]==f[0]&&a[0]==b[0])&&((a[1]<f[1]&&f[1]<b[1])||(b[1]<f[1]&&f[1]<a[1])))
        r = r + 2;
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