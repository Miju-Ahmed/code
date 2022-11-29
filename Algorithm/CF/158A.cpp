#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],c=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int x = a[k-1];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=x&&a[i]!=0)
            c++;
        else
            break;
    }
    cout<<c<<endl;
    return 0;
}