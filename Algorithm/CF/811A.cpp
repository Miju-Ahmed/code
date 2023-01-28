#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    ll a,b,ta,tb;   cin>>a>>b;
    ll i=1;
    while(a>=i||b>=i)
    {
        if(i%2!=0)
        {
            a = a-i;
            if(a<0)
            {
                cout<<"Vladik"<<endl;
                return;
            }
            i++;
            if(b<i)
            {
                cout<<"Valera"<<endl;
                return;
            }
        }
        else
        {
            b = b-i;
            if(b<0)
            {
                cout<<"Valera"<<endl;
                return;
            }
            i++;
            if(a<i)
            {
                cout<<"Vladik"<<endl;
                return;
            }
        }
    }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
