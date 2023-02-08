#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e16;

int main()
{
    string a,s;
    cin>>a>>s;
    ll sum=0,c=0,j=0,pcv=0,b;
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
    cout<<"sum: "<<sum<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(c==sum)
        {
            cout<<"Found"<<endl;
        }
        else
        {
            j=b;
            c=0;
            for(int k=i+1; k<i+b+; k++)
            {
                c+=((int)s[k]-97)*pow(26,j);
                cout<<s[k]<<" ";
                j--;
                c = c%mod;
            }
            cout<<endl;
            cout<<s[i]<<" ";
            cout<<c<<endl;
        }
    }
}