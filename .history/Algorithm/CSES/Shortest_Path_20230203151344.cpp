#include<bits/stdc++.h>
using namespace std;
#define MX 10000;

vector<int>graph[MX];
bool visited[MX] = {false};
int distance[MX]={0};

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

    dfs(1,0)
}