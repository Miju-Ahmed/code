#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b;
    string ans="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    for(int i=0; i<n; i++)
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
    }
    cout<<ans<<endl;

    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}