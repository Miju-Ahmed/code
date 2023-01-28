#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    string s = "314159265358979323846264338327";
    string a;   cin>>a;
    int c=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==s[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
