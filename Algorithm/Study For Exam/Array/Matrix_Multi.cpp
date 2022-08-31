#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout<<"Enter the row and column: ";
    cin>>r1>>c1>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"First matrix column number and second matrix row number are not matched."<<endl;
        cout<<"Enter the right row and column number: ";
        cin>>r1>>c1>>r2>>c2;
    }

    int a[r1][c1], b[r2][c2];
    cout<<"Enter the first matrix: "<<endl;
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
            cin>>a[i][j];
    
    cout<<"Enter the second matrix: \n";
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            cin>>b[i][j];

    int m[r1][c2];
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            m[i][j] = 0;

    
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k< c1; k++)
                m[i][j] += a[i][j]*b[j][k];

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }

    return 0;
        
}