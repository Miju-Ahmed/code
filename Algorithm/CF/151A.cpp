#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int n1,n2,n3;
    n1 = (k*l)/nl;
    n2 = c*d;
    n3 = p/np;
    int k1=min(n1,n2);
    int k2=min(k1,n3);
    cout<<k2/n<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
