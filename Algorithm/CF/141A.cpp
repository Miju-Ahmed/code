#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    sort(s3.begin(), s3.end());
    s1 = s1 + s2;
    sort(s1.begin(), s1.end());
    if(s1==s3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
