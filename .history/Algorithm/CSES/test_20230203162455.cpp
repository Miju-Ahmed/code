#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1000];
vector<bool>visited;
vector<int>dist;

void bfs()
{
    visited[]
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs();
}