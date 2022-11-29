#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>selected(k,0);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        selected[(i%k)] = max(selected[(i%k)], a[i]);
    }

    ll ans = 0;
    for(int i=0; i<k; i++)
        ans += selected[i];
    
    cout<<ans<<endl;
}

int main()
{
    Faster;

    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}