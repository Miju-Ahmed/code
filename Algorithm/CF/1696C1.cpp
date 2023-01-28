#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    ll n,m;            cin>>n>>m;
    vector<ll>a(n);    vector<ll>ca(n,1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        while(a[i]%m==0)
        {
            a[i] = a[i]/m;
            ca[i] = ca[i]*m;
        }
    }

    int k;              cin>>k;
    vector<ll>b(k);    vector<ll>cb(k,1);
    for(int i=0; i<k; i++)
    {
        cin>>b[i];
        while(b[i]%m==0)
        {
            b[i] = b[i]/m;
            cb[i] = cb[i]*m;
        }
    }

    int i=0, j=0;
    while(i<n || j<k)
    {
        if(i>n || j>k){cout<<"NO"<<endl; return;}
        if(a[i]!=b[j]){cout<<"NO"<<endl; return;}

        ll x = min(ca[i], cb[j]);
        ca[i] -= x;
        cb[j] -= x;
        if(ca[i]==0)    i++;
        if(cb[j]==0)    j++;
    }
    cout<<"YES"<<endl;  
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
