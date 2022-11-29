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

const i64 mod= 1e9+7;

char s[100005];
i64 nxtb[100005], dp[100005];
int n;

vector<int> a;

i64 call(int pos){
    if(pos>=a.size())  return 1;
    if(dp[pos]!=-1)  return dp[pos];

    i64 opt1= call(upper_bound(a.begin()+pos,a.end(),nxtb[a[pos]])-a.begin() );
    i64 opt2= call(pos+1);

    return dp[pos]= (opt1+opt2) % mod;
}

int main(){
    sets(dp);
    scanf("%s",s);
    n= strlen(s);

    nxtb[n-1]= n;

    for(int i=n-2; i>=0; i--){
        nxtb[i]= nxtb[i+1];

        if(s[i]=='b')  nxtb[i]= i;
    }

    fr(n)
        if(s[i]=='a')  a.pb(i);


    outl(call(0)-1);
}
