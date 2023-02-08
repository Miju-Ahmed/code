#include<bits/stdc++.h>
using namespace std;

vector<vector<char>>graph;
vector<vector<bool>>visited;
vector<pair<int,int>> moves = {{1,0},{-1,0},{0,1},{0,-1}};
vector<vector<pair<int,int>>>path;
int sx,sy,fx,fy,n,m;

bool isValid(int x, int y)
{
    if(x>=n||y>=m||x<0||y<0)    return false;
    if(visited[x][y]==true||graph[x][y]=='#')   return false;
    return true;
}

void BFS()
{
    visited[sx][sy]=true;
    queue<pair<int,int>>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        int i = q.front().first;    int j = q.front().second
    }
}