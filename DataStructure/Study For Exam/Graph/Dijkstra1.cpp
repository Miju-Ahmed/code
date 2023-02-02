#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

ll INF=1.5e9+10;
ll MOD=10000000007;
int v,graph[100][100], distance[100]={INF};
bool visited[100] = {false};


void dijkstra(int src)
{
    distance[src]=0;
    visited[src]=0;
    for(int i=0; i<v-1; i++)
    {
        int u = minDistance(distance, visited);
        visited[u] = true;

    }
}

int main()
{
    Faster;
    cin>>v;
    for(int i=0; i<v; i++)
        for(int j=0; j<v; j++)
            cin>>graph[i][j];
    dijkstra(0);
    return 0;
}