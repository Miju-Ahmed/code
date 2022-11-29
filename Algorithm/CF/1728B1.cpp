#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1, value = n-2; i<=n-2; i++, value--)
    {
        a[i] = value;
    }
    a[n-1] = n-1;
    a[n] = n;
    if(n%2==1)
    {
        swap(a[1], a[2]);
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}