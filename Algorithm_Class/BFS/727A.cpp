#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void bfs(ll st, ll k)
{
    map<int,int>vis;
    map<int, int> par;
    vector<int>vc;
    queue<int>q;
    q.push(st);
    int v,u,vv,flg=0;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        vis[u]=1;
        v = 2*u;
        if(vis[v]==0&&v<=k)
        {
            vis[v]=1;
            par[v]=u;
            q.push(v);
            if(v==k){flg=1; break;}
        }
        vv = 10*u+1;
        if(vis[vv]==0 and vv<=k)
        {
            vis[vv]=1;
            par[vv]=u;
            q.push(vv);
            if(vv==k){flg=1;    break;}
        }
    }
    if(flg)
    {
        int p = par[k];
        vc.push_back(p);
        while(p!=st)
        {
            p = par[p];
            vc.push_back(p);
        }
        cout<<"YES"<<endl;
        cout<<vc.size()+1<<endl;
        for(int i=vc.size()-1; i>=0; i--)
            cout<<vc[i]<<" ";
        cout<<k<<endl;
    }
    else
        cout<<"NO"<<endl;
}

void solve()
{
    ll a,b; cin>>a>>b;
    bfs(a,b);
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
