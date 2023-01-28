#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    ll n;   cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=0; i<n/2; i++)
            cout<<2<<" ";
        cout<<endl;
    }
    else
    {
        if(n==3)
        {
            cout<<1<<"\n"<<3<<endl;
            return;
        }
        else
        {
            cout<<((n-3)/2)+1<<endl;
            for(int i=1; i<=(n-3)/2; i++)
            {
                cout<<"2"<<" ";
            }
            cout<<"3"<<endl;
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
