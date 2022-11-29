#include<bits/stdc++.h>
using namespace std;

int bs(int a[], int f, int l, int x)
{
    if(l>=f)
    {
        int m=(f+l)/2;
        if(a[m]<x)
            return bs(a, m+1, l, x);
        else if(a[m]>x)
            return bs(a, f, m-1, x);
        else
            return m;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int f=0,l=n-1,m=(f+l)/2;

    int x;
    cin>>x;
    while(f<=l&&a[m]!=x)
    {
        if(a[m]<x)
            f = m+1;
        else if(a[m]>x)
            l = m-1;
        m = (f+l)/2;
    }

    if(a[m]==x)
        cout<<"Find"<<endl;
    else
        cout<<"Not find"<<endl;

    f=0;
    l=n-1;
    int t=bs(a,f,l,x);
    if(t==-1)
        cout<<"not find";
    else
        cout<<"Find"<<endl;
    return 0;


}