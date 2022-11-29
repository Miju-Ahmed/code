#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll l=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if((i==0 || a[i-1]>a[i])&&(i==n-1||a[i]<a[i+1]))
            l++;
    }
    if(l==1)    cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}