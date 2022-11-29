#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, a, b;
    cin>>n>>k;
    if(k==0)
    {
        cout<<"NO"<<endl;
    }
    else if(k%2==0)
    {
        if(n%4==0)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i=i+4)
            {
                cout<<i<<" "<<i+3<<endl;
                cout<<i+1<<" "<<i+2<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=1; i<=n; i= i+2)
        {
            cout<<i<<" "<<i + 1<<endl;
        }
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}