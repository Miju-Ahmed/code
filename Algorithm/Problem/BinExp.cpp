#include<bits/stdc++.h>
using namespace std;

long long BinExp(long long a, long long b)
{
    if(b==0) return 1;
    long long result = BinExp(a, b/2);
    if(b%2) return result * result * a;
    else return result * result;
}

int main()
{
    int t;
    cin>>t;
    long long a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<BinExp(a,b)<<endl;
    }
    return 0;
}