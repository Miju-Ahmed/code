Not understand yet

#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    for(int i=2; ; i++)
    {
        int x = i/2*(i/2 + (i&1));
        if(x>=n)
        {
            n=i;
            break;
        }
    }
    cout<<n<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}