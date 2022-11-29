#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,p,q,r;
    cin>>x>>p>>q;
    r = (p-q)*x;
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