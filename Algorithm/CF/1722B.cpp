#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char a[2][n];
    int p=1;
    for(int i=0; i<2; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]=='G')
                a[i][j] = 'B';
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[0][i]!=a[1][i])
        {
            p = 0;
            break;;
        }
    }
    if(p==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}