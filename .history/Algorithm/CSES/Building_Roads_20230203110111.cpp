#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>graph;
vector<bool>visited;

void solve()
{
    int n,m,c=0;
    cout<<"Enter the node and edge numbers : ";
    cin>>n>>m;
    cout<<"Enter the connected edges: "<<endl;
    for(int i=0; i<m; i++)
    {
        int a, b;   cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=)
}

int main()
{
    int t=1;
    cout<<"Solve function is begining: \n";
    while(t--)
        solve();
}
