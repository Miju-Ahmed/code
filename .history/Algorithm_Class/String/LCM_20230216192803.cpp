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
    if(x==)
}

int main()
{
    string s1,s2;   cin>>s1>>s2;
    string ans = findLCM(s1,s2);
}