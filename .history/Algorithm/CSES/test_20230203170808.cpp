#include<bits/stdc++.h>
using namespace std;

vector<int>g[10000];
vector<int>par;
bool visited[1000];

void bfs()
{
    int s=1;
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(int i=0; i<g[curr].size(); i++)
        {
            if(visited[g[curr][i]]==false)
            {
                visited[g[curr][i]]=true;
                q.push(g[curr][i]);
            }
        }
    }
}

int main()
{
    int n,m;    cin>>n>>m;
    for(int i=0;i <m; i++)
}