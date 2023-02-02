#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,c=0;   cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int p=i;
        while(p>0)
        {
            c += (p&1);
            i = p>>1;
        }
    }
    cout<<c<<endl;
}