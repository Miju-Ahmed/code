#include<bits/stdc++.h>
using namespace std;
int n;

void multiply(int a[][n], int b[][n]; int res[][n]);
{
    int mul[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            mul[i][j] = 0;
            for(int k=0; k<n; k++)
                mul[i][j] += a[i][k]*b[k][j];
        }
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            res[i][j] = mul[i][j];
}

void power(int g[n][n], int res[n][n], int k)
{
    if(n==1){
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                res[i][j] = g[i][j];
        return;
    }

    power(g, res, k/2);
    multiply(res, res, res);

    if(n%2!=0)
        multiply(res, g, res);
}

int main()
{
    cout<<"Enter the node number : ";
    cin>>n;
    int g[n][n];
    cout<<"Enter the graph: "<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>g[i][j];
    
    int k=2, res[n][n];
    power(g, res, k);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}