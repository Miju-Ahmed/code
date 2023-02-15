#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b,ans;
    ans[0]=s[0];
    b[0] = s[0];
    for(int i=1; i<n; i++)
    {
        b[i]=s[i];
        if(ans>b)
            ans = ans+ b;
    }
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i];
    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}