#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int a,b;    cin>>a>>b;
        int count=0;
        for(int i=a; i<=b; i++)
        {
            if((i&1)==0&&i<b)
            {
                count += 2*countSetBits(i) + 1;
                i++;
                continue;
            }
            cou
        }
    }
}