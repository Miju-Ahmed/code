#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    string s;   cin>>s;
    char ch=s[0];
    if(ch>='a'&&ch<='z')
    {
        ch = toupper(ch);
        s[0]=ch;
        cout<<s<<endl;
        return;
    }
    cout<<s<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
