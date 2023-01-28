#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
int level[10];
bool visited[10];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    level[s]=0;
    visited[s]=true;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cout<<p<<" ";
        for(int i=0; i<v[p].size(); i++)
        {
            if(visited[v[p][i]]==false)
            {
                level[v[p][i]] = level[p]+1;
                q.push(v[p][i]);
                visited[v[p][i]]=true;
            }
        }
        cout<<"level "<<level[p]<<endl;
    }
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int x,y;    cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(0);
    return 0;
}