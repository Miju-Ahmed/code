#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MX LONG_LONG_MAX

void solve()
{
    int n,c;       cin>>n>>c;
    int a[n], m[n+1]={0}, ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
            {
                m[a[i]]++;
                a[i]=0;
            }
        }
    }
    int mx = *max_element(m, m+n);
    int d[n];
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(m[i]!=0)
        {
            d[k]=m[i];
            k++;
        }
    }
    if(c>1)
    {
        if(c>n)
            ans = n;
        else
        {
            
        }
    }
    else
    {
        int i=0;
        while(n!=0)
        {
            ans++;
            n = n - d[i];
            i++;
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