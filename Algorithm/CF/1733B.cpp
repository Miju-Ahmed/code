#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    if((x>0&&y>0)||(x==0&&y==0))
    {
        cout<<"-1"<<endl;
        return;
    }

    if(x==0)
        swap(x,y);
    
    if(x==1)
    {
        cout<<"1 ";
        for(int i=2; i<=n-1; i++)
            cout<<i+1<<" ";
        cout<<endl;
        return;
    }
    if((n-1)%x!=0)
    {
        cout<<"-1"<<endl;
        return;
    }

    ll p1 = 1, p2 = 2, wins = 0;
    for(int i=1; i<=n-1; i++)
    {
        cout<<p1<<" ";
        wins++;
        if(wins==x)
        {
            if(i==n-1)
                break;
            cout<<p2+1<<" ";
            p1 = p2 + 1;
            p2 = p1 + 1;
            i++;
            wins = 1;
            continue;
        }
        p2++;
    }
    cout<<endl;
}

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}