#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the adjacency matrix: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    int p[n+1][n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(a[i][j]==0)
                p[1][i][j] = 0;
            else
                p[1][i][j] = 1;
    for(int l=2; l<=n; l++)
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    p[l][i][j] = p[l-1][i][j] | (p[l-1][i][k] & p[l-1][k][j]);
    for(int l=1; l<=n; l++)
    {
        cout<<"Lenght "<<l<<" : \n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<p[l][i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}