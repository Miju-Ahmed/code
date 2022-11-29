#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++)
        cin>>a[i];
    if(is_sorted(a.begin(), a.end()))
    {
        cout<<"0"<<endl;
        return;
    }
    map<int, int> m;
    for(int i=0; i<n; i++)
    {
        if(m.find(a[i]==m.end()))
        {
            m[a[i]] = i;
        }
    }

    int in = -1;
    for(int i=n-1; i>=1; i--)
    {
        if(a[i]<a[i-1])
        {
            in = i - 1;
            break;
        }
    }
    int ans = m.size();
    set<int>saved;
    for(int i=n-1; i>=in +1; i--)
    {
        if(m[a[i]]<=in)
        {
            break;
        }
        saved.insert(a[i]);
    }
    ans = saved.size();
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}