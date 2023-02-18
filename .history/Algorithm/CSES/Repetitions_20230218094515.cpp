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
            temp=0;
        if(a<temp)
            a=temp;
    }
    
    
}