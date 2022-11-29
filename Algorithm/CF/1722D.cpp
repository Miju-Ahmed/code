#include<bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> d;
    ll total = 0;
    int minimumchange = 0;
    for(int i=0; i<n; i++)
    {
        ll L = i;
        ll R = n-i-1;
        if(s[i]=='L')
        {
            if(R>L)
            {
                minimumchange++;
                total += R;
                d.push_back(R-L);
            }
            else
            {
                total += L;
            }
        }
        else
        {
            if(L>R)
            {
                minimumchange++;
                d.push_back(L-R);
                total+=L;
            }
            else
            {
                total += R;
            }
        }
    }

    vector<ll> ans(n+1);
    for(int i= minimumchange; i<=n; i++)
    {
        ans[i] = total;
    }

    sort(d.begin(), d.end(), greater<ll>());

    for(int i=minimumchange -1; i>=1; i--)
    {
        total -= d.back();
        d.pop_back();
        ans[i] = total;
    }

    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
    }
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