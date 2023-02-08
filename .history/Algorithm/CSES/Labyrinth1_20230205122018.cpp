#include<bits/stdc++.h>
using namespace std;

const int MX=1e3+1;
vector<char>graph[MX];
bool visited[MX][MX]={false};
vector<pair<int,int>>par[MX];
vector<pair<int,int>>moves = {{1,0},{-1,0},{0,1},{-1,0}};
string w;
int sx,sy,fx,fy;

bool isValid(int x, int y)
{
    f(x<0||y<0||x>=n||y>=m) return false;
    else if(visited[x][y]==true)    return false;
    else if(graph[x][y]=='#')    return false;
    return true;
}

bool BFS()
{
    queue<pair<int,int>>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        int i = q.front().first;    int j= q.front().second;
        q.pop();
        for(auto move:moves)
        {
            if(isValid(i+move.first, j+move.second))
            {
                q.push({i+move.first,j+move.second});
                visited[i+move.first][j+move.second]=true;
                par[i+move.first][j+move.second] = {move.first, move.second};
                if(i+move.first>i)  s+= 'D';
                else if(i)
                if(graph[i+move.first][j+move.second]=='B')
                    return true;
            }
        }
    }
    return  false;
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

    bool f = BFS();

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