#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, c;
    cin>>a>>b>>c;

    ll a1 = a - 1;
    ll b1;
    if(b>c)
    {
        b1 = b - 1;
    }
    else
    {
        b1 = 2*c - b - 1;
    }

    if(a1<b1)
        cout<<"1"<<endl;
    else if(a1>b1)
        cout<<"2"<<endl;
    else
        cout<<"3"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}