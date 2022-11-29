#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll digit_sum(ll n)
{
    ll sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve()
{
    ll n;
    cin>>n;
    ll x = sqrt(n);
    while((x*x+90*x)>=n)
    {
        if(x*x+digit_sum(x)*x==n)
        {
            cout<<x<<endl;
            return;
        }
        x--;
    }
    cout<<"-1"<<endl;
}

int main()
{
    solve();
    return 0;
}