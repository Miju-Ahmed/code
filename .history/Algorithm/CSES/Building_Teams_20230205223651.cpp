#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}
const int mx=1e5+1;

/*-----------------------------------Variables--------------------------------------------*/
int visited[mx]={0};
vector<int>graph[mx];


/*------------------------------------dfs()-----------------------------------------------*/
void dfs1(int n)
{
    visited[n]=1;
    for(int i=0; i<graph[n].size(); i++)
    {
        if(visited[graph[n][i]]!=1)
        {
            dfs1(graph[n][i]);
        }
    }
}

void dfs2(int n)
{
    visited[n]=2;
    for(int i=0; i<graph[n].size(); i++)
    {
        if(visited[graph[n][i]]!=2)
        {
            dfs1(graph[n][i]);
        }
    }
}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n,m,a,b;    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    dfs1(1);
    for(int i=1; i<=n; i++)
    {
        if(visited[i]!=1)
        {
            dfs2();
        }
    }
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
