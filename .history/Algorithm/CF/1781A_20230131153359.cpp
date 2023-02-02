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
    int w,d,h;  cin>>w>>d>>h;
    int a,b,f,g;    cin>>a>>b>>f>>g;

    int u[4],l[4],di[4];
    u[0] = f;   u[1] = w-f;
    u[2] = g;   u[3] = d-g;
    l[0] = a;   l[1] = w-a;
    l[2] = b;   l[3] = d-b;
    di[0] = abs(a-f);    di[1] = abs(d-g);

    di[3] = min(u[2]+l[2]+di[0], u[3]+l[3]+di[0]);
    di


    
    ans = h + ans;
    cout<<ans<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
