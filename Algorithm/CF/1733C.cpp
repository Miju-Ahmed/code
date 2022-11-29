#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;          cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    if(is_sorted(a.begin(), a.end()))
    {
        cout<<0<<endl;
        return;
    }

    vector<pair<int,int>> ans;
    if(a[0]%2==1)
    {
        int lastOdd;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]%2!=0)
            {
                lastOdd = i;
                break;
            }
        }
        if(lastOdd!=0)
        {
            a[0] = a[lastOdd];
            ans.push_back({0, lastOdd});
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                ans.push_back({0,i});
                a[i] = a[lastOdd];
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[lastOdd])
            {
                ans.push_back({i, n-1});
            }
        }
    }
    else
    {
        int lastEven;
        for(int i=n-1;i>=0; i--)
        {
            if(a[i]%2==0)
            {
                lastEven = i;
                break;
            }
        }

        if(lastEven!=0)
        {
            a[0] = a[lastEven];
            ans.push_back({0,lastEven});
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                a[i] = a[lastEven];
                ans.push_back({0, i});
            }
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0 and a[i]!=a[0])
            {
                ans.push_back({i, n-1});
            }
        }
    }

    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
    }
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