#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1000];
bool visited[1000]={false};
int parent[1000];
int n,m;

bool bfs()
{
    visited[1]=true;
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

    int src=1,
    if(!bfs())
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    int src=1,dest=n;

}