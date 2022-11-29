#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    ll n,sum=0,ans=0;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sum = sum/2;

    sort(a,a+n);
    ll c=0;
    for(int i=n-1; i>=0; i--)
    {
        ans += a[i];
        c++;
        if(ans>sum)
            break;
    }
    cout<<c<<endl;
    return 0;
}
