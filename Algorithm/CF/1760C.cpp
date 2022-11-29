#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
    int n;
    cin>>n;
    ll s[n];
    ll a[n];
    ll r[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        a[i]=s[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[n-1]==s[i])
            r[i] = s[i]- a[n-2];
        else
            r[i] = s[i] - a[n-1];
    }
    for(int i=0; i<n; i++)
        cout<<r[i]<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}