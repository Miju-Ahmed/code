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
    for(int i=0; i<=l; i++)
    {
        visited[i]=false;
        parent[i]=-1;
        dist[i]=
    }
    while(!q.empty())
    {
        int c=q.front();
        q.pop();
        visited[c]=true;
        for(int i=0; i<q.si)
    }
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

    

}