#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int>st;
    vector<int>a;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int i;
    for(i=n-1; i>=0; i--)
    {
        if(st.find(a[i])!=st.end())
            break;
        st.insert(a[i]);
    }

    cout<<i+1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
    
}