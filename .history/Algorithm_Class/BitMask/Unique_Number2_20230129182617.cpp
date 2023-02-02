#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    int a[n],b[n],x=0,y=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        x = x^a[i];
    }
    int j=0;
    for(int i=0;i <n; i++)
    {
        if((a[i]&1))
        {
            b[j] = a[i];
            j++;
        }
    }
    for(int i=0; i<j; i++)
    {
        y = y^b[j];
    }
    x
}