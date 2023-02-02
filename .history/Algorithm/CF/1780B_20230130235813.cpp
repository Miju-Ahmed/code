#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    ll n;  cin>>n;
    ll a[n],ans=0;
    for(ll i=0; i<n; i++)  cin>>a[i];
    ll p[n];   p[0]=a[0];
    for(int i=1; i<n; i++)
        p[i] = a[i] + p[i-1];
    ll
     sum = p[n-1];
    for(ll i=0; i<(n-1); i++)
    {
        ans = max(gcd(p[i],sum-p[i]),ans);
    }
    cout<<ans<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
