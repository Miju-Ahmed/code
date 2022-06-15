#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int r;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.length(); i++)
    {
        sum = sum + (int)s[i];
    }
    r = (int)(sum/(s.length()));
    if(r>32&&r<126)
        cout<<(char)r<<endl;
    return 0;
}