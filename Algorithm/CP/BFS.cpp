#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MX 110

vector<int>graph[MX];
bool visited[MX];
//int distance[MX];
int n;

void bfs(int source)
{
   int distance[MX];
   queue<int>q;
   visited[source] = 1; 
   distance[source] = 0;
   q.push(source);

   while(!q.empty())
   {
        int node = q.front();
        q.pop();

        for(int i=0; i<graph[node].size(); i++)
        {
            int next = graph[node][i];
            if(visited[next]==0)
            {
                visited[next] = 1;
                distance[next] = distance[node] + 1;
                q.push(next);
            }

        }
   }

   for(int i=1;i <= n; i++)
    {
        cout<<"Distance of "<<i<<" is "<<distance[i]<<endl;
    }
}


int main()
{
    int e;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cin>>source;

    bfs(source);

    cout<<"From node "<<source<<endl;
    
    return 0;

}



// void bfs(int source)
// {
//     queue<int>q;
//     visited[source] = true;
//     distance[source] = 0;
//     q.push();

//     while (!q.empty())
//     {
//         int node = q.front();
//         q.pop();

//         for(int i=0; i<graph[node].size(); i++)
//         {
//             int next = graph[node][i];
//             if(visited[graph[node][i]]==false)
//             {
//                 visited[graph[node][i]]=true;
//                 distance[graph[node][i]] = distance[node] + 1;
//                 q.push(graph[node][i]);
//             }
//         }
//     }
    
// }