#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the nodes number: ";
    cin>>n;
    int a[n][n], p[n+1][n][n];
    for(int i=0; i<=n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                p[i][j][k]=0;
    cout<<"Enter the matrix: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            p[1][i][j] = a[i][j];
        }
    
    for(int l=2; l<=n; l++)
    {
        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    p[l][i][j] = p[l-1][i][j]||(p[l-1][i][k]&&p[l-1][k][j]);
                }
            }
        }
    }

    for(int l=1; l<=n; l++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<p[l][i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n\n";
    }

    return 0;
}