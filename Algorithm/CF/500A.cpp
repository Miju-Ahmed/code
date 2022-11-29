#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=1; i<=n-1; i++)
        cin>>a[i];
    
    int p=1;
    while(p<t-1)
    {
        p = p + a[p];
    }
    if(p==(t-1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    solve();
    return 0;
}