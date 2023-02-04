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
    int n,l1=0,l2=0;  cin>>n;
    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
            cin>>v[i][j];
    }

    for(int i=0; i<n-1; i++)
    {
        if(v[i][n-2]==v[i+1][n-2])
        {
            l1 = v[i][n-2];
            cout<<l1<<" "
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(v[i][n-2]!=l1)
        {
            l2=i;
            break;
        }
    }

    for(int i=0; i<n-1; i++)
    {
        cout<<v[l2][i]<<" ";
    }
    cout<<l1<<endl;

}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
