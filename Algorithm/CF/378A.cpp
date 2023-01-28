#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int a, b;   cin>>a>>b;
    int x=0,y=0,z=0,m,n;
    for(int i=1; i<=6; i++)
    {
        m = a-i;    n = b-i;
        if(m<0) m = -m;
        if(n<0) n = -n;
        if(m<n) x++;
        else if(n<m)    y++;
        else    z++;
    }
    cout<<x<<" "<<z<<" "<<y<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
