#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
    string s;   cin>>s;

    ll hash,p=31,power=1;
    for(int i=0; i<s.size()-1; i++)
    {
        hash = (hash+(s[i]-'a'+1)*power)%mod;
        power = (power*p)%mod;
    }
}