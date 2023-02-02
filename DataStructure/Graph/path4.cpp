#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;

    int d[n+1][n][n], g[n][n];
    cout<<"Enter the adjecent matrix: "<<endl;
    for(int i=0;i<n; i++)
        for(int j=0; j<n; j++)
            cin>>g[i][j];

    cout<<endl;
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<"Adjecent of "<<(i+1)<<" is : ";
        for(int j=0; j<n; j++)
        {
            if(g[i][j]!=0)
            {
                cout<<(j+1)<<" ";
            }
        }
        cout<<endl;
    }

    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            d[0][k][i] = g[k][i];
    
    for(int k=1; k<=n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                d[k][i][j] = 0;

    for(int k=1; k<=n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                for(int l=0; l<n; l++)
                    d[k][i][j] += d[0][i][l] * d[k-1][l][j];

    cout<<endl;
    cout<<endl;
    
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<d[k][i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;;
        cout<<endl;
    }

    for(int k=1; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            cout<<"Number of path "<<(k+1)<<" from "<<i+1<<" to : ";
            for(int j=0; j<n; j++)
            {
                if(d[k][i][j]!=0)
                {
                    cout<<j+1<<" ";
                }
            }
            cout<<endl;
        }

        cout<<endl;
        cout<<endl;
    }

    int p=1;
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(d[k][i][j]==0)
                {
                    p=0;
                    break;
                }
            }
            break;
        }
        break;
    }
    if(p==0)
        cout<<"The graph is not strongly connected."<<endl;
    else
        cout<<"The graph is strongly connected."<<endl;


    return 0;
}