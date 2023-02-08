#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
   int t;   cin>>t;
   while(t--)
   {
        string s;   cin>>s;

        ll hash=0,power=31,p=31;
        hash = s[0]-'a'+1;
        for(int i=1; i<s.size(); i++)
        {
            hash = (hash+(s[i]-'a'+1)*power)%mod;
            power = (power*p)%mod;
        }
        cout<<hash<<endl;
   }

    
}