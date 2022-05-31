#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,x,y;
    cin>>n;
    if(n<4|| n%2!=0)
        cout<<"-1"<<endl;
    else{
        x = n/6;
        if(n%6!=0)
            x = x + 1;
        y = n/4;
        cout<<x<<" "<<y<<endl;
    }
    
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