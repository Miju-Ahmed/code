#include<bits/stdc++.h>
using namespace std;

int m,n;
vector<vector<pair<int,int>>>path;
vector<vector<bool>>visited;
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};
int sx,sy,ex,ey;
vector<vector<char>>graph;

bool isValid(int , int y)
{
    if(x<0||y<0||x>=n||y>=m)    return false;
    if(visited[x][y])   return false;
    if(graph[x][y]=='#')    return false;
    return true;
}


void bfs()
{
    queue<pair<int,int>>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for(auto move:moves)
        {
            int movex = move.first;
            int movey = move.second;
            if(isValid(cx+movex, cy+movey))
            {
                q.push({cx+movex, cy+movey});
                visited[cx+movex][cy+movey]=true;
                path[cx+movex
            }
        }
    }
}