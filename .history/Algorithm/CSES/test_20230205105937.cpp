#include<bits/stdc++.h>
using namespace std;

vector<int>graph[10000];
int par[10000]={-1};
bool visited[10000]={false};
int dist[10000]={0};

bool BFS(int s, int d)