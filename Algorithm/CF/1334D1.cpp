//Though this code is running well
//But it has gotten tle

#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const long long INF=100001;

void solve()
{
    ll n,l,r;      cin>>n>>l>>r;
    ll a[INF]={0}, p=1;
    if(l==r)
    {
        cout<<"1"<<endl;
        return;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            a[p++]=i;
            a[p++]=j;
        }
    }
    a[p++]=1;
    for(int i=l; i<=r; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}