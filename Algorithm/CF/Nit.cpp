#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,z;
    cin>>n>>z;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i=0; i<n; i++)
    {
        ll temp;
        temp = a[i];
        a[i] = a[i]|z;
        z = temp&z;
    }
    a[0] = a[n-1]|z;
    ll m = *max_element(a,a+n);
    cout<<m<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}