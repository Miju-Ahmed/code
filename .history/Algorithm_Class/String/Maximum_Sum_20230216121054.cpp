#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   cin>>s;
    int c=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(((s[i]-'0')+(s[i+1]-'0'))>=10)
        {
            c=1;
            cout<<s[i]-'0'+s[i+1]-'0'<<endl;
            break;
        }
    }
    int pos=0;
    if(c==0)
    {
        cout<<(s[0]-'0')+(s[1]-'0');
        for(int i=2; i<s.size(); i++)
            cout<<s[i];
        cout<<endl;
    }
    else
    {
        
        for(int i=0; i<s.size()-2; i++)
            cout<<s[i];
        cout<<(s[s.size()-1]-'0')+(s[s.size()-2]-'0');
        cout<<endl;
    }
    return 0;
}