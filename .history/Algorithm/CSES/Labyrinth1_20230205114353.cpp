#include<bits/stdc++.h>
using namespace std;

const int MX=1e3+1;
vector<char>graph[MX];
bool visited[MX][MX]={false};
int parent[MX]={-1};
int dist[MX] = {0};
pair<int,int>moves = {{1,0},{-1,0},{0,1},{-1,0}};
int sx,sy,fx,fy;

bool BFS(int i, int j)
{
    visited[i][j]=true;
    queue<pair<int,int>>q;
    q.push({i,j})
}

int main()
{
    int n,m;    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c; cin>>c;
            graph[i][j] = c;
            if(graph[i][j]=='A')
            {
                sx=i;   sy=j;
            }
            if(graph[i][j]=='B')
            {
                fx=i;   fy=b;
            }
        }
    }

    bool f = bfs(sx,sy);
}