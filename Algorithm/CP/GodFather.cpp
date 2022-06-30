#include<bits/stdc++.h>
using namespace std;

#define MX 100010
bool visited[Mx];
vector<int>graph[MX];

void dfs(int n)
{
    visited[n] = true;
    for(int i=0; i<graph[n].size(); i++)
    {
        if(!visited[g[n][i]])
        {
            dfs(graph[n][i]);
        }
    }
}

int main()
{
    int k;
    vector<int>d;
    int n,q;
    cin>>n>>q;
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0; i<q; i++)
    {
        cin>>k;
        for(int i=0; i<k; i++)
        {
            int m;
            cin>>m;
            d.push_back(m);
        }
    }
}