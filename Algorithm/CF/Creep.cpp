#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin>>a>>b;
    while (a>0&&b>0)
    {
        cout<<"01";
        a--;
        b--;
    }
    while (a>0)
    {
        cout<<0;
        a--;
    }
    while(b>0)
    {
        cout<<1;
        b--;
    }
    cout<<endl;
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