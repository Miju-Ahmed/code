#include<bits/stdc++.h>
using namespace std;

vector<int>g[10000];
int par[1000]={-1};
bool visited[1000];
int n;

bool bfs()
{
    int s=1;
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(int i=0; i<g[curr].size(); i++)
        {
            if(visited[g[curr][i]]==false)
            {
                visited[g[curr][i]]=true;
                par[g[curr][i]]=curr;
                q.push(g[curr][i]);
                if(g[curr][i]==n)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    int m;    cin>>n>>m;
    for(int i=0;i <m; i++)
    {
        int a,b;    cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    //bfs();
    if(bfs()==false)
    {
        cout<<"IMPOSSIBLE"<<end;
        return 0;
    }
    //cout<<endl;

    int cn=n;
    stack<int>stk;
    while(cn!=0)
    {
        stk.push(cn);
        cn = par[cn];
    }

    cout<<stk.size()<<endl;

    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}