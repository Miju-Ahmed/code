#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1000];
vector<bool>visited;
vector<int>par;

void bfs(int s)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c=q.front();
        cout<<c<<" ";
        q.pop();
        for(int i=0; i<graph[c].size(); i++)
        {
            if(visited[graph[c][i]]==false)
            {
                q.push(graph[c][i]);
                par[graph[c][i]]=c;
                visited[graph[c][i]]=true;
            }
        }
    }
}

int main()
{
    cout<<"Enter the nodes and edges numbers: ";
    int n,m;
    cin>>n>>m;
    cout<<"Enter the edges: \n"
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);

    int c=n;
    stack<int>stk;
    while(c!=-1)
    {
        stk.push(c);
        c = par[c];
    }

    cout<<stk.size()<<endl;
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}