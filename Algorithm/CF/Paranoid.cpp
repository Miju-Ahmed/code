#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll p=n;
    for(int i=1; i<n; i++)
    {
        if(s[i]!=s[i-1])
        {
            p = p+i;
        }
    }
    cout<<p<<endl;
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