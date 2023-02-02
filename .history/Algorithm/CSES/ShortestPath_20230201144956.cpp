#include<bits/stdc++.h>
using namespace std;

bool visisted[1000]={false};
vector<int>graph[1000];

bool BFS(int s, int d, int v, int pred[], int dist[])
{
    queue<int>q;
    visisted[v]
}



void printShortestDistance(int s, int d, int v)
{
    int pred[v], dist[v];
    if(BFS(s,d,v,pred, dist)==false)
        cout<<"Given source and destination are not connected."<<endl;
    return;
}

int main()
{
    int v,e;    cin>>v>>e;
    for(int i=0; i<e; i++)
    {
        int x,y;    cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int s=0,d=7;
    printShortestDistance(s,d,v);
    return 0;
}