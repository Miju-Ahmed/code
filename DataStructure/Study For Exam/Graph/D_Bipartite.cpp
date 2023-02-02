#include<bits/stdc++.h>
using namespace std;
int V;

bool colorGraph(int g[][V], int color[], int pos, int c)
{
    if(color[pos]!=-1 && color[pos] !=c)
        return false;
    color[pos] = c;
    bool ans = true;
    for(int i=0; i<V; i++)
    {
        if(g[pos][i])
        {
            if(color[i] == -1)
            {
                ans &= colorGraph(g, color, i, 1-c);
            }
            if(color[i]!=-1 && color[i]!= 1-c)
                return false;
        }
        if(!ans)
            return false;
    }
    return true;
}

bool isBipartite(int g[][V])
{
    int color[|V] = {-1};
    int pos=0;
    return colorGraph(g, color, pos, 1);
}

int main()
{
    cin>>V;
    int g[V][V];
    for(int i=0; i<V; i++)
        for(int j=0; j<V; j++)
            cin>>g[i][j];
    isBipartite(g)? cout<<"YES":cout<<"NO";
    return 0;
}