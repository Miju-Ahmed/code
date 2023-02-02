#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int x;
    for(int i=0; i<n-1; i++)
    {
        x = a[i]^a[i+1];
    }
    cout<<x^a[i-2])<<endl;
}