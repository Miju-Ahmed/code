#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m, x, y, d;
    cin>>n>>m>>x>>y>>d;
    if(((x-1)>d||(n-x)>d)&&((y-1)>d||(m-1)>d))
        cout<<(n+m-2)<<endl;
    else
        cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    return 0;
    
}