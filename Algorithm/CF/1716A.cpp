#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, r;
    cin>>n;
    int k;
    k = n%3;
    if(k==0)
    {
        r = n/3;
    }
    else if(k==1)
    {
        r = (n-2)/3 + 2;
    }
    else
    {
        r = n/3 + 1;
    }
    cout<<r<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}