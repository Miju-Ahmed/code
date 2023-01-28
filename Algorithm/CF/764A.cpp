#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n,m,z;
    cin>>n>>m>>z;
    int ans=0;
    vector<int>a;   vector<int>b;
    int i=1;
    while(m*i<=z)
    {
        a.push_back(m*i);
        i++;
    }
    i=1;
    while(n*i<=z)
    {
        b.push_back(n*i);
        i++;
    }
    for(i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            if(a[i]==b[j])
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
