#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e16;

int main()
{
    string a,s;
    cin>>a>>s;
    int a[s.size()];
    ll sum=0,c=0,j=0,pcv=0,b,f=0,l=0;
    b = a.size()-1;
    for(int i=a.size()-1; i>=0; i--)
    {
        sum += ((ll)a[i]-97)*pow(26,j);
        sum = sum%mod;
        j++;
    }
    cout<<sum<<endl;
    j=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        c += ((ll)s[i]-97)*pow(26,j);
        c = c%mod;
        j++;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(c==sum)
        {
            a[]
            break;
        }
        else
        {
            c = (c-((int)s[i]-97)*pow(26,b))*26+((int)s[i+b+1]-97);
            c = c%mod;
        }
    }
    if(f==1)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}