#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int c=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            a[i+1] = a[i];
            
            c++;
        }
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<", ";
    cout<<endl;
    cout<<c<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}