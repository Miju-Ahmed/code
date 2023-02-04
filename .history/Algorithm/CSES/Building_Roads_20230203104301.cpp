#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------Variables--------------------------------------------*/
int n,m,c=0;
vector<vector<int>>graph;
vector<bool>visited = {false};
vector<int>r;

/*------------------------------------dfs()-----------------------------------------------*/
void dfs(int i)
{
    visited[i]=true;
    for(int j=0; j<graph[i].size(); j++)
    {
        if(visited[graph[i][j]]==false)
        
    }
}


/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
        }
        c++;
        r.push_back(i);
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
