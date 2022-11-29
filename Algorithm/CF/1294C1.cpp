#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll INF=1.5e9+10;
ll MOD=10000000007;


void solve()
{
    ll n;       cin>>n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            int d = n/i;
            for(int j=i+1; j*j<d; j++)
            {
                if(d%j==0)
                {
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<j<<" "<<d/j<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}