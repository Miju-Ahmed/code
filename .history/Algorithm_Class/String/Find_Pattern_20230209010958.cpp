#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9+7;

int main()
{
    int f;  cin>>f;
    while(f--)
    {
        string s,c; cin>>s>>c;
        vector<ll>v;
        ll hash1=c[0]-'a'+1,base=31,p=1;
        ll hash2 = s[0]-'a'+1;
        v.push_back(hash2);
        for(int i=1; i<c.size(); i++)
        {
            hash1 = (hash1 + (c[i]-'a'+1)*pow(base,p))%mod;
            p++;
        }
        for(int i=1; i<s.size(); i++)
        {

        }
    }
}

/*
miju
nmijuf
*/