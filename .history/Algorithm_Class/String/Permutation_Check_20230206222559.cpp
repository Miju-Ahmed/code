#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=pow(2,31);

int main()
{
    string a,s;
    cin>>a>>s;
    ll s=0,c=0,j=0,pcv=0,b;
    for(int i=a.size()-1; i>=0; i--)
    {
        s += ((int)a[i]-97)*pow(26,j);
        j++;
    }
    j=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        c += ((int)s[i]-97)*pow(26,j);
        j++;
    }
    if(c==s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(int i=1; i<s.size(); i++)
        {
            pcv = ((int)s[i-1]-97)*pow()
            c = c - 
        }
    }
}