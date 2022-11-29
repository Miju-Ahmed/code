#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,m,a,result;
    cin>>n>>m>>a;

    ll r,c;
    if(n%a==0)
        r = n/a;
    else
        r = n/a +1;
    if(m%a==0)
        c = m/a;
    else
        c = m/a+1;
    result = r*c; 
    cout<<result<<endl;
}

int main()
{
    solve();
    return 0;
}