#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;      cin>>n;
    string s;   cin>>s;
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            c++;
            for(int j=i+1; j<n; j++)
            {
                if(s[j]>='A'&&s[j]<='Z')
                {
                    i = j+1;
                    break;
                }
            }
        }
    }
    cout<<c<<endl;
}

int main()
{
    Faster;
    solve();
    
    return 0;
}