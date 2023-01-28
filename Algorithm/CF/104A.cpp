//07--Not Compeleted
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
    int a[26];
    for(int i=11; i<=19; i++)
    {
        a[i]=4;
    }
    a[20]=15;   a[21]=4;
    for(int i=1; i<=10; i++)
        a[i]=0;
    for(int i=22; i<=25; i++)
        a[i]=0;
    cout<<a[n]<<endl;

}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
