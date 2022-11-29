#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin>>n>>s;

    string s1 = "";
    for(int i=n-1; i>=0;)
    {
        if(s[i]=='0')
        {
            int n1 = (int)(s[i-2] - '0');
            int n2 = (int)(s[i-1] - '0');
            char c = (char)('a' + n1*10 + n2 - 1);
            s1.push_back(c);
            i-=3;
        }
        else
        {
            int n1 = (int)(s[i]-'1');
            char c = (char) (n1 + 'a');
            s1.push_back(c);
            i--;
        }
    }
    reverse(s1.begin(), s1.end());
    cout<<s1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}