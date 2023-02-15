#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;

void solve()
{
    string s,c; cin>>s>>c;
    ll p=31,base=31,hash1=c[0]-'a'+1,hash2=s[0]-'a'+1;

    for(int i=1; i<c.size(); i++)
    {
        hash1 = (hash1+(c[i]-'a'+1)*base)%mod;
        base = (base*p)%mod;
    }
    ll dp[s.size()], ps[s.size()];
    dp[0] = s[0]-'a'+1;
    ps
}   

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}