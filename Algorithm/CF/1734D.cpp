#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n,k;        cin>>n>>k;
    vector<ll> a(n+1);
    for(int i=1; i<=n; i++)
        cin>>a[i];
    
    bool possible = true;
    int L = k-1, R = k+1;
    ll cs = a[k];

    while (true)
    {
        int tempL = L;
        int newL = L;
        ll maxL = cs;
        ll ts = cs;

        while(tempL>0 and ts+a[tempL]>=0)
        {
            ts += a[tempL];
            tempL--;
            if(ts>=maxL)
            {
                maxL = ts;
                newL = tempL;
            }
        }
        if(tempL<1)
            break;
    }
    
}