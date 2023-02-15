#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    string b,ans;
    ans = ans + s[0];
    ans = ans + s[0];
    b = b + s[0];
    for(int i=1; i<n; i++)
    {
        string ans1,temp;
        b = b + s[i];
        temp = temp + b;
        ans1 = ans1 + temp;
        reverse(temp.begin(),temp.end());
        ans1 = ans1+temp;
        if(ans1<ans)
        {
            ans = ans1;
        }
    }
    cout<<ans
    cout<<endl;
    
}

int main()
{
    int t;  cin>>t;
    while(t--)  solve();
    return 0;
}