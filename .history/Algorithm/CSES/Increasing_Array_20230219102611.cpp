#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    vector<long long>s,v;
    for(int i=0; i<n; i++)
    {
        long long x;  cin>>x;
        v.push_back(x);
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    int c=0;
    if(s==v)
        cout<<c<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v[i]>v[j])
                {
                    long long t=v[i];
                    v[i]=v[j];
                    v[j]=t;
                    c++;
                }
            }
        }
        cout<<c-1<<endl;
    }
}