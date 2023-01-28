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
    int n,r=0,c=0;  cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]=='C')
            {
                for(int k=j+1; k<n; k++)
                {
                    if(a[i][k]=='C')
                        r++;
                }
            }
        }
    }
    
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i][j]=='C')
            {
                for(int k=i+1; k<n; k++)
                {
                    if(a[k][j]=='C')
                        c++;
                }
            }
        }
    }
    cout<<c+r<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
