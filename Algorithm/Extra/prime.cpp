#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int p=1;
    for(int i = a; i<=b; i++)
    {
        p=1;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if (p==1)
        {
            /* code */
            cout<<i<<" ";
        }
        
        
    }
    cout<<endl;
    return 0;
}