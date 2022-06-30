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
    int n;
    vector<int>c,p,w;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        c.push_back(a);
    }
    for(int i=0; i<n-1; i++)
    
    {
        int a;
        cin>>a;
        p.push_back(a);
    }
    for(int i=0; i<n-1; i++)
    {
        int a;
        cin>>a;
        w.push_back(a);
    }


}