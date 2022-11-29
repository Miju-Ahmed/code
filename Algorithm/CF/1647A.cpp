#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%3==0)
    {
        for(int i=0; i<n/3; i++)
        {
            cout<<"21";
        }
    }
    else if(n%3==1)
    {
        for(int i=0; i<n/3; i++)
        {
            cout<<"12";
        }
        cout<<"1";
    }
    else
    {
        for(int i=0; i<n/3; i++)
            cout<<"21";
        cout<<"2";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}