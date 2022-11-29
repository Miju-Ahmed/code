#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;      cin>>n;
    int a[n];
    for(int i=0; i<n;i++)   cin>>a[i];
    sort(a, a+n);
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0; i<n-1; i++)
    {
        if((a[i+1]-a[i])>=2)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}