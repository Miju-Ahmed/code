#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;

    int g[n][n];
    cout<<"Enter the adjacency matrix with weight: "<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>g[i][j];

    int x = 1000000000;
    int q[n+1][n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(g[i][j]==0)
                q[0][i][j] = x;
            else
                q[0][i][j] = g[i][j];
        }

    // for(int k=1; k<=n; k++)
    //     for(int i=0; i<n; i++)
    //         for(int j=0; j<n; j++)
    //             for(int l=0; l<n; l++)
    //                 q[k][j][l] = min(q[k-1][j][l], q[k-1][j][i]+q[k-1][i][l]);

    for(int l=0; l<n; l++)
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    q[l][i][j] = min(q[l][i][j], q[l][i][k]+q[l][k][j]);

    cout<<"\n\n";
    for(int k=0; k<=n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(q[k][i][j]==x)
                    cout<<"0"<<" ";
                else
                    cout<<q[k][i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";
    }

    return 0;
}