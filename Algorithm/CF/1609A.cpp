#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    ll ans=0;
    int k=0;

    for(int i=0; i<n; i++)
    {
        while(a[i]%2==0)
        {
            a[i] = a[i]/2;
            k++;
        }
        //mx = max(mx, a[i])
    }
    sort(a, a+n);
    a[n-1] = a[n-1]*pow(2,k);//r1 = mx*pow(2,k)
    for(int i=0; i<n; i++)
        ans+=a[i];
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