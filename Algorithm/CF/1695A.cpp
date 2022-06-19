#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int m,n,r=0;
    cin>>n>>m;
    ll a[n][m];
    int h,w;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    
    if(m==1&&n==1)
        r = m*n;
    else if(m>n)
        r = (m-1)*n;
    else if(n>m)
        r = (n-1)*m;
    else
        r = (m-1)*(n-1);

    cout<<r<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    return 0;
    
}