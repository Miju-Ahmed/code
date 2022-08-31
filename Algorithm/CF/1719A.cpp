#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin>>n>>m;
    long long s = m+n;
    if(s%2==0)
        cout<<"Tonya"<<endl;
    else
        cout<<"Burenka"<<endl;
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