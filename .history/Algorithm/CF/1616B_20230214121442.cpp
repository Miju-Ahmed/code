#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b;
    string ans="";
    for(int i=0; i<n; i++)
    {
        int p=0;
        for(int j=0; j<=i; j++)
        {
            b[p] = s[i];
            p++;
        }
        int t=p
        for(int k=p-1; k>=0; k--)
        {
            b[t]=b[k];
            t++;
        }
        if(ans<b)
            ans = 
    }

    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}