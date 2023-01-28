#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}

void solve()
{
    int n;  cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0&&i!=n)
            cout<<"I love that ";
        else if(i%2==0&&i==n)
            cout<<"I love it ";
        else if(i%2!=0&&i!=n)
            cout<<"I hate that ";
        else if(i%2!=0&&i==n)
            cout<<"I hate it ";
    }
    cout<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
