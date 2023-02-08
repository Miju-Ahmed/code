#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e31;

int main()
{
    cout<<mod<<endl;
    string a,s;
    cin>>a>>s;
    ll sum=0.0,c=0.0,j=0.0,pcv=0.0,b;
    b = a.size()-1;
    for(int i=a.size()-1; i>=0; i--)
    {
        sum += ((ll)a[i]-97)*pow(26,j);
        sum = sum%mod;
        j++;
    }
    j=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        c += ((ll)s[i]-97)*pow(26,j);
        c = c%mod;
        j++;
    }
    if(c==sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(int i=1; i<s.size()-b; i++)
        {
            pcv = ((int)s[i-1]-97)*pow(26,b);
            c = c - pcv;
            c = (c*10)%mod;
            c = (c + ((ll)s[b+1]-97))%mod;
            cout<<c<<endl;
            if(c==sum)
            {
                cout<<"Found"<<endl;
                break;
            }
        }
    }
}