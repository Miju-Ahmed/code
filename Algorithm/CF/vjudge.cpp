#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

void solve()
{
    ll i=0,j,len,b,d,k;
    string a;
    cin>>a; cin>>b;
    d=0;
    if(a[0]=='-')   j=1;
    else j=0;
    len = a.size();
    for(; j<len; j++)
    {
        d = d*10+(a[j]-'0');
        d = d%b;
    }
    cout<<"Case "<<i<<"; ";
    if(d)   cout<<"not divisible"<<endl;
    else    cout<<"divisible"<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}