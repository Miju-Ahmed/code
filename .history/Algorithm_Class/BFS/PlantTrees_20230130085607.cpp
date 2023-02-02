#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int c=0;
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0&&a[i]>=2)
        {
            c++;
            a[i]=0;
        }
        else if(a[i]!=0&&a[i]==1&&a[i+1]==1&&i!=n)
        {
            c++;
            a[i]=0;
            a[i+1]=0;
        }
        else if(a[i]!=0&&a[i]==1)
        {
            c++;
            a[i]=0;
        }
    }
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
