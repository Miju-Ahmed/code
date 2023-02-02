#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int b=0, e=n-1, m=(int)((b+e)/2);
    int x;
    cin>>x;
    while(b<=e && a[m]!=x)
    {
        if(a[m]<x)
            b = m + 1;
        else if(a[m]>x)
             e = m - 1;
        m = (int)(b+e)/2;
    }
    if(a[m]==x)
        cout<<"Data is found at index "<<m<<endl;
    else
        cout<<"Data is not present in this array.";
    return 0;
}