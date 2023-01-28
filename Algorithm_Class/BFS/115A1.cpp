#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define N 2000
const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}


vector<int>graph[N];
bool visited[N]={false};
int ml=0;
int level[N]={0};
vector<int>bases;

void BFS(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        //cout<<curr<<" ";
        for(int i=0; i<graph[curr].size(); i++)
        {
            if(visited[graph[curr][i]]==false)
            {
                visited[graph[curr][i]]=true;
                q.push(graph[curr][i]);
                level[graph[curr][i]] = level[curr]+1;
            }
            ml = max(ml, level[graph[curr][i]]);
        }
        //cout<<"Level "<<ml<<endl;
    }
}

void solve()
{
    int n;  cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        if(x==-1)
            bases.push_back(i);
        else
            graph[x-1].push_back(i);
    }

    for(int i=0; i<bases.size(); i++)
    {
        level[bases[i]]=1;
        BFS(bases[i]);
    }
    cout<<max(ml,1)<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
