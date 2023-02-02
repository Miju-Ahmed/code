#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int a[4];    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int f=a[0],s=a[0],c=a[0];
    if(a[0]==0)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        c = c + a[2]-a[1];
        f = a[0];
        s = a[0];
        while(f>=0&&s>=0&&a[])
    }
    cout<<c<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
