#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int n,m,k;  cin>>n>>m>>k;
    int c1=0,c2=0,t1=k,t2=k;
    int a[n+1],m1=1,m2=1;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=m-1; i>=1; i--)
    {
        if(a[i]!=0&&t1>=a[i])
        {
            for(int j=i; j<m; j++)
                c1+=10;
            break;
        }
    }
    for(int i=m+1; i<=n; i++)
    {
        if(a[i]!=0&&t2>=a[i])
        {
            for(int j=i; j>m; j--)
            {
                c2+=10;
            }
            break;
        }
    }
    if(c1==0)   cout<<c2<<endl;
    else if(c2==0)  cout<<c1<<endl;
    else if(c1>c2)  cout<<c2<<endl;
    else   cout<<c1<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
