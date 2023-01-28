#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    ll n,c=1;   cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=1; i<n; i++)
    {
        if(s[i-1][1]==s[i][0])
            c++;
    }
    cout<<c<<endl;
}

int main()  //01793515951- Aman
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
