#include<bits/stdc++.h>
using namespace std;
typedef long long ll
#define MAX 1000001
#define MOD 1e9+7

int dp[MAX],n;

int compute(int left)
{
    if(dp[left]!=0)
        return dp[left];
    
}

int main()
{
    cin>>n;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    cout<<compute(n)<<endl;

}