#include<bits/stdc++.h>
using namespace std;

string findLCM(string s1,string s2)
{
    string x = s1, y = s2;
    while(x.length()!=y.length())
    {
        if(x.length()<y.length())
            x+=s1;
        else
            y+=s2;
    }
    if(x==y)    return x;
    return "";
}

void solve()
{
    string s1,s2;   cin>>s1>>s2;
    string ans = findLCM(s1,s2);

    if(ans=="")
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
        wh
}