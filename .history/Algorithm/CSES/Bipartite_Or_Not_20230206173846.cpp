#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int mx = 1e5+1;
//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------Variables--------------------------------------------*/
vector<int>graph[mx];
int visited[mx]={-1};

/*------------------------------------bfs()-----------------------------------------------*/

bool bfs(int s)
{
    visited[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int x = q.front();  q.pop();
        if(graph[x][x]==1)  return false;
        for(int i=1; i<=graph[x].size(); i++)
        {
            if(graph[x][i]&&visited[i]==-1)
            {
                visited[i] = 1 - visited[x];
                q.push(i);
            }
            else if(graph[x][i]&&visited[i]==visited[x])
                return false;
        }
    }
    return true;
}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n,m;    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;    cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1)? cout<<"YES"<<endl : cout<<"NO"<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
