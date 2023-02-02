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
    cout<<"Enter the nodes number: ";
    cin>>n;
    int a[n][n];
    int p[n][n];
    cout<<"Enter the elements: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
                p[i][j] = a[i][j];
            else
                p[i][j] = INF;
        }
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                p[i][j] = min(p[i][j],p[i][k]+p[k][j]);
            }
        }
    }

    cout<<"\n\n";

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(p[i][j]!=INF)
                cout<<p[i][j]<<" ";
            else
                cout<<"0"<<" ";
        }
        cout<<endl;
    }
    return 0;
        
}