#include<bits/stdc++.h>
using namespace std;


int main()
{
    int r,c;
    cout<<"Enter the row and column number: ";
    cin>>r>>c;
    int a[10][10],t[10][10];
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>a[i][j];

    cout<<"The matrix is : "<<endl; 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    cout<<"After tranpose the matrix is : "<<endl;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}