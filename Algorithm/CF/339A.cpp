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
    string s,a;   cin>>s;
    int s1=0,s2=0,s3=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')   s1++;
        else if(s[i]=='2')  s2++;
        else if(s[i]=='3')  s3++;
    }
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='1'&&s[i]<='3')
        {
            a+=s[i];
            a+='+';
        }
    }
    for(int i=0; i<a.size()-1; i++)
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
