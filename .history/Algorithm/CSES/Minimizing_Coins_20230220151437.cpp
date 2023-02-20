#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;  cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)  cin>>a[i];
    sort(a,a+n);
    int ans=0,temp=0;
    for(int i=n-1; i>=0; i--)
    {
        temp = x-a[i];
        if(temp>=a[i])
        {
            i=i+1;
            ans++;
        }
        else if(temp<0)
        {
            i
        }
    }
}