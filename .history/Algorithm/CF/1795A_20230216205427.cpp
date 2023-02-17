#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n,m,pn=0,pm=0,cb=0,cr=0;    cin>>n>>m;
    string sn, sm;  cin>>sn>>sm;
    for(int i=0; i<sn.size()-1; i++)
    {
        if(sn[i]==sn[i+1])
        {
            pn=1;
        }
        if(sn[i]=='B')
            cb++;
        else if(sn[i]=='R')
            cr++;
    }
    for(int j=0; j<sm.size()-1; j++)
    {
        if(sm[j]==sm[j+1])
        {
            pm=1;
        }
        if(sm[j]=='B')
            cb++;
        else if(sm[j]=='R')
            cr++;
    }
    if(pn==0||pm==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        if(sn[n-1]=='B')    cb++;
        else cr++;
        if(sm[m-1]=='B')    cb++;
        else    cr++;
        if((cb==cr)||((cb-1)==cr)||cb==(cr-1)/2)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
