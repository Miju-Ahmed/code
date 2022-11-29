#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int c=0;
    string x;
    x+=s[0]; x+=s[1]; x+=s[2];

    if(x=="abc") c++;
    for(int i=3; i<s.size(); i++)
    {
        x.erase(x.begin());
        x+=s[i];
        if(x=="abc") c++;
    }

    while(q--)
    {
        int p;
        char ch;
        cin>>p>>ch;
        p--;
        int y = p-2;
        if(p-2<0) y=0;
        for(int i=y; i<=p; i++)
        {
            string z;
            z+=s[i];
            z+=s[i+1];
            z+=s[i+2];
            if(z=="abc") c--;
        }
        s[p]=ch;
        for(int i=y; i<=p; i++)
        {
            string z;
            z+=s[i];
            z+=s[i+1];
            z+=s[i+2];
            if(z=="abc") c++;
        }
        cout<<c<<endl;
    }
}

int main()
{
    solve();
    return 0;
}