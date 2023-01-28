#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int a[3],b[3],n;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    cin>>n;
    int s1 = a[0]+a[1]+a[2];
    int s2 = b[0]+b[1]+b[2];
    int c1=0, c2=0;
    int k1=s1%5;
    int k2=s2%10;
    c1 = s1/5;
    c2 = s2/10;
    if(k1!=0)   c1++;
    if(k2!=0)   c2++;
    if((c1+c2)<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
