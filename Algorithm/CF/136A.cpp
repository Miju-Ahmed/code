#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<n+1; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[j]==i)
            {
                cout<<j<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}