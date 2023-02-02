#include<bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1000][1000]={false};
char graph[1000][1000],x,y;
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};

bool isValid(int x, int y)
{
    if(x<0||y<0||x>=n||y>=m)    return false;
    if(graph[x][y]=='#'||graph[x][y]=='s')  return false;
    if(visited[])
}

void dfs(int i, int j)
{
    visited[i][j]=true;
    for(auto move:moves)
    {
        if(isValid(i+move.first, j+move.second))
        {

        }
    }
}

int main()
{
   cin>>n>>m;
   for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='A')
                {
                    x=i;
                    y=j;
                }
            }
    dfs(x,y);
    return 0;
}