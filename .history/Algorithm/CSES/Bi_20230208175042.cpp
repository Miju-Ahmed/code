#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 1e5+1;

vector<int>graph[mx];
int visited[mx]={-1};


bool bfs(int s)
{
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c=q.front();
        q.pop();
        visited[c]=1;
        cout<<c<<" ";
        for(int i=0; i<graph[c].size(); i++)
        {
            if(visited[i]==-1)
            {
                q.push(graph[c][i]);
                visited[i]=1;
            }
        }
    }
    return true;
}

// bool Bipartite(int n, int m)
// {
//     for(int i=1; i<=n; i++)
//     {
//         if(visited[i]==-1)
//         {
//             if(bfs(i)==false)
//                 return false;
//         }
//     }
//     return true;
// }

int main()
{
    int n,m;    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool f=Bipartite(n,m);
    
    if(f)   cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}