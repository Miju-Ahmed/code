#include<bits/stdc++.h>
using namespace std;

const int MX=1e3+1;
vector<int>graph[MX];
bool visited[MX]={false};
int parent[MX]={-1};
int dist[MX] = {0};
pair<int,int>move