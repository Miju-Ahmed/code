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
char graph[1000][1000];
vector<pair<int,int>>moves = {{1,0},{-1,0},{0,1},{0,-1}};
int n,m,s1,s2;
string s="";

/*-----------------------------------dfs()-----------------------------------------------*/
bool isValidPath(int x, int y)
{
    if(x>=n||y>=m||x<0||y<0)    return false;
    if(visited[x][y]==true)     return false;
    if(graph[x][y]=='#')        return false;
    return true;
}


void dfs(int i, int j)
{
    visited[i][j]=true;
    for(auto p:moves)
    {
        if(isValidPath(i+p.first,j+p.second))
        {
            if(graph[i+p.first][j+p.second]=='B')
            {
                f=true;
                return;
            }
            if((i+p.first)>i)   s+='D';
            else if((i+p.first)<i) s+='U';
            else if((j+p.second)>j) s+='R';
            else if(j+p.second))
            if(f==true)
                return;
            dfs(i+p.first,j+p.second);
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
    
    dfs(s1,s2);
    if(f==true)
    {
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else
        cout<<"NO"<<endl;
    
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
