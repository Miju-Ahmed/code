#include<bits/stdc++.h>
using namespace std;

void Adding(int a[], int n, int x)
{
    int temp = a[0];
    if(a[0]>x)
    {
        for(int i=n; i>0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = x;
    }
    else
    {
        for(int i=0;i<n; i++)
        {
            for(int i=1; i<n; i++)
            {
                if(a[i]>x)
                {
                    temp = a[i];
                    for(int k = i+1; k<=n; k++)
                    {
                        a[k] = a[k-1];
                    }
                    a[i] = x;
                }
                break;
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,a[50],x;
    cout>>"Enter the elements number: ";
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the Value to insert: ";
    cin>>x;
    Adding(a, n, x);
    return 0;
}