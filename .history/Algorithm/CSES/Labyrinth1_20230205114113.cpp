#include<bits/stdc++.h>
using namespace std;

const int MX=1e3+1;
vector<char>graph[MX];
bool visited[MX]={false};
int parent[MX]={-1};
int dist[MX] = {0};
pair<int,int>moves = {{1,0},{-1,0},{0,1},{-1,0}};
int sx,sy,fx,fy;

bool BFS(char f, char l)
{

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
        }
    }
}