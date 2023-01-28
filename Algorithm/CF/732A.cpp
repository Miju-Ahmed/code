#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    ll k,r,temp; cin>>k>>r;
    int c=0;
    int t=0;
    int i=2;
    temp = k;
    while(t!=1)
    {
        if((temp%10==0)||((temp-r)%10==0))
        {
            c++;
            break;
        }
        else
        {
            temp = k*i;
            i++;
            c++;
        }
    }
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
