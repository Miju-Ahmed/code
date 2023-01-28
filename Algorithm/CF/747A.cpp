#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

void solve()
{
    ll n,a,b,ta,tb;  cin>>n;
    ll d = inf;
    if(prime(n)==1)
        cout<<1<<" "<<n<<endl;
    else
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                ta = i;
                tb = n/i;
                if((tb-ta)<d&&(tb-ta)>=0)
                {
                    a = i;
                    b = tb;
                }

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
