#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the first matrix row and column number: ";
    cin>>r1>>c1;
    cout<<"Enter the second matrix row and column number: ";
    cin>>r2>>c2;
    while(r1!=c2)
    {
        cout<<"First matrix row column number and second matrix column number are not matched!"<<endl;
        cout<<"Enter the first matrix row and column number: ";
        cin>>r1>>c1;
        cout<<"Enter the second matrix row and column number: ";
        cin>>r2>>c2;
    }
    int a[r1][c1];
    cout<<"Enter the first matrix: \n";
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
            cin>>a[i][j];
    
    int b[r2][c2];
    cout<<"Enter the second matrix: \n";
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            cin>>b[i][j];

    
    int mult[r1][c2];
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            mult[i][j] = 0;
    for(int i=0;i <r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                mult[i][j] += a[i][k] * b[k][j];

    cout<<"The multiplicative matrix is : "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
            cout<<mult[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}