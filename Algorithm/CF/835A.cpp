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
    int s,v1,v2,t1,t2;
    int s1,s2;
    cin>>s>>v1>>v2>>t1>>t2;
    s1 = s*v1+t1*2;
    s2 = s*v2+t2*2;
    if(s1<s2)   cout<<"First"<<endl;
    else if(s1>s2)  cout<<"Second"<<endl;
    else    cout<<"Friendship"<<endl;
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
