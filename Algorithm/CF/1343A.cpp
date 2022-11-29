#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n]={0};
    ll k = n/2;
    ll s1=2,s2=1;
    if(k%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        a[0]=2;
        for(int i=1; i<k; i++)
        {
            a[i] = a[i-1]+ 2;
            s1 = s1 + a[i];
        }
        a[k] = 1;
        for(int i=k+1; i<n-1; i++)
        {
            a[i] = a[i-1] + 2;
            s2 = s2 + a[i];
        }
    }
    a[n-1] = s1-s2;

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
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