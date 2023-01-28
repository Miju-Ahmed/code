#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)==c)    cout<<"YES"<<endl;
    else if((c+b)==a)    cout<<"YES"<<endl;
    else if((a+c)==b)    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
