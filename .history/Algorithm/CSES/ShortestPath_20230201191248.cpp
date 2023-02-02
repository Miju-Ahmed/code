#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<pair<int,int>>>path;
vector<vector<bool>>visited;
int sx,sy,ex,ey;

vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};

bool isValid(int x, int y)
{
    if(x<0||y<0||x>=n||y>=m)    return false;
    if(visited[x][y]==true) return false;
    return true;
}

void bfs()
{
    queue<pair<int,int>>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        int cx=q.front().first; int cy = q.front().second;
        q.pop();
        for(auto move:moves)
        {
            if(isValid(cx+move.first, cy+move.second))
            {
                q.push({cx+move.first, cy+move.second});
                visited[cx+move.first][cy+move.second]=true;
                path[cx+move.first][cy+move.second]={move.first,move.second};
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    path.resize(n); visited.resize(n);
    for(int i=0; i<n; i++)
    {
        path[i].resize(m);  visited[i].resize(m);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int c;  cin>>c;
            path[i][j] = {-1,-1};
            
        }
    }
}