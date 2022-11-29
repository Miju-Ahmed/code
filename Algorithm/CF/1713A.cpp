#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y;
        int u=0,d=0,l=0,r=0;
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            if(x==0)
            {
                u = max(u,y);
                d = min(d,y);
            }
            else
            {
                r = max(r, x);
                l = min(l, x);
            }
        }
        int distance = r + u + abs(l) + abs(d);
        cout<<2*distance<<endl;
    }
    return 0;
}