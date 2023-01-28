#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int k,n,s,p;
    int sn=0,t=0,sk=0;
    cin>>k>>n>>s>>p;
    if(n%s==0)  sn = n/s;
    else    sn = n/s + 1;
    sk = k*sn;
    if(sk%p==0) cout<<sk/p<<endl;
    else    cout<<sk/p + 1<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
