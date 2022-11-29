#include<bits/stdc++.h>
using namespace std;

int len(int x)
{
    int res=0;
    while(x!=0)
    {
        res++;
        x/=10;
    }
    return res;
}

int solve()
{
    int n;
    cin>>n;

    vector<int>a(n);
    vector<int>b(n);

    priority_queue<int>pqA, pqB;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        pqA.push(a[i]);
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        pqB.push(b[i]);
    }
    int ans = 0;

    while(!pqA.empty() and !pqB.empty())
    {
        int x = pqA.top();
        int y = pqB.top();
        if(x==y)
        {
            pqA.pop();
            pqB.pop();
        }
        else if(x>y)
        {
            pqA.pop();
            pqA.push(len(x));
            ans++;
        }
        else if(y>x)
        {
            pqB.pop();
            pqB.push(len(y));
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}