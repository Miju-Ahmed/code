#include<bits/stdc++.h>
using namespace std;
//#define MAXN 505
#define ll long long
int data[505][505];
int ans[505];
int del[505], n;
bool f[505];

void solve()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            cin>>data[i][j];
            ans[0] += data[i][j];
        }
    for(int i=n; i>=1; i--)
        cin>>del[i];
    for(int i=0; i<=n; i++)
        f[i] = false;
    for(int x=1; x<=n; k++)
    {
        ans[x] = 0;
        int k = del[x];
        f[k] = true;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                data[i][j] = min(data[i][j], data[i][k]+data[k][j]);
                if(f[1]&&f[j])
                    ans[x] += data[i][j];
            }
    }
    for(int i=n; i>=1; i--)
        cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    solve();
    return 0;
}