#include<bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
int main()
{
    int n;
    cin>>n;
    long long ans = 1;
    for(int i=0; i<3*n; i++) //(3^3*n)  If n =1 (one triangle) 3*3*3 = 27 ways
        ans = (ans*3)%mod;  //          If n = 2 (one trangle) 3*3*3*3*3*3 = 729 ways

    long long ret = 1;
    for(int i=0; i<n; i++) //(7^n) If n = 1 (one trangle) 7ways tanya not satisfied
        ret = (ret*7)%mod; //       If n = 2 (one triangle) 7*7 = 49 ways not satistied
    
    cout<<(ans-ret+mod)%mod<<endl;
    return 0;
}