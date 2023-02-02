#include<bits/stdc++.h>
using namespace std;

#define MX 10000010
bool visited[MX];
vector<int>graph[MX];

void bfs(int s, int n)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        cout<<current<<" ";
        for(int i=0; i<graph[current].size(); i++)
        {
            if(visited[graph[current][i]]!=true)
            {
                q.push(graph[current][i]);
                visited[graph[current][i]] = true;
            }
        }
    }
    
}

int main()
{
    int t;
    cout<<"Enter the test case number: ";
    cin>>t;
    while (t--)
    {
        int n,e;
        cout<<"Enter the nodes and edges number : ";
        cin>>n>>e;
        cout<<"Enter the terminate nodes: "<<endl;
        for(int i=0; i<e; i++)
        {
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
        }

        bfs(1,n);
        cout<<endl;
    }

    return 0;
    
}