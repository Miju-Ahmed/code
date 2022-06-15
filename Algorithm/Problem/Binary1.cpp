#include<bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    if(b==0)
        return 1;
    long long result = 1;
    if(b%2)
        return result * result * a;
    else
        return result * result;
}

int main()
{
    long long a, b;
    cin>>a>>b;
    cout<<binpow(a,b)<<endl;
    return 0;
}