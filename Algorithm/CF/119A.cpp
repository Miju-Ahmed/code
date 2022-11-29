#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    int temp;
    int p=0;
    int r=500;
    while(n>0)
    {
        if(p%2==0)
        {
            temp = gcd(a, n);
            n = n - temp;
            r = 0;
            p++;
        }
        else
        {
            temp = gcd(b, n);
            n = n - temp;
            r = 1;
            p++;
        }
    }
    if(r==0)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}