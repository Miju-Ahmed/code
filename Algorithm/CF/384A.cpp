#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

void solve()
{
    int n;  cin>>n;
    char ch[n][n]={'\0'};
    if(n%2==0)  cout<<(n*n)/2<<endl;
    else    cout<<(((n/2)+1)*((n/2)+1)+(n/2)*(n/2))<<endl;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<n; j = j+2)
                ch[i][j]='C';
            for(int j=1; j<n; j+=2)
                ch[i][j]='.';
        }
        else
        {
            for(int j=1; j<n; j+=2)
                ch[i][j]='C';
            for(int j=0; j<n; j+=2)
                ch[i][j]='.';
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<ch[i][j];
        cout<<endl;
    }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
