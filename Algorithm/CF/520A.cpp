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
    int n,p=0;  cin>>n;
    string s;   cin>>s;
    string c = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
    //cout<<c.size();
    for(int i=0; i<c.size()-1; i+=2)
    {
        p=0;
        for(int k=0; k<s.size(); k++)
        {
            if(c[i]==s[k]||c[i+1]==s[k])
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
