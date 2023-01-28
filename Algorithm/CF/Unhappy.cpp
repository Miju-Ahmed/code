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
    string s;   cin>>s;
    int l = s.size();
    char a[l];
    int j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0'||s[i]=='1')
        {
            a[j]=s[i];
            j++;
        }
        else if(s[i]=='B')
        {
            if(j>0)
            {
                j--;
            }
        }
    }
    for(int i=0; i<j; i++)
        cout<<a[i];
    cout<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
