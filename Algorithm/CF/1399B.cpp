#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n; cin>>n;
    ll a[n],b[n], s1=0, s2=0;
    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<n; i++)  cin>>b[i];

    sort(a,a+n);    sort(b,b+n);
    for(int i=1; i<n; i++)
    {
        s1 = s1 + abs(a[i]-a[0]);
        s2 = s2 + abs(b[i]-b[0]);
    }
    cout<<s1+s2-1<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}