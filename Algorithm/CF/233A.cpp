#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        for(int i=1;i<n; i = i+2)
        {
            cout<<i+1<<" "<<i<<" ";
        }

    }
    else
    {
        cout<<"-1";
    }
    cout<<endl;
    return 0;
}