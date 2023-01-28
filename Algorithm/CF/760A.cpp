#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

void solve()
{
    int m,d;    cin>>m>>d;
    if(m==1)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==2)
    {
        if(d==1)    cout<<4<<endl;
        else    cout<<5<<endl;
    }
    else if(m==3)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==4)
    {
        if(d>=1&&d<=6)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    if(m==5)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==6)
    {
        if(d>=1&&d<=6)  cout<<"5"<<endl;
        else    cout<<6<<endl;
    }
    else if(m==7)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==8)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    if(m==9)
    {
        if(d>=1&&d<=6)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==10)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==11)
    {
        if(d>=1&&d<=6)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
    else if(m==12)
    {
        if(d>=1&&d<=5)  cout<<5<<endl;
        else    cout<<6<<endl;
    }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}

