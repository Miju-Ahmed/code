#include<bits/stdc++.h>
using namespace std;

vector<int>graph[10000];
int par[10000]={-1};
bool visited[10000]={false};
int dist[10000]={0};

bool BFS(int s, int d)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c=q.front();
        q.pop();    cout<<c<<endl;
        for(int i=0; i<graph[c].size(); i++)
        {
            if(visited[graph[c][i]])
        }
    }
}