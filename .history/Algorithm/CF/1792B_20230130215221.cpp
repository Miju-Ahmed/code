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
    int a[4];    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int f=0,s=0,c=0;
    if(a[0]==0)
        cout<<1<<endl;
    else
    {
        for(int i=1; i<=4; i++)
        {
            if(i==2)
            {
                while(f>=0&&s>=0&&a[i]>0)
                {
                    f++;
                    s--;
                    c++;
                    a[i]--;
                }
            }
            if(i==3)
            {
                while(f>=0&&s>=0&&a[i]>0)
                {
                    f--;
                    s++;
                    c++;
                    a[i]--;
                }
            }
    }
}


/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
