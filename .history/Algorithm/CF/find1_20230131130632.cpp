#include<bits/stdc++.h>
using namespace std;
#define MX 10000000

bool visited[MX][MX]={false};
vector<vector<char>>graph;
int m,n;

void dfs(int p, int q)
{
    visited[p][q]=true;
    if(graph[p][q]=='x')
    {
        cout<<"YES"<<endl;
        return;
    }
    if(graph[p+1][q]=='.'&&(p+1)>=0&&(p+1)<m)
        dfs(p+1,q);
    else if(graph[p-1][q]=='.'&&(p-1)>=0&&(p-1)<m)
        dfs(p-1,q);
    else if(graph[p][q+1]&&(q+1)>=0&&(q+1)<n)
        dfs(p,q+1);
    else if(graph[p][q-1]&&(q-1)>=0&&(q-1)<n)
        dfs(p,q-1);
    else
    {
        cout<<"NO"<<endl;
        return;
    }

    visited[p][q]=
}

int main()
{
    int p,q;    cin>>m>>n;
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
    dfs(p,q);
}