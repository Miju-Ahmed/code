#include<stdio.h>
#include<string.h>

int Binarysearch(char a[], int f, int l, char r)
{
    if(l>=f)
    {
        int mid = (f+l)/2;
        if(strcmp(a[mid],r)>0)
            return Binarysearch(a, f, mid-1, r);
        else if(strcmp(a[mid],r)<0)
            return Binarysearch(a, mid+1, l, r);
        else
            return mid;
    }
    
    return -1;
}

int main()
{
    char a[50][50],r[50];
    int n;
    cin>>n;
    cin>>r;
    for(int i=0; i<n; i++)
    {
        cin>>a[]
    }
}