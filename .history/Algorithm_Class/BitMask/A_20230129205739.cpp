#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   cin>>n;
    int x,y,t=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            t = pow(i,j)*y+pow(j,i);
            if(t==n)
            {
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}