#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    int count = 0;
    while(x)
    {
        x&=(x-1);
        count++;
    }
    cout<<count<<endl;

    int res=0;
    while(x>>=1)
        res++;
    cout<<res<<endl;
    return 0;
}