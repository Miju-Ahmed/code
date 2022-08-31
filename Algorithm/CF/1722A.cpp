#include<bits/stdc++.h>
#include<string>
#include<string.h>
using namespace std;

void solve()
{
    string s, n;
    int k;
    cin>>k;
    n = "Timur";
    vector<string> v, v2;
    cin>>s;
    int p=0;
    v.push_back(s);
    v2.push_back(n);
    sort(v[0].begin(), v[0].end());
    sort(v2[0].begin(), v2[0].end());
    if(k!=5)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        if(v[0]==v2[0])
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}