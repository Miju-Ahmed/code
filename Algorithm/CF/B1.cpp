#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int n,s,r;  cin>>n>>s>>r;
    int d = s-r;
    vector<int>v;
    v.push_back(d);
    int t = r/(n-1);
    int sum = 0;
    for(int i=0; i<n-1; i++)
    {
        v.push_back(t);
        sum+=t;
    }
    int tem = r-sum;
    int j=1;
    while(tem--)
    {
        v[j]+=1;
        j++;
    }

    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
