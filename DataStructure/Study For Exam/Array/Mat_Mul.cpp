#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"Input row and column number while c1 and r2 are equal: ";
        cin>>r1>>c1>>r2>>c2;
    }

    int a[r1][c1], b[r2][c2];
    int c[r1][c2] = {0};
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
            cin>>a[i][j];
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            cin>>b[i][j];
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; i++)
            for(int k=0; k<r2; k++)
                c[i][j] += a[i][k]*b[k][j];

    cout<<"A matrix is : \n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<"B matrix is : \n";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    
    cout<<"Multiplicative matrix is :\n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}