#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MX 10000001

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------Variables--------------------------------------------*/
vector<int>graph[MX];
bool visited[MX] = {false};
vector<int>r;

/*------------------------------------dfs()-----------------------------------------------*/
void dfs(int i)
{
    visited[i]=true;
    for(int j=0; j<graph[i].size(); j++)
    {
        if(visited[graph[i][j]]==false)
        {
            dfs(graph[i][j]);
        }
    }
}


/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n,m,c=0;
    cout<<"Enter the node and edges number: ";
    cin>>n>>m;
    cout<<"Enter the elements: \n";
    
    

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            c++;
            r.push_back(i);
        }
        
    }
    cout<<c<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    cout<<"Enter the test case: ";
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
