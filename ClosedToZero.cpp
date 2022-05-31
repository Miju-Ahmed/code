#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int c=9993654;
    int t;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            t = 0-a[i];
        }
        else{
            t = a[i]-0;
        }
        if(c>t)
        {
            c = t;
        }
    }
    cout<<c<<endl;
}

int main()
{
    solve();
    return 0;
}