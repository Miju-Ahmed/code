#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define INF 999999991

void solve()
{
    int n,l,r;      cin>>n>>l>>r;
    string s; int g[n+1][2]={INF};
    for(int i=1; i<n; i++)  g[i][0] = i+1;  g[n][0] = 1;
    for(int i=n; i>1; i--)  g[i][1] = i-1;  g[1][1] = n;

    s+=(char)(1);
    int i=1;
    while(i!=n)
    {
        if(g[i][0]<g[i][1])
        {
            s+=g[i][0];
            i++;
            g[i][0] = INF;
        }
        else if(g[i][0]>g[i][1])
        {
            s+=g[i][1];
            i--;
            g[i][1] = INF;
        }
    }
    for(int i=l-1; i<r; i++)
        cout<<s[i]<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}