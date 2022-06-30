#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][10],b[10][10],m[10][10],r1,c1,r2,c2;
    cout<<"Enter the first matrix row and column number: ";
    cin>>r1>>c1;
    cout<<"Enter the secons matrix row and column number: ";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"Error! First matrix column and secons matrix row are not equal."<<endl;
        cout<<"Enter first matrix row and column number: ";
        cin>>r1>>c1;
        cout<<"Enter second matrix row and column number : ";
        cin>>r2>>c2;
    }

    cout<<"\nEnter first matrix data: "<<endl;
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
            cin>>a[i][j];
    
    cout<<"\nEnter second matrix data: "<<endl;
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            cin>>b[i][j];

    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            m[i][j]=0;

    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                m[i][j] += a[i][k]*b[k][j];

    cout<<"Multiplying matrix is : "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}