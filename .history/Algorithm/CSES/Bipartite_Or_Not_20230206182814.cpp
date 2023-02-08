#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+1;
vector<int>graph[mx];
int visited[mx]={-1};

//colored the graph using bfs()
bool bfs(int s)
{
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c = q.front();  q.pop();
        visited[c]=1;
        
        for(auto d:graph[c])
        {
            if(visited[d]==-1)
            {
                visited[d] = 1- visited[c];
                q.push(d);
            }
            else if(visited[d]==visited[c])
                return false;
        }
    }
    return true;
}


//For multiple component
bool checkBipartite(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==-1)
        {
            if(!bfs(i))
                return false;
        }
    }
    return true;
}

int main()
{
    int n,m;
    cout<<"Enter the nodes and edges number: ";
    cin>>n>>m;
    cout<<"Enter the graph: "<<endl;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    if(checkBipartite(n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}