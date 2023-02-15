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
    ps[0]=1;
    base=p;
    for(int i=1; i<s.size(); i++)
    {
        dp[i] = ((dp[i-1]+(s[i]-'a'+1))*base)%mod;
        ps[i]=base;
        base = (base*p)%mod;
    }

    int sp=0,ep=c.size()-1;
    vector<int>v;
    while(ep<s.size())
    {
        ll win = dp[ep];
        if(sp>0)    win = (win - dp[sp-1]+mod)%mod;
        if(win==(hash1*ps[sp])%mod)
        
    }
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