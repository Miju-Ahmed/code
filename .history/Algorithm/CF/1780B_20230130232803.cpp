#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n;  cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)  cin>>a[i];
    int k=2,s1=0,s2=0;
    int ans=0,temp;
    for(int i=0; i<n; i++)
    {
        
    }

}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
