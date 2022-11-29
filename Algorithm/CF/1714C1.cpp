#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;      cin>>n;
    int a[10];

    if(n<=9)
        cout<<n<<endl;
    else
    {
        int k=1;
        ll r=0;
        for(int i=9; i>0; i--)
        {
            if(i<=n)
            {
                r = r + i*k;
                n = n - i;
                k*=10;
            }
        }
        cout<<r<<endl;
    }
}

int main()
{
    Faster;
    int t;      cin>>t;
    while(t--)  solve();
    return 0;
}