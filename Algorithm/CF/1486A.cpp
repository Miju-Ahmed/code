#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
   int n;       cin>>n;
   ll a[n],c=0;
   for(int i=0; i<n; i++)   cin>>a[i];

   for(int i=0; i<n; i++)
   {
        if(a[i]>=i)
        {
            c += a[i]-i;
        }
        else if(a[i]+c>=i)
        {
            c -= (i-a[i]);
        }
        else
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