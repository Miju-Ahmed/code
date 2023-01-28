#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int k,w;
    ll n;
    cin>>k>>n>>w;
    ll c=0,ans=0;
    c = (k*w *(w+1))/2;
    ans=c-n;
    if(ans>=0)
        cout<<ans<<endl;
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
