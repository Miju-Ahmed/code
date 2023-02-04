#include<bits/stdc++.h>
using namespace std;

#define MX 10000010
vector<int>graph[MX];
bool visited[MX] = {false};
vector<int>v;

void dfs(int s)
{
    visited[s] = true;
    //cout<<s<<" ";
    for(int i=0; i<graph[s].size(); i++)
    {
        if(visited[graph[s][i]]==false)
        {
            dfs(graph[s][i]);
        }
    }
}


int main()
{
    int n, e,c=0;
    //cout<<"Enter the node and edges number: \n";
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            c++;
            v.push_back(i);
        }
    }
    //cout<<endl;
    //cout<<"Connected components is : "<<c<<endl;
    //for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    //cout<<endl;
    //cout<<"Needs to connect : "<<c-1<<endl;
    cout<<c-1<<endl;
    //cout<<"Should be connect : ";
    for(int i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }
    return 0;
}