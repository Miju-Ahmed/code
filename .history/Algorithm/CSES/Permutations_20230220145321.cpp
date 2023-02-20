#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;    cin>>n;
    if(n<=4)
    {
        if(n==1)
        {
            cout<<1<<endl;
            return 0;
        }
        else if(n==4)
        {
            cout<<"4 "<<" 2 "
        }
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(int i=1; i<=n; i+=2)
        cout<<i<<" ";
    if(n%2==0)
        for(int i=2; i<=n; i+=2)
        cout<<i<<" ";
    else
        for(int i=2; i<n; i+=2)
        cout<<i<<" ";
    cout<<endl;
}