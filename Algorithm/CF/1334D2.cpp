#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
ll n, l, r,cur;

void output(ll start, ll cnt)
{
    if(start==n)
    {
        if(cur>=1 && cur<=r)
        {
            cout<<"1 ";
        }
        return;   
    }
    if(cur>r)
    {
        return;
    }

    if(cur + cnt - 1>= l)
    {
        ll p = start +1;
        ll isStart = 1;
        for(ll i=0; i<cnt; i++)
        {
            if(isStart == 1)
            {
                if(cur + i>=l && cur+i<=r)
                {
                    cout<<start<<" ";
                }
            }
            else
            {
                if(cur + i>=l && cur + i<=r)
                {
                    cout<<p<<" ";
                }
                p++;
            }
            isStart = -isStart;
        }
    }
}

void solve()
{
    cin>>n>>l>>r;
    ll cnt = 2*(n-1);       cur = 1;
    for(ll start = 1; start<=n; start++)
    {
        output(start, cnt);
        cur += cnt;
        cnt -=2;
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