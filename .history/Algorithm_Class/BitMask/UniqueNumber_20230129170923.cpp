#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    int a[n], c[64]={0};
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        int j = 0;
        int num = a[i];
        while(num>0)
        {
            c[j]+=(num&1);
            j++;
            num = num>>1;
        }
    }
    int power = 1;
    int result = 0;
    for(int k=0; k<64; k++)
    {
        c[k] %= 3;
        result += c[k]*power;
        power = pow
    }
}