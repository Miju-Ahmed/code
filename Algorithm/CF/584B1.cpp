#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    int n;
    cin>>n;
    long long total, same;
    total = (int)pow(3, 3*n)%mod;
    same = (int)pow(7, n)%mod;
    cout<<(total-same+mod)%mod<<endl;
    return 0;
}