#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b;
    string ans[0]=s[0];
    string b[0] = s[0];
    for(int i=1; i<n; i++)
    {
        b[i]=s[i];
        if(ans>b)
            b.copy(ans,b.size());
    }
    cout<<ans<<endl;
    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}