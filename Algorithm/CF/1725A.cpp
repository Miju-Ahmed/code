#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin>>n>>m;
    if(m==1)
        cout<<(n-1)<<endl;
    else if(n==1)
        cout<<(m-1)<<endl;
    else
        cout<<(n*(m-1))<<endl;
    return 0;
}