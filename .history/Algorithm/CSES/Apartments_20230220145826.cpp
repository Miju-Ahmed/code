#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1e9+7

int main()
{
    int n,m,k,a[M],b[M],ans=0;
    cin>>n>>m>>k;
    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<m; i++)  cin>>b[i];
    sort(a,a+n);    sort(b,b+m);
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(abs(a[i]-b[i])<=k)
        {
            ans++
        }
    }
}