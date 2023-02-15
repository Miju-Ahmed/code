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
        ll hash1=c[0]-'a'+1,base=31,p=31;
        ll hash2 = s[0]-'a'+1;
        v.push_back(hash2);
        for(int i=1; i<c.size(); i++)
        {
            hash1 = (hash1 + (c[i]-'a'+1)*base)%mod;
            base = (base*p)%mod;
        }
        base=31;
        for(int i=1; i<s.size(); i++)
        {
            hash2 = (hash2 + (s[i]-'a'+1)*base)%mod;
            v.push_back(hash2);
            base = (base*p)%mod;
        }

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";

        if(v[0]==hash1)
            f.push_back(1);
        base = 31;
        for(int i=1; i<v.size()-c.size()-1; i++)
        {
            ll temp = (v[i+c.size()]-v[i-1]);
            if(hash1*base==temp)
                f.push_back(i+1);
            base = (pow(base,i);
        }
        if(f.size()>0)
        {
            cout<<f.size()<<endl;
            for(int i=0; i<f.size(); i++)
                cout<<f[i]<<" ";
        }
        else
        {
            cout<<"Not Found"<<endl;
        }

    }
}

/*
miju
nmijuf
123456
*/