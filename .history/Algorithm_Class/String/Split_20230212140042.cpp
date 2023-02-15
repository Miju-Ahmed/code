#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    set<char>a,b;
    vector<int>c,d;
    int ans=0,index=-1;
    for(int i=0; i<n; i++)
    {
        a.insert(s[i]);
        b.insert(s[n-i-1]);
        c.push_back(a.size());
        d.push_back(b.size());
        cout<<a[i]<<" ";
    }c
    for(int i=0; i<n; i++)
    {
        if(ans<(c[i]+d[n-i-1])&&(c[i]+d[n-i-1]<=n))
        {
            ans = c[i]+d[n-i-1];
            index = i;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    int t;  cin>>t;
    while(t--)
        solve();
    return 0;
}