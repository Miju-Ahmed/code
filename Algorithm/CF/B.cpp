#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int n,s,r;  cin>>n>>s>>r;
    cout<<s-r<<" ";
    if(r%(n-1)==0)
    {
        for(int i=0; i<n-1; i++)
        {
            cout<<r/(n-1)<<" ";
        }
    }
    else
    {
        int a=r/(n-1),b=r%(n-1);
        if((a+b)<=6)
        {
            for(int i=0; i<n-2; i++)
            {
                cout<<a<<" ";
            }
            cout<<a+b<<" ";
        }
        else
        {
            vector<int>v;
            int p=0;
            for(int i=0; i<n-1; i++)
            {
                v.push_back(a);
            }
            while(b!=0)
            {
                v[p]++;
                p++;
            }
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
        }
    }
    cout<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
