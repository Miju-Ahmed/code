#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int ans=0;

    for(int i=2; i<=n; i++)
        if(a[i]!=0&&a[i-1]==0)
            ans++;
    if(a[1]!=0) ans++;
    ans = min(ans,(int)2);
    cout<<ans<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
