#include<bits/stdc++.h>
using namespace std;

#define MX 10000

void heapify(int a[], int n, int i)
{
    int parent = (i-1)/2;
    if(a[parent]>0)
        if(a[i]>a[parent]){
            swap(a[parent], a[i]);
            heapify(a,n,parent);
        }
}

void insertNode(int a[], int &n, int key)
{
    n = n+1;
    a[n-1]=key;
    heapify(a,n,n-1);
}

int main()
{
    int a[MX] = {5,8,9,7,5,8,4,1,2,3,6,9};
    int n=12;
    int key = 15;
    insertNode(a,n,key);
    return 0;
}