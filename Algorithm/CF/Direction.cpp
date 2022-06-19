#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    while(v.size()>0 && v[v.size()-1]==0)
        v.pop_back();
    if(v.size()==0)
    {
        cout<<"YES"<<endl;
        return;
    }

    int ans = 0;
    ll sum = 0;
    for(int i=v.size()-1; i>0; i--)
    {
        sum += v[i];
        if(sum>=0)
        {
            ans = 1;
            break;
        }
    }

    sum+=v[0];
    if(sum!=0)
        ans = 1;
    if(ans == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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