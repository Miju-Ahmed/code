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
    int n,k;    cin>>n>>k;
    vector<int>v;   int x;
    for(int i=0; i<n; i++){cin>>x; v.push_back(x);}
    vector<int>v1,v2;
    int c=0;
    v1 = v;
    sort(v1.begin(), v1.end());
    if(v1==v){cout<<0<<endl;return;}
    else
    {
        for(int i=0; i<n; i++)
        {

        }
    }
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
