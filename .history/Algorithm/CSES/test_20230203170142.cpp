#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1000];
bool visited[1000]={false};
vector<int>par;

void bfs(int s)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    cout<<s<<endl;
    while(!q.empty())
    {
        cout<<"Miju"<<endl;
        int c=q.front();
        cout<<c<<" ";
        q.pop();
        for(int i=1; i<=graph[c].size(); i++)
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
    cout<<"Enter the edges: \n";
    for(int i=0; i<m; i++)
    {
        //cout<<"Enter the edge "<<i+1<<" : ";
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    cout<<"BFS begins: \n\n";
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