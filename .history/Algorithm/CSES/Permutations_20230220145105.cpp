#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;    cin>>n;
    if(n<=3)
    {
        if(n==1)
        {
            cout<<1<<endl;
            return 0;
        }
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(int i=1; i<=n; i+=2)
        cout<<i<<" ";
    
    cout<<endl;
}