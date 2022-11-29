#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    int a,b,c=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            a=i;
            b=j;
            if((a*a+b==n)&&(a+b*b==m))
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}