#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define v LLONG_MAX

void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    ll ans = v;

    for(int i=2; i<n; i++)
    {
        ll x = a[i-2], y = a[i-1], z = a[i];
        ll ans1, ans2, ans3;
        ans1 = abs(x-x) + abs(y-x) + abs(z-x);
        ans2 = abs(x-y) + abs(y-y) + abs(z-y);
        ans3 = abs(x-z) + abs(y-z) + abs(z-z);

        ll k = min(ans1, ans2);
        ll l = min(ans3, k);
        ans = min(l, ans);
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}