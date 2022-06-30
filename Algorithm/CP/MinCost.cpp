#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int source, dest, weight;
};

class Graph
{
    public:
        vector<vector<int>>adjList;

        Graph(vector<Edge>const &edges, int x, int n)
        {
            adjList.resize(3*n);
            for(auto &edge: edges)
            {
                int v = edge.source;
                int u = edge.dest;
                int weight = edge.weight;

                if(weight==3*x)
                {
                    adjList[v].push_back(v+n);
                    adjList[v+n].push_back(v + 2*n);
                    adjList[v + 2*n].push_back(u);
                }
                else if(weight == 2*x)
                {
                    adjList[v].push_back(v+n);
                    adjList[v+n].push_back(u);
                }
                else
                {
                    adjList[v].push_back(u);

                }
            }
        }
};

void printPath(vector<int>const &predecessor, int v, int &cost, int n)
{
    if(v<0)
    {
        return;
    }

    printPath(predecessor, predecessor[v], cost, n);
    cost++;
    if(v<n)
    {
        cout<<v<<" ";
    }
}

void findLeastPathCost(Graph const &graph, int source, int dest, int n)
{
    vector<bool> discovered(3*n, false);
    discovered[source] = true;
    vector<int>predecessor(3*n, -1);
    queue<int>q;
    q.push(source);
    while (!q.empty())
    {
        /* code */
        int curr = q.front();
        q.pop();
        if(curr == dest)
        {
            int cost = -1;
            cout<<"The Least-cost path between "<<source<<" and "<<dest<<" is ";
            printPath(predecessor, dest, cost, n);
            cout<<"having cost "<<cost;
        }

        for(int i=0; i<graph.adjList[curr].size(); i++)
        {
            if(!discovered[graph.adjList[curr][i]])
            {
                discovered[graph.adjList[curr][i]]=true;
                q.push(graph.adjList[curr][i]);
                predecessor[graph.adjList[curr][i]] = curr;
            }
        }
    }
    
}

int main()
{
    int x=1;
    vector<Edge> edges =   
    {
        {0, 1, 3*x}, {0, 4, 1*x}, {1, 2, 1*x}, {1, 3, 3*x},
        {1, 4, 1*x}, {4, 2, 2*x}, {4, 3, 1*x}
    };

    int n = 5;
    int source = 0, dest = 2;
    Graph graph(edges, x, n);
    findLeastPathCost(graph, source, dest, n);
    return 0;
}