#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    ll n;   cin>>n;
    if(n%2==0)
        cout<<4<<" "<<n-4<<endl;
    else
    {
        for(int i=4; i<n; i++)
        {
            int x = prime(i);
            int y = prime(n-i);
            if(x==-1&&y==-1)
            {
                cout<<i<<" "<<n-i<<endl;
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
