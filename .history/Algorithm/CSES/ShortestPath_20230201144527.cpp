#include<bits/stdc++.h>
using namespace std;

bool visisted[1000]={false};
vector<int>graph[1000];

void 

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