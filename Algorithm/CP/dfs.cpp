#include<bits/stdc++.h>
using namespace std;

bool visited[10];
vector<int> graph[10];

void dfs(int n)
{
    visited[n] = true;
    cout<<n<<" ";

    for(int i=0; i<graph[n].size(); i++)
    {
        if(!visited[graph[n][i]])
        {
            dfs(graph[n][i]);
        }
    }
}

void initialize()
{
    for(int i=0; i<10; i++)
    {
        visited[i] = false;
    }
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    initialize();
    dfs(0);
    return 0;
}