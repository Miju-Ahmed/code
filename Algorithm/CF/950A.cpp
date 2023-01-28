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
    int l,r,a;  cin>>l>>r>>a;
    int s=0;
    int c=0;
    if(l>r)
    {
        while(r!=l&&a!=0)
        {
            r++;
            a--;
        }
        s = 2*(r+a/2);
    }
    else if(r>l)
    {
        while(l!=r&&a!=0)
        {
            l++;
            a--;
        }
        s = 2*(l+a/2);

    }
    else
    {
        s = 2*(l + a/2);
    }
    cout<<s<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
