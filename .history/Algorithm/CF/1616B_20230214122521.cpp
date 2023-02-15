#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b;
    string ans=s[0];
    for(int i=1; i<n; i++)
    {
        int p=0;
        for(int j=0; j<=i; j++)
        {
            b[p] = s[i];
            p++;
        }
        string temp = b;
        reverse(temp.begin(),temp.end());
        b+=temp;
        if(ans>b)
            ans = b;
        cout<<b<<endl;
    }

    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}