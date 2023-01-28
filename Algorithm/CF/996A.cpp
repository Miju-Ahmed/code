#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    ll n;   cin>>n;
    int c = 0;
    while(n!=0)
    {
        if(n==1||n==5||n==10||n==20||n==100)
        {
            c++;
            break;
        }
        else if(n>100)
        {
            c = c + n/100;
            n = n%100;
        }
        else if(n>20)
        {
            c = c + n/20;
            n = n%20;
        }
        else if(n>10)
        {
            c = c + n/10;
            n = n%10;
        }
        else if(n>5)
        {
            c = c + n/5;
            n = n%5;
        }
        else if(n>1)
        {
            c = c + n/1;
            n = n%1;
        }
    }
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
