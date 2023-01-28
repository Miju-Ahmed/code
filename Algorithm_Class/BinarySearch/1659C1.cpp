#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;

void solve()
{
    int n;
    ll a, b;
    cin>>n>>a>>b;
    vector<int>v(n+1), c(n+1);
    v[0] = 0;
    for(int i=1; i<=n; i++) cin>>v[i];

    partial_sum(v.begin(), v.end(), c.begin());
    ll ans = inf;
    for(int i=0; i<=n; i++)
        ans = min(ans, (a+b)*(v[i]-v[0])+b*(c[n]-c[i]-(n-i)*v[i]));
    cout<<ans<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}