#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][10],b[100];
    cout<<"Enter the row and column number: ";
    int r,c,k=0,m=0;
    cin>>r>>c;

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>a[i][j];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            b[k] = a[i][j];
            k++;
        }
        b[k] = 000;
        k++;
    }

    for(int i=0; i<k; i++)
    {
        if(m==2)
        {
            for(int j=0; j<r; j++)
                cout<<b[j]<<" ";
            break;
        }
        if(b[i]==000)
        {
            m++;
        }
    }
    return 0;
}