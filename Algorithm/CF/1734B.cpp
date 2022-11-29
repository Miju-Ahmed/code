#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mx LLONG_MAX
#define mn LLONG_MIN

void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j>1 and j<i)
                cout<<"0 ";
            else
                cout<<"1 ";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}