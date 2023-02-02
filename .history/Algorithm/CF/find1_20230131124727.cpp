#include<bits/stdc++.h>
using namespace std;
#define MX 10000000

bool visited[MX][MX]={false};
vector<vector<char>>graph;

void dfs(int s)
{
    visited[s]=true;
    cout<<s<<endl;
    for(int i=0;i<graph[s].size(); i++)
    {
        if(visited[graph[s][i]]==false)
        {
            dfs(graph[s][i]);
        }
    }
}

int main()
{
    int m,n,p,q;    cin>>m>>n;
    char a[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]=='@')
            {
                p = i;
                q = j;
            }
        }
    int x = dfs(p,q);
    if(x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}