#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int c=0;
    while(n>0)
    {
        c += (n&1);
        
    }
}

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
            count += countSetBits(i);
        }
        cout<<count<<endl;
    }
}