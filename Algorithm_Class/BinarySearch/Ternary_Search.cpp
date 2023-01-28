#include<bits/stdc++.h>
using namespace std;

int Ternary_Search(int a[], int n, int x)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int lm = l + (h-l)/3;   //lm = (2*l+h)/3;
        int rm = h - (h-l)/3;   //rm = (l+2*h)/3;
        if(a[lm]==x)    return lm;
        else if(a[rm]==x)   return rm;
        else if(a[lm]>x)    h = lm-1;
        else if(a[rm]<x)    l = rm + 1;
        else     l = lm+1, h = rm - 1;
    }
    return -1;
}

int main(void)
{
    int n;  cin>>n;
    int a[n];
    for(int i=0; i<n; i++)  cin>>a[i];
    int target; cin>>target;
    int index = Ternary_Search(a,n,target);

    if(index!=-1)
        cout<<"Elements found at index "<<index<<endl;
    else
        cout<<"Elements not found in this array"<<endl;
    return 0;
}