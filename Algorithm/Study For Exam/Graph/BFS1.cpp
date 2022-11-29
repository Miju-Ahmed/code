#include<bits/stdc++.h>
using namespace std;

#define MX 999999
bool visited[MX];
vector<int>graph[MX];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        cout<<current<<" ";
        for(int i=0; i<graph[current].size(); i++)
        {
            if(visited[graph[current][i]]==false)
            {
                q.push(graph[current][i]);
                visited[graph[current][i]] = true;
            }
        }
    }
}

void bfs1(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        cout<<current<<" ";
        for(int i=0; i<graph[current].size(); i++)
        {
            if(visited[graph[current][i]]==false)
            {
                q.push(graph[current][i]);
                visited[graph[current][i]]==true;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(0);
    cout<<endl;
    bfs1(0);
    return 0;
}