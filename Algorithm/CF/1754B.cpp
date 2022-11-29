#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
    int n;
    cin>>n;
    if(n<4)
    {
        for(int i=1; i<=n; i++)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    int k = n/2 + 1;
    int r=1;
    while(k<=n)
    {
        cout<<k<<" "<<r<<" ";
        k++;
        r++;
        if(k==n&&n%2==1){

            cout<<k<<" ";
            break;
        }
    }
    cout<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
