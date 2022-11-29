#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve()
{
    int n,q;
    cin>>n>>q;
    string s, sb;
    cin>>s;
    sb = "abc";
    int p,t=0;
    char c;
    for(int i=0; i<q; i++)
    {
        cin>>p>>c;
        s[p-1] = c;
        t=0;
        for(int j=0; j<n; j++)
        {
            if(s[j]==sb[0])
            {
                for(int k=1; k<3; k++)
                {
                    if(sb[k]!=s[k+j])
                    {
                        break;
                    }
                    if(k==2)
                    {
                        t++;
                    }
                }
            }
        }
        cout<<t<<endl;
    }
}

int main()
{
    solve();
    return 0;
}