#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mx LLONG_MAX
#define mn LLONG_MIN

void solve()
{
    int n;      cin>>n;
    string s;   cin>>s;
    vector<bool>st(n+1);

    ll ans = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n&&s[j-1]=='0'; j += i)
        {
            if(!st[j])
            {
                ans += i;
                st[j] = 1;
            }
            
        }
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