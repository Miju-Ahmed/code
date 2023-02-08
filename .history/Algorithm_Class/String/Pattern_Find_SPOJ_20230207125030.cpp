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
        for(int i=0; i<s.size()-b; i++)
        {
            if(c==sum)
            {
                m[l] = i+1;
                l++;
                f++;
                //i++;

            }
            c = (c-((int)s[i]-97)*pow(base,b))*base+((int)s[i+b+1]-97);
            c = c%mod;
        }
        if(f!=0)
        {
            cout<<f<<endl;
            for(int i=0; i<f; i++)
            {
                cout<<m[i]<<" ";
            }
            cout<<endl;
        }
        else    cout<<"Not Found"<<endl;
    }
}