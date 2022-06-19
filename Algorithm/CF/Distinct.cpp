#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int c = 0;
    int e = 0;
    for(auto it: mp)
    {
        if(it.second%2==1) c++;
        else e++;
    }
    cout<<c + (e/2)*2<<endl;
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