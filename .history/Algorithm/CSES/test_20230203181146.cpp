#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
vector<int>graph[1000];
bool visited[1000]={false};
int dist[1000]={INF};
int parent[1000]={-1};
int n,m;

bool bfs(int f, int l)
{
    visited[f]=true;
    queue<int>q;
    q.push(f);
    while(!q.empty())
    {
        int c=q.front();
        q.pop();
        visited[c]=true;
        for(int i=0; i<graph[c].size(); i++)
        {
            if(visited[graph[c][i]]==false)
            {
                visited[graph[c][i]]=true;
                dist[graph[c][i]]=dist[c] + 1;
                parent[graph[c][i]]=c;
                q.push(graph[c][i]);
                if(graph[c][i]==l)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int src=1,dest=n;
    if(!bfs(src,dest))
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    stack<int>stk;
    int c = 

}