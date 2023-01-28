#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

vector<vector<int>>graph;
bool visited[10000];
int level[10000];
int maxLevel=0;
vector<int>roots;

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int p=q.front();    q.pop();
        //cout<<p<<" ";
        for(int i=0; i<graph[p].size(); i++)
        {
            if(visited[graph[p][i]]==false)
            {
                level[graph[p][i]]=level[p]+1;
                q.push(graph[p][i]);
                visited[graph[p][i]];
            }
            maxLevel = max(maxLevel,level[graph[p][i]]);
        }
        //cout<<"Level "<<maxLevel<<endl;
    }
}

void solve()
{
    ll n;   cin>>n;
    graph.clear();  graph.resize(n);
    for(int i=0; i<n; i++)
    {
        int a;  cin>>a;
        if(a!=-1)
            graph[a-1].push_back(i);
        else
            roots.push_back(i);
    }
    memset(visited,false,sizeof(visited));
    memset(level,0,sizeof(level));
    for(auto root:roots)
    {
        level[root]=1;
        bfs(root);
    }
    cout<<max(maxLevel,1)<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
