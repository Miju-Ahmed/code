#include<bits/stdc++.h>
using namespace std;

#define MX 1001

vector<int>graph[MX];
bool visited[MX];
int nodes;
int edges;

void bfs(int source)
{
    int distance[MX];
    queue<int>q;
    visited[source] = true;
    distance[source] = 0;
    q.push(source);

    while (!q.empty())
    {
        int n = q.front();
        q.pop();
        for(int i=0; i<graph[n].size(); i++)
        {
            if(visited[graph[n][i]]==false)
            {
                visited[graph[n][i]] = true;
                distance[graph[n][i]] = distance[n]+1;
                q.push(graph[n][i]);
            }
        }
    }

    for(int i=1; i<=nodes; i++)
    {
        cout<<"Distance from "<<i<<" is "<<distance[i]<<endl;
    }
}


int main()
{
    cout<<"Enter the nodes and edges: ";
    cin>>nodes>>edges;
    cout<<"Enter the two nodes number whose are in edges: "<<endl;
    for(int i=1; i<=edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source;
    cout<<"Enter the source: ";
    cin>>source;
    
    bfs(source);

    return 0;
}