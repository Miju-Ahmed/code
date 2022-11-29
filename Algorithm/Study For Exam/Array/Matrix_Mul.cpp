#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int a[r1][c1], b[r2][c2], c[r1][c2]={0};
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                c[i][j] += a[i][k]*b[k][j];
    
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}