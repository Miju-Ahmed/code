#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}


int main()
{
    Faster;
    ll _=1;      cin>>_;
    for(int i=1; i<=_; i++)
    {
        string a;   cin>>a;
        ll b,d=0,j;   cin>>b;
        if(a[0]=='-') j=1;
        else j=0;
        for(; j<a.size(); j++)
        {
            d = d*10 + (a[j]-'0');
            d = d%b;
        }
        cout<<"Case "<<i<<": ";
        if(d)   cout<<"not divisible"<<endl;
        else    cout<<"divisible"<<endl;
    }
    
    return 0;
}
