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
    int r,g,b;
    cin>>r>>g>>b;
    int ans = 30 + 3*((r+1)/2-1);
    if (g) ans = max (ans, 31 + 3*((g+1)/2-1));
    if (b) ans = max (ans, 32 + 3*((b+1)/2-1));
    cout<<ans<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
