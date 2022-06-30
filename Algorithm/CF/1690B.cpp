#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    ll a[n],b[n];

    for(int i=0; i<n; i++)
        cin>>a[i];
    ll m=100000000000;
    ll k=0;
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        if(b[i]==0)
        {
            k = max(k, a[i]);
        }
        else
        {
            m = min(m,b[i]);
        }
    }

    int dif = 0;
    for(int i=0; i<n; i++)
    {
        if(b[i]==m)
        {
            dif = a[i]-m;
            break;
        }
    }

    int p=0;
    for(int i=0; i<n; i++)
    {
        if((a[i]-b[i])!=dif&&b[i]!=0)
        {
            p = 1;
            break;
        }
        else if(a[i]-b[i]<0)
        {
            p=1;
            break;
        }
        else if(k>dif)
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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