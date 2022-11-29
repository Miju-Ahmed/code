#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    
    int x = *max_element(v.begin(), v.end());
    int ans;
    for(int i=0; i<n; i++)
    {
        if(x==v[i])
        {
            ans = i+1;
            break;
        }
    }
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