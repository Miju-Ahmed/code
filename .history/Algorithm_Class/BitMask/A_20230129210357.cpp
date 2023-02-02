#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   cin>>n;
    int x,y,t=n;
    if(n%2==0)
    {
        cout<<1<<" "<<n/2<<endl;
        return;
    }
    cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}