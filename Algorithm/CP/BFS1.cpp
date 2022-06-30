#include<bits/stdc++.h>
using namespace std;

#define MX 100

vector<int> graph[MX];
bool visited[MX];
int node, edge;

void bfs(int source)
{
    int distance[MX];
    queue<int>q;

    visited[source] = true;
    distance[source] = 0;
    q.push(source);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int i=0; i<graph[node].size(); i++)
        {
            if(visited[graph[node][i]]==false)
            {
                visited[graph[node][i]] = true;
                distance[graph[node][i]] = distance[node] + 1;
                q.push(graph[node][i]);
            }
        }
    }
    for(int i=1; i<=node; i++)
    {
        cout<<"Distance of "<<i<<" is "<<distance[i]<<endl;
    }

}

int main()
{
    cout<<"Enter the Node and Edge number: ";
    cin>>node>>edge;
    cout<<"Enter the Node and Edge: "<<endl;
    for(int i=0; i<edge; i++)
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
}