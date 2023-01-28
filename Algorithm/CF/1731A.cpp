#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n;  cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)  cin>>a[i];

    for(int i=1; i<n; i++)
    {
        a[0] = a[0]*a[i];
        a[i]=1;
    }
    ll sum=0;
    for(int i=0; i<n; i++)
        sum += a[i];
    cout<<sum*2022<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
