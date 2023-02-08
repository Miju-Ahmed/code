#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll mod = 1e9+7;
//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    string s,c; cin>>s>>c;
    ll k;   cin>>k;
    set<pair<ll,ll>>st;
    for(int i=0; i<s.size(); i++)
    {
        ll hash1=0, hash2=0;
        ll p1=31,p2=29;
        ll pow1=1,pow2=1;
        ll bc=0;
        for(int j=i; j<s.size(); j++)
        {
            bc = (c[s[j]-'a']=='0'?1:0);
            if(bc>k)    break;
            hash1 = (hash1 + (s[j]-'a'+1)*pow1)%mod;
            hash2 = (hash2 + (s[j]-'a'+1)*pow2)%mod;
            st.insert(make_pair(hash1,hash2));
        }

    }
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
