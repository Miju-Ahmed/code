#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200];
memset(a,-1,sizeof(a));

int fib(int n)
{
    if(n<=1)
        return n;
    if(a[n]!=-1)
        return a[n];

    return a[n] = fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}