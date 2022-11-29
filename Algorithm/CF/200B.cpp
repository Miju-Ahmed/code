#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    double p[n];
    for(int i=0; i<n; i++)
        cin>>p[i];
    double sum=0;
    double ans = 0;
    for(int i=0; i<n; i++)
        sum+=p[i];
    ans = (sum/n);
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}