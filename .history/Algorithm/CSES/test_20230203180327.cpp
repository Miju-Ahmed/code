#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1000];
bool visited[1000]={false};
int parent[1000];
int n,m;

bool bfs()

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    if(!bfs())
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }


}