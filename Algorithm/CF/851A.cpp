#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    ll n,k,t;   cin>>n>>k>>t;
    ll a[t+1]={0};
    for(int i=1; i<=t; i++)
    {
        if(a[i]<=k)
            a[i]=1;
        if(i>k&&i<n)
        {
            a[i]=1;
            a[i-k]=0;
        }
        if(i>=n)
        {
            a[i]=1;
            a[n-k]=0;
        }
        if(i==t)
            a[n]=0;
    }
    int c=0;
    for(int i=1; i<=t; i++)
    {
        cout<<a[i]<<" ";
        if(a[i]==1)
            c++;
    }
        
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
