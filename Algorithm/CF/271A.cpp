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
    int y, x;   cin>>y;
    int p=0,t;
    int a[4];
    for(int i=y+1; ; i++)
    {
        p=0,t=i;
        a[0]=t%10;  t/=10;
        a[1]=t%10;  t/=10;
        a[2]=t%10;  t/=10;
        a[3]=t%10;  t/=10;
        for(int j=0; j<3; j++)
        {
            for(int k=j+1; k<4; k++)
            {
                if(a[j]==a[k])
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==0)
        {
            cout<<i<<endl;
            return;
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
