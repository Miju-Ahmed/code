#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    int temp = a[0];
    for(int i=1; i<n-1; i++)
    {
        if(a[n-1]!=a[n-1])
        if(a[i]!=temp&&a[i+1]!=a[i])
        {
            cout<<a[i];
            break;
        }
    }
}

int main()
{
    solve();
    return 0;
}