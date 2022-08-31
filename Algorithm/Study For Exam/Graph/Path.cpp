#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cout<<"Enter the nodes and edges number: ";
    cin>>n>>e;
    int a[n][n];
    int path[n+1][n][n] = {0};
    cout<<"Enter the adjacency matrix: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            path[1][i][j] = a[i][j];
        }
    }

    for(int p=2; p<=n; p++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(int k=0; k<n; k++)
                {
                    path[p][i][j] += path[p-1][i][k] * path[1][k][j];
                }
            }
        }
    }

    cout<<"Show the path matrix: "<<endl;
    for(int l=1; l<=n; l++)
    {
        cout<<"Path matrix of length "<<l<<" is :\n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<path[l][i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n\n";
    }
    return 0;
}