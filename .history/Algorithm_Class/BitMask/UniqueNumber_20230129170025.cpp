#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];
    a[n]=0;
    int x;
    for(int i=0; i<n-1; i++)
    {
        x = a[i]^a[i+1];
        if(x==0)
        {
            a[i]=0;
            a[i+1]=0;
            i = i+2;
        }
    }
}