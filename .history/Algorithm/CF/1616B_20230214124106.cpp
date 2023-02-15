#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b,ans;
    ans = ans + s[0];
    b[0] = s[0];
    for(int i=1; i<n; i++)
    {
        b = b + s[i];
        if(ans>b)
            ans = ans+ b;
        //cout<<b<<endl;
    }
    cout<<ans<<reverse(ans.begin(),ans.end())<<
    cout<<endl;
    //cout<<b<<endl;
    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}