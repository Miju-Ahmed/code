#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    ll n,m;     cin>>n>>m;
    ll d[m];
    for(int i=0; i<m; i++)  cin>>d[i];

    sort(d,d+m);
    if(d[0]==1||d[m-1]==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1; i<m-1; i++)
    {
        if((d[i+1]-d[i])==1 && (d[i]-d[i-1])==1)
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
    //int _;      cin>>_;
    //while(_--)  
        solve();
    
    return 0;
}