#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a[4];
    for(int i=0; i<4; i++)
        cin>>a[i];
    int t=a[0];
    sort(a,a+4);
    for(int i=0; i<4; i++)
    {
        if(a[i]==t)
        {
            int k;
            k = 3-i;
            cout<<k<<endl;
        }
    }
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