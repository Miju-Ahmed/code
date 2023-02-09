#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;

int main()
{
    ll t;  cin>>t;
    while(t--)
    {
        string s,c; cin>>s>>c;
        vector<ll>v,f;
        ll hash1=c[0]-'a'+1,base=31,p=1;
        ll hash2 = s[0]-'a'+1;
        v.push_back(hash2);
        for(int i=1; i<c.size(); i++)
        {
            hash1 = (hash1 + (c[i]-'a'+1)*pow(base,p))%mod;
            p++;
        }
        p=1;
        for(int i=1; i<s.size(); i++)
        {
            hash2 = (hash2 + (s[i]-'a'+1)*pow(base,p))%mod;
            v.push_back(hash2);
            p++;
        }

        int b = c.size()-1;
        while(b<)
        cout<<f.size()<<endl;
    }
}

/*
miju
nmijuf
123456
*/