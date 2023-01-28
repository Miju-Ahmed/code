#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    int l,d=m*2;
    int f=1,p,q=0,r;
    for(int i=1; i<=n; i++)
    {
        p=f;
        q = q+d;
        if(k>=p&&k<=q)
        {
            l = i;
            cout<<l<<" ";
            int c=0;
            for(int j=p; j<=q; j+=2)
            {
                if((j==k)||(j+1==k))
                    break;
                c++;
            }
            cout<<c+1<<" ";
            break;
        }
        f = q+1;
    }
    if(k%2==0)  cout<<"R"<<endl;
    else    cout<<"L"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
