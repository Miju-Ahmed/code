#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   cin>>s;
    int c=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if((s[i]-'0')+(s[i+1]-'0')>1=0)
        {
            c=1;
            break;
        }
    }
    
}