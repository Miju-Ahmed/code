#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

void heapify(int a[], int n, int i)
{
    int parent = (i-1)/2;
    if(a[parent]>0)
    {
        if(a[i]>a[parent])
        {
            swap(a[i],a[parent]);
            heapify(a,n,parent);
        }
    }
}

void insertNode(int a[], int &n, int key)
{
    n = n+1;
    a[n-1] = key;
    heapify(a,n,n-1);
}
void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[MAX] = {10,5,3,2,4};
    int n=5;
    int key = 15;
    insertNode(a,n,key);
    printArray(a,n);
    return 0;
}