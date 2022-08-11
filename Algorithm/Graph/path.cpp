#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    int p[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            p[i][j] = a[i][j];

    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                p[i][j] = p[i][j]|(p[i][k]&p[k][j]);

    
}