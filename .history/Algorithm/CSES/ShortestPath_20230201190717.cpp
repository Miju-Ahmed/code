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
        
    }
}