#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    int a[n],b[64]={0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        int p=0;
        while(a[i]>0)
        {
            if(1&a[i])
            {
                b[p]++;
            }
            p++;
            a[i] = a[i]>>1;
        }
    }
    for(int i=0; i<64; i++)
    {
        b[i] = b[i]%
    }
}