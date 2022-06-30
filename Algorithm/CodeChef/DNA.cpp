#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        switch (s[i])
        {
        case 'A':
            s[i] = 'T';
            break;
        case 'T':
            s[i] = 'A';
            break;
        case 'C':
            s[i] = 'G';
            break;
        case 'G':
            s[i] = 'C';
            break;
        
        default:
            break;
        }
    }

    cout<<s;
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}