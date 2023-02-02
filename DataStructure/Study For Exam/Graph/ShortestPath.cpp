#include<bits/stdc++.h>
using namespace std;
#define MX 1000010
int min(int a, int b)
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
    int a[n][n];
    int q[n+1][n][n] = {0};
    cout<<"Enter the matrix: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
                q[0][i][j] = MX;
            else
                q[0][i][j] = a[i][j];
        }

    for(int m=1; m<=n; m++)
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    q[m][i][j] = min(q[m-1][i][j], q[m-1][i][k]+q[m-1][k][j]);
    
    for(int i=0; i<=n; i++)
    {
        cout<<"Matrix number: "<<i<<" is:\n";
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(q[i][j][k]>=MX)
                    cout<<"0"<<" ";
                else
                    cout<<q[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n\n";
    }

    return 0;
   
}



// FloyedWarshall()
// {
//     for(int k=0; k<n; k++)
//     {
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 p[i][j] = min(p[i][j], p[i][k]+p[k][j]);
//             }
//         }
//     }
// }