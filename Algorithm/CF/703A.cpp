#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int n;  cin>>n;
    int x,y;
    int m=0,c=0,f=0;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x>y) m++;
        else if(y>x)    c++;
        else f++;
    }
    if(m>c) cout<<"Mishka"<<endl;
    else if(c>m)    cout<<"Chris"<<endl;
    else    cout<<"Friendship is magic!^^"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
