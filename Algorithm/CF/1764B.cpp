#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int maxn = 1000005;
int a[maxn];
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n;      cin>>n;
    int tmp=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        tmp = gcd(tmp, a[i]);
    }
    cout<<(a[n]/tmp + (a[1]==0))<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
