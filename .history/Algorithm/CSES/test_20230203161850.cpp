#include <bits/stdc++.h>
using namespace std;

bool BFS(vector<int> adj[], int src, int dest, int v,int pred[], int dist[])
{
	list<int> queue;
	bool visited[v];
	for (int i = 0; i < v; i++) 
    {
		visited[i] = false;
		dist[i] = INT_MAX;
		pred[i] = -1;
	}
	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);
	while (!queue.empty()) {
		int u = queue.front();
		queue.pop_front();
		for (int i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);
				if (adj[u][i] == dest)
					return true;
			}
		}
	}

	return false;
}
void printShortestDistance(vector<int> adj[], int s,
						int dest, int v)
{
	int pred[v], dist[v];

	if (BFS(adj, s, dest, v, pred, dist) == false) {
		cout << "Given source and destination"
			<< " are not connected";
		return;
	}
	vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}
	cout << "Shortest path length is : "
		<< dist[dest];
	cout << "\nPath is::\n";
	for (int i = path.size() - 1; i >= 0; i--)
		cout << path[i] << " ";
}
int main()
{
	int n,m;    cin>>n>>m;
	vector<int> adj[m];
    for(int i=0; i<m; i++)
    {
        int a, b;   cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
	int source = 0, dest = 7;
	printShortestDistance(adj, source, dest, v);
	return 0;
}
