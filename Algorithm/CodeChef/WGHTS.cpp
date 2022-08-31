#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int w, x, y, z;
    cin>>w>>x>>y>>z;
    if(w==x||w==y||w==z)
        cout<<" YES"<<endl;
    else if(w==(x+y)||w==(x+z)||w==(y+z))
        cout<<"YES"<<endl;
    else if(w==(x+y+z))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<enl;
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