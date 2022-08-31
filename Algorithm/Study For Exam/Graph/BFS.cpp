#include<bits/stdc++.h>
using namespace std;

#define MX 10000010
bool visited[MX];
bool visit[MX];
vector<int>graph[MX];

void bfs(int s, int n)
{
    queue<int> q;
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
                visited[graph[current][i]]= true;
            }
        }
    }
}

void dfs(int s)
{
    visit[s] = true;
    cout<<s<<" ";
    for(int i=0; i<graph[s].size(); i++)
    {
        if(visit[graph[s][i]]==false)
        {
            dfs(graph[s][i]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    cout<<"Enter the node: \n";
    for(int i=0; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(0, n);
    cout<<endl;
    dfs(0);
    return 0;
}