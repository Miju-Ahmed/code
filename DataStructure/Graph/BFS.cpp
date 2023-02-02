#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<int>g[], bool visited[], int N)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        for(int i=0; i<g[curr].size(); i++)
        {
            if(visited[g[curr][i]]==false)
            {
                 q.push(g[curr][i]);
                 visited[g[curr][i]] = true;
            }
           
        }
    }
    
}

int main()
{
    int t;
    cout<<"Enter the test cases: ";
    cin>>t;
    while(t--)
    {
        int N, E;
        cout<<"Enter the Nodes and Edges Number: ";
        cin>>N>>E;
        vector<int> g[N];
        bool visited[N];
        for(int i=0; i<N; i++)
            visited[i]= false;
        cout<<"Enter the Edges: \n";
        for(int i=0; i<E; i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        bfs(0,g, visited, N);
        cout<<endl;
    }
}



