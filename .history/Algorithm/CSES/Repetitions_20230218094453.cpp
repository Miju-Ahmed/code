#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    string s;   cin>>s;
    int a=0,c=0,t=0,g=0,temp=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            temp++;
        else
            t=0;
        if(a<t)
            a=t;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='')
            t++;
        else
            t=0;
        if(a<t)
            a=t;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            t++;
        else
            t=0;
        if(a<t)
            a=t;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            t++;
        else
            t=0;
        if(a<t)
            a=t;
    }
    
}