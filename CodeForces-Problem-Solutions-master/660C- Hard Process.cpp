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
#define outis(a,sz) printf("%d",a[0]); for(int i=1;i<sz;i++) printf(" %d",a[i]); puts("")

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

int a[300005], n, k;

int can(int r){
    int ones= 0;

    fr(r){
        ones+= a[i];
    }

    if(ones>= r-k)  return 1;

    for(int i=r; i<n; i++){
        ones+= a[i];
        ones-= a[i-r];

        if(ones>= r-k)  return 1;
    }

    return 0;
}

void solve(int r){
    int ones= 0, mark=-1;

    fr(r){
        ones+= a[i];
    }

    if(ones>= r-k)  mark= 0;

    for(int i=r; i<n; i++){
        ones+= a[i];
        ones-= a[i-r];

        if(ones>= r-k)  mark= i-r+1;
    }

    for(int i= mark; i<mark+r; i++)  a[i]= 1;

    printf("%d",a[0]);
    fr1(n-1)
        printf(" %d",a[i]);
    puts("");
}

int main(){
    sii(n,k);
    fr(n)
        si(a[i]);

    int lo= 0, hi= n;

    while(lo<hi){
        int mid= (lo+hi+1)/2;

        if(can(mid))  lo= mid;
        else  hi= mid-1;
    }

    outi(lo);
    solve(lo);
}
