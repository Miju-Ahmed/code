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
    int n,a,b;  cin>>n;
    if(n%2==0)
    {
        a = n/2-1;
        b = n/2 + 1;
        for(int i=2; i<=a; i++)
        {
            if(a%i==0&&b%i==0)
            {
                a--;
                b++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        a = n/2;
        b = n/2 + 1;
        for(int i=2; i<=a; i++)
        {
            if(a%i==0&&b%i==0)
            {
                a--;
                b++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
