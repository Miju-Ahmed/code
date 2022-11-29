#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    ll a,b,c;
    ll x[4];
    for(ll i=0; i<4; i++)
        cin>>x[i];
    sort(x,x+4);
    c = x[3]-x[0];
    b = x[2]-c;
    a = x[3] - (b+c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}