#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int t;
    cin>>t;
    int p,q;
    for(int i=0;i<n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((a[i]+a[j])==t)
            {
                p = i;
                q = j;
                break;
            }
        }
        
    }
    cout<<"["<<p<<","<<q<<"]"<<endl;
}

int main()
{
    solve();
    return 0;
}