#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int p[2*n];
    set<int>a;
    for(int i=0; i<2*n; i++)
    {
        cin>>p[i];
        a.insert(p[i]);
    }
    for(auto& r: a)
        cout<<r<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}