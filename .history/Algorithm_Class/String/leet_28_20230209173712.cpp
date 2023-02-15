#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1e9+7;

int main()
{
    string s,c; cin>>s>>c;
    ll hash1=c[0]-'a'+1, hash2 = s[0]-'a'+1;
    ll base=31,p=31;
    vector<ll>v;
    for(int i=1; i<c.size(); i++)
    {
        hash1 = (hash1 + (s[i]-'a'+1)*(base))%mod;
        base = (base*p)%mod;
    }
    v.push_back(hash2);
    base = 31;
    for(int i=1; i<s.size(); i++)
    {
        hash2 = (hash2 + (s[i]-'a'+1)*base)%mod;
        base = (base*p);
        v.push_back(has)
    }
}