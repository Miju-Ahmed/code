/*----------------Not solved yet-----------------------------------------------------------*/

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
int c=0;


/*------------------------------------bfs()-----------------------------------------------*/
void bfs(int n)
{
    queue<int>q;
    q.push()
}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n,m,a,b;    cin>>n>>m;
        for(int j=0; j<m; j++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==0)
        {
            bfs(i);
        }
    }
    if(visited[1]==visited[n])
        cout<<"IMPOSSIBLE"<<endl;
    else
    {
        for(int i=1;i<=n; i++)
        {
            cout<<visited[i]<<" ";
        }
        cout<<endl;
    }
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
