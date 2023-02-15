

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    if(s[0]==s[1])
    {
        cout<<s[0]<<s[0]<<endl;
        return;
    }

    int c=0;
    while(c<=n-1&&s[c+1]<=s[c]) c++;
    s = s.substr(0,c+1);
    cout<<s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}