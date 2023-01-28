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
    int n,m,c=0,t=0,a,b,j;    cin>>n>>m;
    char g[n][m];
    for(int i=0; i<n; i++)
    {
        t=c;
        c=0;
        for(j=0; j<m; j++)
        {
            cin>>g[i][j];
            if(g[i][j]=='*')
            {
                c++;
            }
        }
        if(c>t)
        {
            t=c;
        }
    }
    for(int i=1; i<=n; i++)
    {
        c=0;
        for(j=1; j<=m; j++)
        {
            if(g[i][j]=='*')
            {
                c++;
            }
        }
        b=j;
        if(c==t)
        {
            for(int k=j; k>=1; k--)
            {
                if(g[i][k]=='*')
                {
                    a=k;
                }
            }
            break;
        }
    }
    cout<<t<<" "<<a<<" "<<b<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
