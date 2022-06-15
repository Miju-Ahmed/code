#include<bits/stdc++.h>
using namespace std;

int bsearch(int a[], int k)
{
    int n = 5;
    int lg = log2(n-1) + 1;
    
    int pos = 0;
    for(int i=lg; i>=0; i--)
    {
        if(a[pos] == k)
            return pos;

        int new_pos = pos | (1<<i);
        if(new_pos<n && a[new_pos]<=k)
            pos = new_pos;
    }

    return ((a[pos]==k) ? pos : -1);
}

int main()
{
    int a[] = {-2, 10, 100, 250, 32315};
    cout<<bsearch(a,10);
    return 0;
}