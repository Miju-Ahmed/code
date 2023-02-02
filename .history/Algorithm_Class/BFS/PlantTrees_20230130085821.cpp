#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n,k;    cin>>n>>k;
    int x[n];
    for(int i=0; i<n; i++)
        cin>>x[i];
    vector<vector<int>>v;
    for(int i=0; i<k; i++)
    {
        int a,b;    cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
