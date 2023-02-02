#include<bits/stdc++.h>
using namespace std;

int n,m,p,q;
bool visited[1000][1000]={false},f=false;
char graph[1000][1000];
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};

bool isValid(int x, int y)
{
    if(x<0||y<0||x>=n||y>=m)    return false;
    if(graph[x][y]=='#'||graph[x][y]=='s')  return false;
    if(visited[x][y]==true) return false;
    return true;
}

void dfs(int i, int j)
{
    visited[i][j]=true;
    for(auto move:moves)
    {
        if(isValid(i+move.first, j+move.second))
        {
            if(graph[i+move.first][j+move.second]=='B')
            {
                f=true;
                return;
            }
            dfs(i+move.first, j+move.second);
        }
    }
    return false;
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
                    p=i;
                    q=j;
                }
            }
    if(k)   cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}