#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s,t;
    cin>>s>>t;
    int p=0,c=0;
    for(int i=0; i<t.size(); i++)
    {
        for(int j=p; j<t.size(); j++)
        {
            if(t[i]==s[j])
            {
                p=j+1;
                c=c+1;
                break;
            }
        }
    }

    cout<<"c: "<<c<<endl;

    cout<<"Size of t: "<<t.size()<<endl;

    if(c==t.size())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int k;
    cin>>k;
    while (k--)
    {
        solve();
    }

    return 0;
    
}