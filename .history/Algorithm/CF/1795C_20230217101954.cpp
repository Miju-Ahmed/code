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
    int n;  cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int>b;
    vor(int i=0; i<n; i++)
        cin>>b[i];
    vector<int>pre;
    pre[0]=b[0];
    for(int i=1; i<n; i++)
        pre[i]=pre[i-1]+b[i];
    vector<int>freq,rem;
    for(int i=0; i<n; i++)
    {
        int val = a[i];
        if(i>0)
            val += pre[i-1];
        int ind = upper_bound(pre.begin(),pre.end())
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
