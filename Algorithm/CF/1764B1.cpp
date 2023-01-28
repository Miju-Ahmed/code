#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

int ts(vector<int>&v, int x)
{
    int f=0, l=v.size()-1;
    while(f<=l)
    {
        int lm = (2*f+l)/3;
        int rm = (f + 2*l)/3;
        if(v[lm]==x)    return lm;
        else if(v[rm]==x)   return rm;
        else if(v[lm]>x)    l = lm - 1;
        else if(v[rm]<x)    f = rm +1;
        else f=lm+1, l=rm-1;
    }
    return -1;
}

void solve()
{
    int n;  cin>>n;
    vector<int>s;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        s.push_back(x);
    }

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<s.size(); j++)
        {
            if(i!=j)
            {
                int x,y,z;
                x = s[i];   y=s[j];
                z = y-x;
                if(z<0)
                    z = -z;
                int p= ts(s,z);
                if(p==-1)
                    s.push_back(z);
            }
        }
    }
    cout<<s.size()<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
