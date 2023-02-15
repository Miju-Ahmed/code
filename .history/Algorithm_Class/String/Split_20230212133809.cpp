#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    set<char>a,b;
    vector<int>c,d;
    int ans=0,index=
    for(int i=0; i<n-1; i++)
    {
        a.insert(s[i]);
        b.insert(s[n-i-1]);
        c.push_back(a.size());
        d.push_back(b.size());

    }
}