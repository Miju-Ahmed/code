#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    vector<int>s,v;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        v.push_back(x);
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    int c=0;
    if(s==v)
        cout<<c<<endl;
    else
    {
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v[i]>v[j])
                {
                    int t=v[i];
                    v[i]=v[j];
                    v[j]=t;
                    c++;
                }
            }
            if(v==s)
            {
                cout<<c<<endl;
                break;
            }
        }
    }
}