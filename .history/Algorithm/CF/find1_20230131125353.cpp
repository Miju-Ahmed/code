#include<bits/stdc++.h>
using namespace std;
#define MX 10000000

bool visited[MX][MX]={false};
vector<vector<char>>graph;
int m,n;

void dfs(int p, int q)
{
    visited[p][q]=true;
    for(int i=0; i<graph[p])
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
    int x = dfs(p,q);
    if(x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}