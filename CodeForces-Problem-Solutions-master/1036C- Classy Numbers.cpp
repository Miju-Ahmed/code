#include<bits/stdc++.h>
using namespace std;

//{
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

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
//}

ll n, a[100005];
vector<ll> v;
void brute(ll pos, ll cnt, ll num){
    if(pos>18){
        v.pb(num);
        return;
    }

    brute(pos+1,cnt,num*10);

    if(cnt<3){
        fr1(9)
            brute(pos+1,cnt+1,num*10+i);
    }
}


main(){
    brute(1,0,0);
    v.pb(1000000000000000000);

    ll n, l, u;
    cin>>n;
    while(n--){
        cin>>l>>u;
        cout<<upper_bound(all(v),u)-lower_bound(all(v),l)<<endl;
    }
}
