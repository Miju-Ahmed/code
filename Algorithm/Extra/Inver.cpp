#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-p; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        p++;
    }

    p=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            cout<<" ";
        for(int j=1; j<=i; j++)
            cout<<j<<" ";
        cout<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            cout<<" ";
        //for(int j=2*i+1; )
    }

    return 0;
}