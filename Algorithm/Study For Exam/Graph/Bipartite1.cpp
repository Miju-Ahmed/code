#include<bits/stdc++.h>
using namespace std;

bool isBipartite(int s)
{
    int n;
    cin>>n;
    int g[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>g[i][j];
    
    int c[n];
    for(int i=0; i<n; i++)
        c[i]=-1;
    c[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(g[u][u] == 1)
            return false;
        for(int v=0; v<n; v++)
        {
            if(g[u][v]&&c[v]==-1)
            {
                c[v]=1-c[v];
                q.push(v);
            }
            else if(g[u][v]&&c[u]==c[v])
                return false;
        }
    }
    return true;
}

int main()
{
    isBipartite(0)? cout<<"YES": cout<<"NO"<<endl;
    return 0;
}