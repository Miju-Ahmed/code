#include<bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i)
{
    int l = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(l<n && a[left]>a[l])
        l = left;
    if(right<n&& a[right]>a[l])
        l = right;
    if(l!=i)
        swap(a[i],a[l]);
    
    heapify(a, n, l);
}

void heapSort(int a[], int n)
{
    for(int i=n/2 - 1; i>=0; i--)
        heapify(a, n, i);
    for(int i=n-1; i>=0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

void printArray(int a[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = 10;
    heapSort(a, n);
    cout<<"Array after using heapsort:"<<endl;
    printArray(a, n);
    return 0;
}