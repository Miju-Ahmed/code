#include<bits/stdc++.h>
using namespace std;

void ins(int a[], int n)
{
    if(n>5)
    {
        int x=100;
        for(int i=n-1; i>4; i--)
            a[i]=a[i-1];
        a[4]=x;
    }
    for(int i=0; i<n-1; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void del(int a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            for(int j=i; j<n; j++)
                a[j] = a[j+1];
            break;
        }
    }
    for(int i=0; i<n-1; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void binarysearch(int a[], int n, int x)
{
    int beg=0, end=n-1, mid;
        int p=0;
        while(beg<=end)
        {
            mid = (beg+end)/2;
            if(a[mid]<x)
            {
                beg = mid+1;
            }
            else if(a[mid]>x)
            {
                end = mid-1;
            }
            else
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"Data has found at index "<<mid<<endl;
                return;
        }
        else
        {
            cout<<"Data has not found in this given array\n";
            return;
        }
}

void bbsort(int a[], int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j])
            {
                int x;
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    binarysearch(a, 10, 5);
}

int main()
{
    int a[50];
    for(int i=0; i<10; i++)
        cin>>a[i];
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    ins(a, 10);
    del(a, 10, 100);
    bbsort(a, 10);
    return 0;
}