#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    string s;
    int n;      cin>>n>>s;
    int open=0,close=0,ans=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='('&&s[i+1]==')')
        {
            i++;
            continue;
        }
        if(s[i]=='(')
            open++;
        if(s[i]==')')
        {
            close++;
            if(open<close)
            {
                ans++,close--;
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}