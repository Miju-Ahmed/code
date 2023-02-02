#include<bits/stdc++.h>
using namespace std;
#define MX 10000001

int minm(int a, int b)
{
    if(a>b)
        return b;
    return a;
}

int main()
{
    int n;
    cout<<"Enter the nodes number: ";
    cin>>n;
    int a[n][n], s[n+1][n][n];
    int l[n][n];
    cout<<"Enter the adjacency matrix: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
                l[i][j] = a[i][j];
                // s[0][i][j] = a[i][j];
            else
                l[i][j] = MX;
                // s[0][i][j] = MX;
        }
    }

    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                    l[i][j] = minm(l[i][j],l[i][k] + l[k][j]);
    // for(int m=1; m<=n; m++)
    // {
    //     for(int k=0; k<n; k++)
    //     {
    //         for(int i=0; i<n; i++)
    //         {
    //             for(int j=0; j<n; j++)
    //             {
    //                 s[m][i][j] = min(s[m-1][i][j], s[m-1][i][k]+s[m-1][k][j]);
    //             }
    //         }
    //     }
    // }

    // for(int i=0; i<=n; i++)
    // {
    //     cout<<"Matrix number: "<<i<<" ;\n";
    //     for(int j=0; j<n; j++)
    //     {
    //         for(int k=0; k<n; k++)
    //         {
    //             if(s[i][j][k]!=MX)
    //                 cout<<s[i][j][k]<<" ";
    //             else
    //                 cout<<"0"<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(l[i][j]==MX)
                cout<<"INF"<<" ";
            else
                cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}