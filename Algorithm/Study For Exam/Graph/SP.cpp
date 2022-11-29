#include<bits/stdc++.h>
using namespace std;
#define INF 99999

int min(int a, int b)
{
    if(a>b) return b;
    return a;
}

int main()
{
    int n;
    cout<<"Enter the Nodes number: ";
    cin>>n;
    int a[n][n],b[n][n];
    cout<<"Enter the adjacency matrix: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
                b[i][j] = INF;
            else
                b[i][j] = a[i][j];
        }
    }

    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(b[i][k]<INF && b[k][j]<INF)
                    b[i][j] = min(b[i][j], b[i][k]+b[k][j]);

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]!=INF)
                cout<<b[i][j]<<" ";
            else
                cout<<"0"<<" ";
        }
        cout<<endl;
    }
}