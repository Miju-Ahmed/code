Here are present something problem

#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mx LLONG_MAX
#define mn LLONG_MIN

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    char b[n+1];
    for(int i=1; i<=n; i++)
        b[i] = s[i-1];

    ll sum = 0;
    ll m = 0;
    for(int i=1; i<=n; i++)
    {
        m=0;
        if(b[i]=='0')
        {
            for(int j=i; j<=n; j += i)
            {
                if(b[j]=='0')
                {
                    m = j;
                    b[j] = '1';
                }
            }
            sum += m;
        }
    }
    cout<<sum<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}