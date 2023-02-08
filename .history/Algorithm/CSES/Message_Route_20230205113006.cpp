#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 1000000000

vector<int>graph[MX];
ll parent[MX]={-1};
bool visited[MX]={false};
ll dist[MX]={0};

bool BFS(ll s, ll d)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        ll c=q.front();
        q.pop();    //cout<<c<<endl;
        for(ll i=0; i<graph[c].size(); i++)
        {
            if(visited[graph[c][i]]==false)
            {
                visited[graph[c][i]]=true;
                dist[graph[c][i]] = dist[c] + 1;
                parent[graph[c][i]] = c;
                q.push(graph[c][i]);
                if(graph[c][i]==d)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    ll n,m;    cin>>n>>m;
    for(ll i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool f = BFS(1,n);
    if(f==false)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    stack<int>s;
    ll c = n;
    while(c!=0)
    {
        s.push(c);
        c = parent[c];
    }

    cout<<s.size()<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}