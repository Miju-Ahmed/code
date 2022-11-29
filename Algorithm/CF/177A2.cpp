Not submitted


#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    int sum=0;
    if(n==3)
    {
        for(int i=0; i<n;i++)
            for(int j=0; j<n; j++)
                sum+=a[i][j];
        cout<<sum<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        sum += a[i][i];
    }
    for(int i=0; i<n; i++)
    {
        if(i==(n-1)/2)
            continue;
        sum += a[i][4-i];
    }
    int c=(n-1)/2;
    int r = (n-1)/2;
    for(int i=0; i<n; i++)
    {
        if(i==(n-1)/2)
            continue;
        sum += a[i][c];
    }

    for(int i=0; i<n; i++)
    {
        if(i==(n-1)/2)
            continue;
        sum += a[r][i];
    }
    cout<<sum<<endl;
    return 0;
}