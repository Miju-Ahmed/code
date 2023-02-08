#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+1;
vector<int>graph[mx];
int visited[mx]={-1};

bool bfs(int s)
{
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int c = q.front();  q.pop();
        visited[c]=1;
        for(auto d:)
    }
}