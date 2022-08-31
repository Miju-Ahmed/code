#include<bits/stdc++.h>
using namespace std;

int BS(int a[], int x, int f, int l)
{
    if(l>=f)
    {
        int mid = f + (l-f)/2;
        if(a[mid]>x)
            return BS(a, x, f, mid-1);
        else if(a[mid]<x)
            return BS(a, x, mid-1, l);
        else
            return mid;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the sorted array: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int x;
    cout<<"Enter the desire value: ";
    cin>>x;
    int t = BS(a, x, 0, n-1);
    if(t==-1)
        cout<<"The data is not found in this array."<<endl;
    else
        cout<<"The data is found at index "<<t<<"."<<endl;
    return 0;
}
