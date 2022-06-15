#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    int even=0,odd=0;
    int o=0,e=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;

    }
   if(even>odd)
        cout<<odd<<endl;
    else
        cout<<even<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}