#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=1e32;

int main()
{
    string a,s;
    cin>>a>>s;
    ll sum=0,c=0,j=0,pcv=0,b;
    b = a.size()-1;
    for(int i=a.size()-1; i>=0; i--)
    {
        sum += ((int)a[i]-97)*pow(26,j);
        j++;
    }
    j=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        c += ((int)s[i]-97)*pow(26,j);
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
            c = c*10;
            c = c + ((int)s[b+1]-97);
            cout<<c<<endl;
            if(c==sum)
            {
                cout<<"Found"<<endl;
                break;
            }
        }
    }
}