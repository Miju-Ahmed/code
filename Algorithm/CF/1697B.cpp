#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    int p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    int t = p[0];
    for(int i=0; i<n; i++)
    {
        if(t>p[i])
        {
            int temp = p[i];
            p[i] = t;
            t = temp;
        }
    }
    for(int i=0; i<n; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    for(int i=0; i<q; i++)
    {
        int x,y,sum = 0;
        cin>>x>>y;
        for(int j=0; j<y; j++)
        {
            sum = sum + p[j];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}