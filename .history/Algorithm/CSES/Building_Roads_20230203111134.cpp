#include<bits/stdc++.h>
using namespace std;
#define MX 10001

vector<int>graph[MX];
bool visited[MX]={false};

void dfs(int n)
{
    visited[n]=true;
    cout<<"Nodes is "<<n<<endl;
    for(int i=1; i<=graph[n].size(); i++)
    {
        if(visited[graph[n][i]]==false)
        {
            dfs(i);
        }
    }
}

void solve()
{
    int n,m,c=0;
    cout<<"Enter the node and edge numbers : ";
    cin>>n>>m;
    cout<<"Enter the connected edges: "<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<"Enter the elements no "<<i+1<<" : ";
        int a, b;   cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        cout<<a<<" "<<b<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            c++;
        }
    }
    cout<<"Need connections are "<<c<<endl;
}

int main()
{
    int t=1;
    cout<<"Solve function is begining: \n";
    while(t--)
        solve();
}
