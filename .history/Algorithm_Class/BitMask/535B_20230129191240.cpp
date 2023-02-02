#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
*/

/*
2^1 + 2^2 + 2^3 + ...x
= (2*(2^(x-1)-1))/(2-1)
=2^x-2
=(1<<x)-2
*/

void solve()
{
    ll n;  cin>>n;
    ll c=0,c1=0,c2=0;
    while(n>0)
    {
        int x = n%10;
        if(x==7)
            c2 += pow(2,c);
        c++;
        n/=10;
    }
    c1 = (1<<c)-2;  
    cout<<(c1+c2+1)<<endl;
}

int main()
{
    solve();
    return 0;
}