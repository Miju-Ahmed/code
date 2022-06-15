#include<bits/stdc++.h>
using namespace std;

#define MX 100010
bool visited[MX];
vector<int>graph[MX];

void dfs(int n)
{
    visited[n] = true;
    for(int i=0; i<graph[n].size(); i++)
    {
        if(!visited[graph[n][i]])
        {
            dfs(graph[n][i]);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a,b;
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int q;
        cin>>q;
        int x,y;
        for(int i=0; i<q; i++)
        {
            cin>>x>>y;
            dfs(x);
            if(visited[y]==true)
            {
                cout<<"YO"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }      
    }
    return 0;
}