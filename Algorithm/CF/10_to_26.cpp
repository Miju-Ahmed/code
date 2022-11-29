#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t, r;
    char c;
    vector<char>a;
    cin>>n;
    while(n>=26)
    {
        t = n%26;
        if(t==0)
        {
            a.push_back('Z');
        }
        else
        {
            c = (char)(t + 'A'-1);
            a.push_back(c);
        }
        n/=26;
    }
    if(n%26==0)
        a.push_back('Z');
    else
    {
        c = (char)(n%26 + 'A'-1);
        a.push_back(c);
    }   
    reverse(a.begin(), a.end());
    for(int i=0; i<a.size(); i++)
        cout<<a[i];
}

int main()
{
    solve();
    return 0;
}