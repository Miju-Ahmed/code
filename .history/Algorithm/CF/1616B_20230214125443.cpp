#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b,ans,ans1;
    ans1 = ans1 + s[0];
    b = b + s[0];
    for(int i=1; i<n; i++)
    {
        b = b + s[i];
        ans = b + reverse(b);
        if(ans>b)
        {
            ans = ans+ b;
        }
        cout<<b<<" ";
        cout<<ans<<" ";
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