#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char c[100];
    int r=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>c[i];
    for(int i=0, j=n-1; i<n; i++, j--)
    {
        if(c[i]=='Z')
            continue;
        else
            r += pow(26, j)*(int)(c[i]-64);
    }
    cout<<r<<endl;
}
int main()
{
    solve();
    return 0;
}