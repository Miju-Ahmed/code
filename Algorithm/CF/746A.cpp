#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int a,b,c;  cin>>a>>b>>c;
    int sum=0;
    for(int i=a; i>0; i--)
    {
        if(b>=(2*i)&&c>=(4*i))
        {
            sum = 7*i;
            break;
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
