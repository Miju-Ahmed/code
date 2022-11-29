#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int n,m,re;
    int r[3],c[3];
    cin>>n>>m;
    char a[n][m];
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                    r[k] = i;
                    c[k] = j;
                    k++;
                }
            }
        }
    }

    if
    

}