#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the nodes number: ";
    cin>>n;
    int g[n][n];
    cout<<"Enter the graph: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>g[i][j];

    //copying the graph into the path matrix
    int path[n+1][n][n] = {0};
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            path[1][i][j] = g[i][j];
    
    //Find the path by using Floyed Warshall algorithm
    for(int l=1; l<=n; l++)
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    path[l][i][j] = path[l][i][j] | (path[l][i][k]& path[l][k][j]);
    
    //Print the path matrix
    cout<<endl;
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
            {
                if(path[l][i][j]!=0)
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
    }
    cout<<"\n\n";
}