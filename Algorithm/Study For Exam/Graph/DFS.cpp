#include<bits/stdc++.h>
using namespace std;

#define MX 99999
vector<int>graph[MX];
bool visited[MX]={false};

void dfs(int s)
{
    visited[s]=true;
    cout<<s<<" ";
    for(int i=0; i<graph[s].size(); i++)
    {
        if(visited[graph[s][i]]==false)
        {
            dfs(graph[s][i]);
        }
    }
}
int main()
{
    int n,e,c=0;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            c++;
        }
    }
    cout<<c<<endl;
}