#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n,z;
    cin>>n>>z;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int x; cin>>x;
        int y = x|z;
        ans = max(ans, y);
    }
    cout<<ans<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
