#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the vetex number: ";
    cin>>n;
    int a[n][n], p[n][n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                p[i][j][k] = 0;
    cout<<"Enter the adjacency matrix: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            p[0][i][j]=a[i][j];
        }
    for(int l=1; l<n; l++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(int k=0; k<n; k++)
                {
                    p[l][i][j] += p[l-1][i][k]*a[k][j];
                }
            }
        }
    }

    for(int l=0; l<n; l++)
    {
        cout<<"The matrix of path "<<l+1<<" is \n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<p[l][i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    int b[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            b[i][j]=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            b[i][j] += p[0][i][j] + p[1][i][j] + p[2][i][j] + p[3][i][j];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}