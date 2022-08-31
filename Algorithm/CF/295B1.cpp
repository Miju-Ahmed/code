#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int n;
    cin>>n;
    long long data[n+1][n+1], ans[n+1];
    int del[n+1];
    bool f[n+1];
    
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>data[i][j];
    for(int i=n; i>=1; i--)
        cin>>del[i];
    for(int i=0; i<=n; i++)
        f[i] = false;
    for(int x = 1; x<=n; x++)
    {
        ans[x] = 0;
        int k = del[x];
        f[k] = true;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                data[i][j] = min(data[i][j], data[i][k]+data[k][j]);
                if(f[i]&&f[j])
                    ans[x] += data[i][j];
            }
    }
    for(int i=n; i>=1; i--)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}