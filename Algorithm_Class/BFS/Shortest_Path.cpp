#include<bits/stdc++.h>
using namespace std;

pair<int,int>v[10][10];
bool visited[10];

void bfs(int start)
{
    deque<int>Q;
    Q.push_back(start);
    distance[start]=0;
    while(!Q.empty())
    {
        int p = Q.front();
        Q.pop_front();
        for(int i=0; i<v[p].size(); i++)
        {
            if(distance[v[p][i].first]>(distance[p]+v[p][i].second))
            {
                distance[v[p][i].first] = distance[p]+ v[p][i].second;
                if(v[p][i].second==0)
                    Q.push_front(v[p][i].first);
                else
                    Q.push_back(v[p][i].first);
            }
        }
    }
}