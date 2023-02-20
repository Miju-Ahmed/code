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
    long long c=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            c += v[i]-v[i+1];
            v[i+1] = 
        }
    }
    cout<<c<<endl;
}