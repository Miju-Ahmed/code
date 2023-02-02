#include<bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1000][1000]={false};
char graph[1000][1000],x,y;
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};

void dfs(int i, int j)
{
    visited[i][j]=true;
    for(auto move:moves)
    {
        if(isValid(i+))
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