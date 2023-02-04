#include<bits/stdc++.h>
using namespace std;
#define MX 10000
#define INF 1000000000

vector<int>graph[1000];
bool visited[1000] = {false};
int dist[1000];
int p;

void dfs(int n, int d)
{
    visited[n]=true;
    dist[n]=d;
    for(int i=0; i<graph[n].size(); i++)
    {
        if(visited[graph[n][i]]==false)
        {
            dfs(graph[n][i], dist[n]+1);
            if(graph[n][i]==p)
                return;
        }
    }
}

int main()
{
    int m;
    cout<<"Enter the nodes and edges number: ";
    cin>>p>>m;
    cout<<"Enter the edges : "<<endl;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1,0);
    cout<<dist[p]<<endl;
}