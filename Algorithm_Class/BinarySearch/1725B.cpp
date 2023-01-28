#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n,d;
    cin>>n>>d;
    int p[n];
    for(int i=0; i<n; i++)  cin>>p[i];

    sort(p, p+n);
    int c=0;
    int i=n-1;
    while(p[i]!=-1)
    {
        int m=p[i];
        if(m>d)
        {
            c++;
            p[i]=-1;
        }
        else if(p[i]!=-1&&m<d)
        {
            
        }
    }
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
