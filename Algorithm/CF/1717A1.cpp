#include<bits/stdc++.h>
using namespace std;

int gcd1(int a, int b)
{
    if(a==0)
        return b;
    return gcd1(b%a, a);
}

int lcm(int a, int b)
{
    return (a/gcd1(a,b)) *b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long a,b, gcd;
        int c=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int g = gcd1(i,j);
                int l = lcm(i, j);
                if((l/g)<=3)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}