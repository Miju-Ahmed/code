#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    int g[n][n], p[n][n];
    cout<<"Enter the adjecent matrix: "<<endl;
    for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                cin>>g[i][j];
                p[i][j] = g[i][j];
            }


    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                p[i][j] = p[i][j] | (p[i][k]&p[k][j]);

    cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<p[i][j]<<" "; 
        cout<<endl;
    }

    return 0;
}