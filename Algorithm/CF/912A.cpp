#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define forloop(i,a,b)  for(ll i=a;i<b;i++)

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

void solve()
{
    ll a,b,x,y,z;  cin>>a>>b>>x>>y>>z;
    ll ye=0,g=0,bl=0;
    ye = 2*x-a+y;
    bl = 3*z+y-b;
    if(ye>0)
    {
        if(bl>0)
        {
            cout<<ye+bl<<endl;
        }
        else
            cout<<ye<<endl;
    }
    else if(ye<=0)
    {
        if(bl>0)
            cout<<bl<<endl;
        else
            cout<<0<<endl;
    }
            
    else
        cout<<0<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
