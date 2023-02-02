#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    int g[n][n];
    cout<<"Enter the adjacency matrix: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>g[i][j];
    
    //copying the matrix in the path matrix
    int path[n+1][n][n] = {0};
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            path[1][i][j] = g[i][j];

    //Finding th path matrix for 1 to n nodes
    for(int l=2; l<=n; l++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                for(int k=0; k<n; k++)
                    path[l][i][j] += path[1][i][k] * path[l-1][k][j];

    
    cout<<"\n\n";
    for(int l=1; l<=n; l++)
    {
        cout<<"The matrics is : \n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<path[l][i][j]<<" ";
            cout<<endl;
        }
        for(int i=0; i<n; i++)
        {
            cout<<"For length "<<l<<" the "<<i+1<<" verteces edges are having ::::: ";
            for(int j=0; j<n; j++)
                if(path[l][i][j]!=0)
                cout<<j+1<<" ";
            cout<<endl;
        }
        cout<<"\n\n";
    }
    int p=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(path[4][i][j]==0)
            {
                p = 1;
                break;
            }
    if(p==1)
        cout<<"The graph is not strongly connected!"<<endl;
    else
        cout<<"The graph is strongly conncted!"<<endl;

    return 0;
}