#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+1;
vector<int>graph[mx];
int visited[mx]={-1};

bool bfs(int s)
{
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c = q.front();  q.pop();
        visited[c]=1;
        for(auto d:graph[c])
        {
            if(visited[d]==-1)
            {
                visited[d] = 1- visited[c];
                q.push(d);
            }
            else if(visited[d]==visited[c])
                return false;
        }
    }
    return true;
}

bool checkBipartite(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(visited[])
    }
}