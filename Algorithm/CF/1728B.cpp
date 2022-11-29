#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++)
        a[i] =  i+1;
    int p=0;
    for(int i=n-3; i>=0; i--)
    {
        b[p]=a[i];
        p++;
    }
    for(int i=0; i<n-2; i++)
    {
        a[i] = b[i];
    }
    if(n%2==1)
    {
        int x;
        x = a[0];
        a[0] = a[1];
        a[1] = x;
    }
    for(int i=0; i<n; i++)
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