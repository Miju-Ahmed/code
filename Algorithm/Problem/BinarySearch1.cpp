#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int f, int l, int x)
{
    if(l>=f)
    {
        int mid = f + (l-f)/2;
        if(a[mid]>x)
            return BinarySearch(a,f,mid-1,x);
        else if(a[mid]<x)
            return BinarySearch(a,mid+1,l,x);
        else
            return mid;
    }
    return -1;
}

int main()
{
    int a[20];
    int x;
    cout<<"Entet the desired value: ";
    cin>>x;
    cout<<"Enter the elements number: ";
    int n;
    cin>>n;
    cout<<"Enter the elements in sorting order: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int pos = BinarySearch(a,0,n-1,x);
    if(pos==-1)
        cout<<"This is not found here.";
    else
        cout<<"This elemensts position is :"<<pos<<endl;
    return 0;

}