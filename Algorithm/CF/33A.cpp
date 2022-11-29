#include<bits/stdc++.h>
using namespace std;
#define MX 10000000010

void solve()
{
    long long n,m,k,r,c;
    cin>>n>>m>>k;
    long long a[m+1] = {10000101};

    for(int i=0; i<n; i++)
    {
        cin>>r>>c;
        if(a[r]>c)
            a[r] =  c;
    }
    long long d = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=MX)
        d = d + a[i];
    }
    if(d>k)
        cout<<k<<endl;
    else
        cout<<d<<endl;
}

int main()
{
    solve();
    return 0;
}