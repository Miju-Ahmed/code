#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void BFS(ll a, ll b)
{
    queue<int>q;
    map<int,int>visited;
    map<int,int>p;
    q.push(a);
    vector<int>v;
    ll m,ap,n,c=0;
    while(!q.empty())
    {
        n = q.front();
        q.pop();
        visited[n]=1;
        m = n*2;
        if(visited[m]==0&&m<=b)
        {
            visited[m]=1;
            p[m]=n;
            q.push(m);
            if(m==b)
            {
                c=1;
                break;
            }
        }
        ap=10*n+1;
        if(visited[ap]==0&&ap<=b)
        {
            visited[ap]=1;
            p[ap]=n;
            q.push(ap);
            if(ap==b)
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
    {
        int k=p[b];
        v.push_back(k);
        while(k!=a)
        {
            k = p[k];
            v.push_back(k);
        }
        cout<<"YES"<<endl;
        cout<<v.size()+1<<endl;
        for(int i=v.size()-1; i>=0; i--)
            cout<<v[i]<<" ";
        cout<<b<<endl;
    }
    else
        cout<<"NO"<<endl;
}

void solve()
{
    ll a, b;    cin>>a>>b;
    BFS(a,b);
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
