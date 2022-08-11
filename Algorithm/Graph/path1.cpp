#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the matrix : "<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    
    int p[n+1][n+1][n+1];
    for(int i=0;i<n; i++)
        for(int j=0; j<n; j++)
            p[0][i][j] = a[i][j];

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; j++)
            {
                for(int l=0; l<n; l++)
                {
                    p[i][i][j] += 
                }
            }
        }
    } 

    int p[n][n];
    for(int i=0;i<n; i++)
        for(int j=0; j<n; j+=)
            p[i][j] = a[i][j];
    
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                p[i][j] += 

}