#include<bits/stdc++.h>
using namespace std;

const int MX=1e3+1;
vector<char>graph[MX];
bool visited[MX][MX]={false};
vector<pair<int,int>>pair[MX];
int dist[MX] = {0};
vector<pair<int,int>>moves = {{1,0},{-1,0},{0,1},{-1,0}};
int sx,sy,fx,fy;

bool isValid(int x, int y)
{
    f(x<0||y<0||x>=n||y>=m) return false;
    else if(visited[x][y]==true)    return false;
    else if(graph[x][y]=='#')    return false;
    return true;
}

void BFS()
{
    queue<pair<int,int>>q;
    q.push({fx,fy});
    
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
            {
                sx=i;   sy=j;
            }
            if(graph[i][j]=='B')
            {
                fx=i;   fy=j;
            }
        }
    }

    bool f = bfs(sx,sy);

    if(f==false)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    stack<pair<int,int>>stk;

    while(fx!=-1&&fy!=-1)
    {
        stk.push({fx, fy});
        fx = parent.front();
        fy = parent.back();
    }
}