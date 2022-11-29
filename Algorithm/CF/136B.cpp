#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int a,b,c, ad[20]={0}, cd[20]={0}, an(0),cn(0);
    cin>>a>>c;
    while(a!=0)
    {
        ad[an++]=a%3;
        a/=3;
    }
    while(c!=0)
    {
        cd[cn++] = c%3;
        c/=3;
    }
    int tor(0);
    for(int i=max(an,cn)-1; i>=0; i--)
    {
        tor = tor*3 + (cd[i]+3-ad[i])%3;
    }
    cout<<tor<<endl;
    return 0;
}