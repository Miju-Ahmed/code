#include<bits/stdc++.h>
using namespace std;
//#define MAXN 505
#define ll long long
int data[505][505];
int ans[505] = {0};
int del[505], n;
bool f[505];

int main()
{
    cin>>n;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>data[i][j];
        }
    }
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
        {
            for(int j=1; j<=n; j++)
            {
                data[i][j] = min(data[i][j], data[i][k]+data[k][j]);
                if(f[i]&&f[j])
                {
                    ans[x] = ans[x] + data[i][j];
                }
            }
        }
    }
    for(int i=n;i>=1; i--)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}