#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e16;
ll base = 1e6;

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        string a,s;
        cin>>s>>a;
        int m[s.size()];
        ll sum=0,c=0,j=0,pcv=0,b,f=0,l=0;
        b = a.size()-1;
        for(int i=a.size()-1; i>=0; i--)
        {
            sum += ((ll)a[i]-97)*pow(base,j);
            sum = sum%mod;
            j++;
        }
        j=0;
        for(int i=a.size()-1; i>=0; i--)
        {
            c += ((ll)s[i]-97)*pow(base,j);
            c = c%mod;
            j++;
        }
        for(int i=0; i<s.size()-b-1; i++)
        {
            if(c==sum)
            {
                m[l] = i+1;
                l++;
            }
            c = (c-((int)s[i]-96)*pow(base,b))*base+((int)s[i+b+1]-97);
            c = c%mod;
        }
        if(l!=0)
        {
            cout<<l<<endl;
            for(int i=0; i<l; i++)
            {
                cout<<m[i]<<" ";
            }
            cout<<endl;
        }
        else    cout<<"Not Found"<<endl;
    }
}