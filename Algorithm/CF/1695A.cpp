#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int m,n,r=0;
    cin>>n>>m;
    ll a[n+3][m+4];
    int h,w;
    int k,l;
    int mx = INT_MIN;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]>mx)
            {
                mx = a[i][j];
                k=i;
                l = j;
            }
        }

    h = max(k,(n-k)+1);
    w = max(l,(m-l)+1);
    cout<<h*w<<endl;
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