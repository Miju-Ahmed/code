// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define MAX 1000001
// #define MOD 1e9+7

// int dp[MAX];
// int n;

// int compute(int left)
// {
//     if(dp[left]!=0)
//         return dp[left];
//     for(int i=1; i<=6; i++)
//     {
//         if(left-i>=0)
//         {
//             dp[left]+=compute(left-i);
//             dp[left] %=MOD;
//         }

//     }
//     return dp[left];
// }

// int main()
// {
//     cin>>n;
//     memset(dp,0,sizeof(dp));
//     dp[0]=1;
//     cout<<compute(n)<<endl;

// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// #define MAXN 1000001
// #define MOD 1000000007

// int DP[MAXN], n;

// int compute (int left) {
//     if (DP[left] != 0) {
//         return DP[left];
//     }
//     for (int i = 1; i <= 6; i++) {
//         if (left - i >= 0) {
//             DP[left] += compute(left - i);
//             DP[left] %= MOD;
//         }
//     }
//     return DP[left];
// }

// int main() {
//     cin >> n;
//     memset(DP, 0, sizeof(DP));
//     DP[0] = 1;
//     cout << compute(n) << endl;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mx=1e7+1;
ll dp[100000007];
int main()
{
    ll n;   cin>>n;
    dp[0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int x=1; x<=6; x++)
        {
            if(x>i)
                break;
            dp[i] += dp[i-x];
            dp[i] = dp[i]%
        }
    }

    cout<<dp[n]<<endl;
    return 0;
}
