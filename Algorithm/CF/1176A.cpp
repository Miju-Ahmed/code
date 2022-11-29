#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    int c=0;
    
    while(n!=1)
    {
        if(n%2==0)
        {
            c++;
            n/=2;
        }
        else if(n%3==0)
        {
            c++;
            n = (n*2)/3;
        }
        else if(n%5==0)
        {
            c++;
            n = (n*4)/5;
        }
        else
        {
            c = -1;
            break;
        }
    }
    cout<<c<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}