#include<bits/stdc++.h>
using namespace std;

bool visisted[1000]={false};
vector<int>graph[1000];
int dist[1000]=

bool BFS(int s, int d, int v, int pred[], int dist[])
{
    queue<int>q;
    visisted[v]=true;
    for(int i=0; i<v; i++)
    {
        visisted[i]=false;
        dist[i]=INT_MAX;
        pred[i]=-1;
    }
    dist[s] = 0;
    q.push(s);
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        for(int i=0; i<graph[current].size(); i++)
        {
            if(visisted[graph[current][i]]==false)
            {
                visisted[graph[current][i]]=true;
                //q.push(graph[current][i]);
                dist[graph[current][i]] = dist[graph[current][i]] + 1;
                pred[graph[current][i]] = current;
                q.push(graph[current][i]);
                if(graph[current][i]==d)
                    return true;
            }
        }
    }
    return false;
}



void printShortestDistance(int s, int d, int v)
{
    int pred[v], dist[v];
    if(BFS(s,d,v,pred, dist)==false)
    {
        cout<<"Given source and destination are not connected."<<endl;
        return;
    }

    vector<int>path;
    int c = d;
    path.push_back(c);
    while(pred[c]!=-1)
    {
        path.push_back(pred[c]);
        c = pred[c];
    }

    cout<<"Shortest path length is "<<dist[d]<<endl;

    cout<<"Path is \n";
    for(int i=path.size()-1; i>=0; i--)
    {
        cout<<path[i]<<" ";
    }
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