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
        vector<int>t;
        ll base1=31,p=31,base2=31;
        ll h1=c[0]-'a'+1,h2=s[0]-'a'+1;
        for(int i=1; i<c.size(); i++)
        {
            h1 = (h1 + (c[i]-'a'+1)*base)%mod;
            base1 = (base1*p)%mod;
        }
        for(int i=1; i<c.size(); i++)
        {
            h2 = (h2 + (s[i]-'a'+1)*base)%mod;
            base2 = (base2*p)%mod;
        }

        cout<<h1<<" "<<h2<<endl;
        base2
        for(int i=1; i<s.size()-c.size(); i++)
        {
            if(h1==h2)
                t.push_back(i+1);
            h2 = (h2 - s[i]-'a'-1 + (s[i+c.size()-1]-'a'+1)*base2)%mod;
            base2 = (base2*p)%mod;
        }
        cout<<t.size()<<endl;
        for(int i=0; i<t.size(); i++)
            cout<<t[i]<<" ";
        cout<<endl;
    }
}

/*
miju
nmijuf
*/