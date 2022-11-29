#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll INF=1.5e9+10;
ll MOD=10000000007;


void solve()
{
    ll n;       cin>>n;
    int p=0,a[n];

    for(int i=2; i<=9; i++)
    {
        if(n%i==0)
        {
            a[p++] = i;
            n/=i; 
        }
    }
    a[p++]=n;
    sort(a,a+p);
    ll b[3],c=0;
    set<int>s;
    for(int i=0; i<p; i++)
    {
        s.insert(a[i]);
    }

    if(s.size()<3)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(auto& i:s)
        if(i!=1)
            cout<<i<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}