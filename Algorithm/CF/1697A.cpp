#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    int sum=0;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    if(sum<=m)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<sum-m<<endl;
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