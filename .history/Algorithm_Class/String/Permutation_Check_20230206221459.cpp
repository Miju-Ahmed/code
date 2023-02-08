#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=pow(2,31);

int main()
{
    string a,b;
    //cin>>a>>b;
    ll s=0,c=0,j=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        s += (int)s[i]*pow(26,j);
        j++;
    }
}