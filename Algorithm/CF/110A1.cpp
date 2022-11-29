#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    ll n;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        if(n%10==4||n%10==7)
            c++;
        n/=10;
    }
    if(c==4||c==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}