#include<bits/stdc++.h>
using namespace std;
#define MX 100001

vector<int>graph[MX];
bool visited[MX] = {false};

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
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
        graph[i].push_back(i+a[i]);
    }
    dfs(1);
    if(visited[t]==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
}