#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    Faster;
    int a,b,c,d;
    ll ans=0;
    cin>>a>>b>>c>>d;
    int c1 = min(a,min(c,d));
    a = a-c1;
    if(a<=0)
    {
        ans = 256*c1;
    }
    else
    {
        int c2 = min(a,b);
        ans = c1*256+c2*32;
    }
    cout<<ans<<endl;
    return 0;
}