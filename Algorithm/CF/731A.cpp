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
    char a[52]; int sum=0,temp=0,l=51,r=0;
    for(int i=0; i<26; i++) a[i] = 'a'+i;
    for(int i=26; i<52; i++) a[i] = 'a'+i-26;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(s[i]==a[j])
            {
                while(a[l]!=s[i])
                {
                    l--;
                    if(l<0)
                        l=51;
                }
                while(a[r]!=s[i])
                {
                    r++;
                    if(r>51)
                        l=0;
                }
                if(l<r) sum+=l;
                else sum+=r;
                cout<<sum<<" "<<l<<" "<<r<<endl;
                break;
            }
        }
    }
    cout<<sum<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
