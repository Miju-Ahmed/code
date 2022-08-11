#include<bits/stdc++.h>
using namespace std;
#define INF 100000010

int main()
{
    int n;
    cout<<"Enter the nodes number : ";
    cin>>n;
    int graph[n][n];
    cout<<"Enter the graph : \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>graph[i][j];

    
    //Assign the value in the path matrix
    int path[n+1][n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(graph[i][j]==0)
            {
                path[0][i][j] = INF;
            }
            else
            {
                path[0][i][j] = graph[i][j];
            }
        }


    //Using Floye Warshall Algorithm
    for(int l=1; l<=n; l++)
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    //if(path[l][i][k]+path[l][k][j]<path[l][i][j])
                        //path[l][i][j] = path[l][i][k] + path[l][k][j];
                        path[l][i][j] = min(path[l-1][i][j], path[l-1][i][k] + path[l-1][k][j]);

    
    //Print the result
    for(int l=0; l<=n; l++)
    {
        for(int i=0; i<n; i++)
        {
            cout<<"Number of path from "<<i+1<<" to : ";
            for(int j=0; j<n; j++)
            {
                if(path[l][i][j]!=INF)
                    cout<<path[l][i][j]<<" ";

            }
            cout<<endl;
        }
        cout<<"The Matrix is : \n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(path[l][i][j]!=INF)
                    cout<<path[l][i][j]<<" ";
                else
                    cout<<"0"<<" ";
            }
            cout<<endl;
        }

        cout<<"\n\n";
    }

    return 0;
}