#include<bits/stdc++.h>
using namespace std;

vector<int>graph[10000];
int parent[10000]={-1};
bool visited[10000]={false};
int dist[10000]={0};

bool BFS(int s, int d)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c=q.front();
        q.pop();    cout<<c<<endl;
        for(int i=0; i<graph[c].size(); i++)
        {
            if(visited[graph[c][i]]==false)
            {
                visited[graph[c][i]]=true;
                dist[graph[c][i]] = dist[c] + 1;
                parent[graph[c][i]] = c;
                q.push(graph[c][i]);
                if(graph[c][i]==d)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    int n,m;    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool f = BFS(1,n);
    if(f==false)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    stack<int>s;
    int c = n;
    while(c!=-1)
    {
        s.push(c)
    }

}