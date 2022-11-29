#include<bits/stdc++.h>
using namespace std;

//{
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b);
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c);

#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b);
#define slll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);

#define outi(a) printf("%d\n",a)
#define outii(a,b) printf("%d %d\n",a,b)
#define outis(a) printf(" %d",a)

#define outl(a) printf("%lld\n",a)
#define outll(a,b) printf("%lld %lld\n",a,b)
#define outls(a) printf(" %lld",a)

#define cel(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define INF 10000007
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long i64;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
//}

vector<int> v[100005];
int vis[100005], parent[100005], n, edges, cnt;

void reset(){
    clr(vis);
    sets(parent);
}

void dfs(int u){
    vis[u]= 1;
    cnt++;

    fr(v[u].size()){
        int nd= v[u][i];
        if(nd==parent[u]) continue;

        if(!vis[nd]){
            parent[nd]= u;
            dfs(nd);
        }

    }

    vis[u]= 2;
}

vector<i64> c;

main(){
    reset();
    int a, b;

    si(n);
    fr1(n){
        si(a);
        v[i].pb(a);
    }

    int mx1=0, mx2=0;

    fr1(n){
        if(!vis[i]){
            cnt= 0;
            dfs(i);

            c.pb(cnt);
        }
    }

    sort(all(c),greater<int>());

    if(c.size()==1){
        i64 ans= c[0]*c[0];
        outl(ans);
        return 0;
    }

    i64 ans= c[0]+c[1];
    ans*= ans;

    for(int i=2;i<c.size();i++)
        ans+= c[i]*c[i];

    outl(ans);
}
