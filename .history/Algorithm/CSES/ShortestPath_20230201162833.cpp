#include<bits/stdc++.h>
using namespace std;

int m,n;
vector<vector<pair<int,int>>>path;
vector<vector<bool>>visited;
vector<pair<int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};
int sx,sy,ex,ey;

bool isValis(int , int y)
{
    if(x<0||y<0||x>=n||y>=m)    return false;
    if(visited[x][y])   return false;
    return true;
}
