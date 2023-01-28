#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int a, b;   cin>>a>>b;
    int s1,s2;
    if(a>b)
    {
        cout<<b<<" "<<(a-b)/2<<endl;
    }
    else if(a<b)
    {
        cout<<a<<" "<<(b-a)/2<<endl;
    }
    else
    {
        cout<<a<<" "<<0<<endl;
    }
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}