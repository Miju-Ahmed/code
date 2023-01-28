#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int n;  cin>>n;
    vector<int>v;
    string s;   cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        int k=0;
        if(s[i]=='B')
        {
            while(s[i]!='W'&&i<n)
            {
                k++;
                i++;
            }
            v.push_back(k);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
