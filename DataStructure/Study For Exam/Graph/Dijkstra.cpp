#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll INF=1.5e7+10;
ll MOD=10000000007;
ll V;
int graph[100][100];

void printSolution(int dist[])
{
    cout<<"Vertex \t\t Distance from source\n";
    for(int i=0; i<V; i++)
        cout<<i<<" \t\t\t\t "<<dist[i]<<"\n";
}

int minDistance(int dist[], bool visited[])
{
    int min = INF, min_in;
    for(int v=0; v<V; v++)
        if(visited[v]==false && dist[v]<=min)
            min = dist[v], min_in = v;
    return min_in;
}

void dijkstra(int src)
{
    int dist[V];
    bool visited[V];
    for(int i=0; i<V; i++)
        dist[i]=INF, visited[i]=false;
    dist[src]=0;
    for(int count=0; count<V-1; count++)
    {
        int u = minDistance(dist, visited);
        visited[u]=true;
        for(int v=0; v<V; v++)
            if(!visited[v]&& graph[u][v] && dist[u]!=INF && dist[u]+graph[u][v]<dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    printSolution(dist);
}

int main()
{
    cin>>V;     //int graph[V][V];
    for(int i=0; i<V; i++)
        for(int j=0; j<V; j++)
            cin>>graph[i][j];
    dijkstra( 0);
    return 0;
}