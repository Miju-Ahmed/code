#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

void solve()
{
    ll n,x,y,c1=0,c2=0; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x>0) c1++;
        else    c2++;
    }
    if(c1==1||c2==1||c1==0||c2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
