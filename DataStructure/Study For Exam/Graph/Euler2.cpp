#include<bits/stdc++.h>
using namespace std;
#define MX 1000010010

bool visited[MX]= {false};
vector<int>graph[MX];
int V;

void dfs(int v)
{
    visited[v] = true;
    for(int i=0; i<graph[v].size(); i++)
        if(!visited[graph[v][i]])
            dfs(graph[v][i]);

}

bool isConnected()
{
    int i;
    for(int i=0; i<V; i++)
        if(graph[i].size()!=0)
            break;
    
    if(i==V)
        return true;
    dfs(i);
    for(i=0; i<V; i++)
        if(visited[i]==false && graph[i].size()>0)
            return false;
    return true;
}

int isEuler()
{
    if(!isConnected())
        return 0;
    int odd = 0;
    for(int i=0; i<V; i++)
        if(graph[i].size() & 1)
            odd++;
    if(odd>2)
        return 0;
    return (odd)? 1 : 2;
}

void test()
{
    int res = isEuler();
    if(res==0)
        cout<<"Graph is not Eulerian\n";
    else if(res==1)
        cout<<"Graph has Euler path\n";
    else
        cout<<"Graph has Euler cycle\n";
}

int main()
{
    cin>>V;
    for(int i=0; i<V; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    test();
    return 0;
}