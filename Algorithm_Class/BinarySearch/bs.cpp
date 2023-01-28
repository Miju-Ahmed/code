#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

int binary_search(ll a[], int f, int l, int x)
{
    if(l>=f)
    {
        int m = f + (l-f)/2;
        if(a[m]==x) return m;
        else if(a[m]>x) return binary_search(a,f,m-1,x);
        return binary_search(a, m+1, l, x);
    }
    return -1;
}

void solve()
{
    int n,q;
    cin>>n>>q;
    ll a[n];
    for(int i=0; i<n; i++)  cin>>a[i];

    int x;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        int p=0;
        p=binary_search(a,0,n-1,x);
        if(p==0)    cout<<"-1"<<endl;
        else    cout<<p<<endl;
    }
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
