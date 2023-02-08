#include<bits/stdc++.h>
using namespace std;

char graph[1001][1001];
vector<vector<bool>>visited;
vector<pair<int,int>> moves = {{1,0},{-1,0},{0,1},{0,-1}};
vector<vector<pair<int,int>>>path;
int sx,sy,fx,fy,n,m;
string s;

bool isValid(int x, int y)
{
    if(x>=n||y>=m||x<0||y<0)    return false;
    if(visited[x][y]==true||graph[x][y]=='#')   return false;
    return true;
}

bool BFS()
{
    visited[sx][sy]=true;
    queue<pair<int,int>>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        int i = q.front().first;    int j = q.front().second;
        cout<<"("<<i<<","<<j<<"),";
        q.pop();
        for(auto move:moves)
        {
            if(isValid(i+move.first, j+move.second))
            {
                visited[i+move.first][j+move.second] = true;
                q.push({i+move.first,j+move.second});
                if(i>i+move.first)  s+='U'; if(i<i+move.first)  s+='D';
                if(j>j+move.first)  s+='L'; if(j<j+move.first)  s+='R';
                if(graph[i+move.first][j+move.second]=='B')
                    return true;
                
            }
        }
    }
    return false;
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]=='A')
            {
                sx=i;   sy=j;
            }
        }
    }
    if(BFS()==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<s.size
    }
}