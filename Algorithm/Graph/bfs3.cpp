#include<bits/stdc++.h>
using namespace std;

#define MX 10000010
bool visited[MX] = {false};
vector<int>graph[MX];

void bfs(int s, int n)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        cout<<current<<" ";
        for(int i=0; i<graph[current].size(); i++)
        {
            if(!visited[graph[current][i]])
            {
                q.push(graph[current][i]);
                visited[graph[current][i]] = true;
            }
        }
    }
    
}

int main()
{
    int n,e;
    cout<<"Enter the node and edges number: ";
    cin>>n>>e;
    cout<<"Enter the edges : \n";
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1, n);
    return 0;
}