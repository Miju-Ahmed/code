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

vector<int> v[105], dels;
int vis[105], cost[105][105], n;

void reset(){
    clr(vis);
}

int dfs(int u){
    vis[u]= 1;

    int leaf= 0;

    int maxi= 0;

    fr(v[u].size()){
        int nd= v[u][i];
        if(!vis[nd]){


            int total= cost[u][nd]+ dfs(nd);
            maxi= max(total, maxi);
        }
    }

    return maxi;
}

main(){
    reset();
    int a, b, c, root, x;

    si(n);

    fr(n-1){
        sii(a,b);
        si(c);

        cost[a][b]= c;
        cost[b][a]= c;

        v[a].pb(b);
        v[b].pb(a);
    }


    outi(dfs(0));
}
