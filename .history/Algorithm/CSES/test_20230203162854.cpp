#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1000];
vector<bool>visited;
vector<int>dist;

void bfs(int s)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c=q.front();
        cout<<c<<" ";
        q.pop();
        for(int i=0; i<graph[c].size(); i++)
        {
            if(visited[graph[c][i]]==false)
            {
                q.push(graph[c][i]);
                visited[graph[c]
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
}