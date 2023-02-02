#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MX 99999999

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*---------------------------------variables---------------------------------------------*/
bool visited[1000][1000]={false},f=false;
char graph[1000][1000],s,d;
vector<pair<int,int>>m = {{1,0},{-1,0},{0,1},{0,-1}};
int n,m,s1,s2;

/*-----------------------------------dfs()-----------------------------------------------*/
void dfs(int i, int j)
{
    visited[i][j]=true;
    for(auto p:m)
    {
        if(isValidPath(i+p.first,j+p.second))
        {
            
        }
    }
}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    cin>>n>>m;
    for(int i=0;i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]=='A')
            {
                s1=i;   s2=j;
            }
        }
    
    int x = dfs(s1,s2);

    
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
