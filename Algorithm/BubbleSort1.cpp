#include<bits/stdc++.h>
using namespace std;

void Bubble(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[50],n;
    cout<<"Enter the elements number: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    Bubble(a,n);
    return 0;
    
}