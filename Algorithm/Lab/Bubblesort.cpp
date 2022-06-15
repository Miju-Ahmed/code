#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[20],n;
    cout<<"Enter the elements number: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    BubbleSort(a,n);
    return 0;
}