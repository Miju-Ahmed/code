#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    if(r>=l)
    {
        int mid = l + (r-l)/2;
        if(a[mid] == x)
        {
            return mid;
        }
        if(a[mid]>x)
        {
            return binarySearch(a, l, mid-1, x);
        }

        return binarySearch(a, mid + 1, r, x);
    }

    return -1;
}

int main()
{
    int a[20],n,x;
    cout<<"Enter the elements number and desired element: ";
    cin>>n>>x;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int result = binarySearch(a, 0, n-1, x);
    (result == -1) ? cout<<"Elements is  not found." : cout<<"Elements is found at index "<<result<<endl;
    return 0;
}