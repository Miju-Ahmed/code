#include<bits/stdc++.h>
using namespace std;

string firstBob(int *a, int *b, int n, int m)
{
    sort(a,a+n);
    sort(b,b+m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            
        }
    }

}

void solve()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++)
        cin>>b[m];
    
    string s1 = firstBob(a,b,n,m);
    string s2 = firstAlice(a,b,n,m);
}