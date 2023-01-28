#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int k,l,m,n,d,c=0;  cin>>k>>l>>m>>n>>d;
    int a[d+1]={0};
    for(int i=1; i<=d; i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        {
            a[i]=1;
        }
    }
    for(int i=1; i<=d; i++)
        if(a[i]==1)
            c++;
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
