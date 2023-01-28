#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s;
    cin>>n>>s;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    
    int sum=0;
    for(int i=1; i<n; i++)
    {
        sum = a[i];
        for(int j=i+1; j<=n; j++)
        {
            sum+=a[j];
            if(sum==s)
            {
                cout<<i<<" "<<j<<endl;
                return;
            }
            else if(sum>s)
                break;
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    solve();
    return 0;
}