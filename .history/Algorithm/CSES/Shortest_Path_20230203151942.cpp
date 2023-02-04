#include<bits/stdc++.h>
using namespace std;
#define MX 10000
#define INF 1000000000

vector<int>graph[MX];
bool visited[MX] = {false};
int distance[MX]={0};

void dfs(int n, int d)
{
    visited[n]=true;
    distance[n]=d;
    for(int i=0; i<graph[n].size(); i++)
    {
        if(visited[graph[n][i]]==false)
        {
            dfs(graph[n][i], d);
        }
    }
}

int main()
{
    int n,m;
    cout<<"Enter the nodes and edges number: ";
    cin>>n>>m;
    cout<<"Enter the edges : "<<endl;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1,0);
    
    int ans=-1;
}