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
        string ans1 = "";
        b = b + s[i];
        ans1 = ans1+b;
        int 
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