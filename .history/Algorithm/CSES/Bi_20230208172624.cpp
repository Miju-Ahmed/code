#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 1e5+1;

vector<int>graph[mx];
int visited[mx]={-1};

int main()
{
    int n,m;    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool f=false;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==-1)
        {
            f = bfs(i);
            if(f==false)
                break;
        }
    }
}