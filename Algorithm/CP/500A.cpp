#include<bits/stdc++.h>
using namespace std;
#define MX 100010
int visited[MX];
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

void initialize(int n)
{
    for(int i=0; i<n; i++)
        visited[i] = false;
}

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
        graph[i].push_back(i + a[i]);
    }
    initialize(n);
    dfs(1);
    if(visited[t]==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}