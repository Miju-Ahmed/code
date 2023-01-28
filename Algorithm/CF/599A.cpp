#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    ll d1,d2,d3;
    ll s[4];
    cin>>d1>>d2>>d3;
    s[0] = 2*d1+2*d2;
    s[1] = d1+d2+d3;
    s[2] = 2*d1+2*d3;
    s[3] = 2*d2+2*d3;
    cout<<*min_element(s, s+4)<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
