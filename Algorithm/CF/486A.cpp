#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    ll n;   cin>>n;
    ll sum=0;
    if(n%2==0)
    {
        sum = n/2;
    }
    else
    {
        sum = (n/2) +1;
        sum = -sum;
    }

    cout<<sum<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
