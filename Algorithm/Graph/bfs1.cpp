#include<bits/stdc++.h>
using namespace std;
#define MX 1000010

bool visited[MX];
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
            if(visited[graph[current][i]]==false)
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
    cout<<"Enter the Nodes and Edges number: ";
    cin>>n>>e;
    cout<<"Enter the two terminate nodes: "<<endl;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfs(0, n);
}