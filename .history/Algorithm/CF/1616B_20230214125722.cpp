#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b,ans,ans1;
    ans = ans + s[0];
    b = b + s[0];
    for(int i=1; i<n; i++)
    {
        b = b + s[i];
        for(int j=0; j<b.size(); j++)
            ans1[i] = b[i];
        for(int j=b.size()-1; j>=0; j--)
            ans
        if(ans1<ans)
        {
            ans = ans1;
        }
    }
    cout<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i];
    for(int i=ans.size()-1; i>=0; i--)
        cout<<ans[i];
    cout<<endl;
    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}