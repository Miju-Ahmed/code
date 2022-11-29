#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[10];
    int i=0;
    if(n<=9)
    {
        cout<<n<<endl;
    }
    else
    {
        if(n>=9)
        {
            a[i++] = 9;
            n = n - 9;
        }
        if(n>=8)
        {
            a[i++] = 8;
            n = n - 8;
        }
        if(n>=7)
        {
            a[i++] = 7;
            n = n - 7;
        }
        if(n>=6)
        {
            a[i++] = 6;
            n = n - 6;
        }
        if(n>=5)
        {
            a[i++] = 5;
            n = n - 5;
        }
        if(n>=4)
        {
            a[i++] = 4;
            n = n - 4;
        }
        if(n>=3)
        {
            a[i++] = 3;
            n = n - 3;
        }
        if(n>=2)
        {
            a[i++] = 2;
            n = n - 2;
        }
        if(n>=1)
        {
            a[i++] = 1;
            n = n - 1;
        }
    }
    reverse(a, a+i);
    for(int j=0; j<i; j++)
        cout<<a[j];
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