#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+1;

int main()
{
    string m,n;
    cin>>n>>m;
    ll  hashm=0, hashn=0,base=31,p=0,c=0;
    for(int i=m.size()-1; i>=0; i--)
    {
        hashm = (hashm + (m[i]-'a'+1)*pow(base,p));
        hashm = hashm%mod;
        p++;
    }
    p=0;
    for(int int i=m.size()-1; i>=0; i--)
    {
        hashn = (hashn + (m[i]-'a'+1)*pow(base,p));
        hashn = hashn%mod;
        p++;
    }

    for(int i=0; i<n.size()-m.size(); i++)
    {
        if(hashm==hashn)
        {
            c++;
        }
        hashn=()
    }
}