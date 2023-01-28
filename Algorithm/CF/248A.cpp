//Incompleted
#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n,l,r,lo=0,lc=0,ro=0,rc=0,lt=0,rt=0;  cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r;
        if(l==0)    lo++;
        else    lc++;
        if(r==0)    ro++;
        else    rc++;
    }
    if(lo>lc)   lt=n-lo;
    else    lt = n-lc;
    if(ro>rc)   rt=n-ro;
    else    rt = n-rc;
    cout<<lt+rt<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
