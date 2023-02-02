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
vector<vector<bool>>visited;
vector<vector<char>>graph;
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};
int m,n;

/*-----------------------------------dfs()-----------------------------------------------*/
bool isValid(int x, int y)
{
    if(x<0||y<0||x>=n||y>=m)
        return false;
    else if(visited[x][y]==true)
        return false;
    else if(graph[x][y]=='#')
        return false;
    return true;
}
void dfs(int i, int j)
{
    visited[i][j] = true;
    for(auto move: moves)
    {
        if(isValid(i+move.first, j+move.second))
        {
            dfs(i+move.first,j+move.second);
        }
    }
}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int c=0;
    cout<<"Enter elements number: "
    cin>>n>>m;
    cout<<"Enter data "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"Enter elements : ";
            char k; cin>>k;
            graph[i][j]=k;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(visited[i][j]==false&&graph[i][j]=='.')
            {
                dfs(i,j);
                c++;
            }
        }
    }

    cout<<c<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
