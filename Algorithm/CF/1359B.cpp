#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
    int n, m, x, y, ans=0;
    cin>>n>>m>>x>>y;
    int k = 2*x;
    char a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.'&&a[i][j+1]=='.'&&j<m)
            {
                if(k<y)
                    ans+=x;
                else
                {
                    ans+=y;
                    j++;
                }
            }
            else
            {
                ans+=x;
                cout<<"ans: "<<ans<<endl;
            }
        }
        cout<<ans<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}