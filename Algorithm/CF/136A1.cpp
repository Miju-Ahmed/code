#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int k;
    for(int i=1; i<=n; i++)
    {
        cin>>k;
        a[k] = i;
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}