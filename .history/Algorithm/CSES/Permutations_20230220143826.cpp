#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;    cin>>n;
    for(int i=1; i<=n; i+=2)
        cout<<i<<" ";
    if(n%2==0)
        for(int i=2; i<=n; i+=2)
        cout<<i<<" ";
    cout<<endl;
}