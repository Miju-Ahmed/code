#include<bits/stdc++.h>
using namespace std;

int a[10][10];
int d[10][10];
int n;

void path()
{
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                d[i][j] = min_element(d[i][j], d[i][k]+d[k][j]);
}

void main()
{
    cout<<"Enter the vertices number: ";
    cin>>n;
    cout<<"Enter the matrics: "<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            d[i][j] = a[i][j];
        }
    path();
    cout<<"The final distance matrix is : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<d[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}