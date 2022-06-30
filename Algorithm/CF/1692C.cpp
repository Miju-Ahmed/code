#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char a[8][8];
    for(int i=0;i <8; i++)
        for(int j=0; j<8; j++)
            cin>>a[i][j];

    for(int i=1; i<8; i++)
        for(int j=1; j<8; j++)
        {
            if(a[i][j]=='#')
            {
                if(a[i-1][j-1]=='#'&&a[i-1][j+1]=='#'&&a[i+1][j-1]=='#'&&a[i+1][j+1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<endl;
                }
            }
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}