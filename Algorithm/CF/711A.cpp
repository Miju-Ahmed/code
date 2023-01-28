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
    char c[n][5];   int p=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>c[i][j];
            if(j==4&&p==0)
            {
                if(c[i][0]=='O'&&c[i][1]=='O')
                {
                    c[i][0]='+';   c[i][1]='+';
                    p=1;
                }
                else if(c[i][3]=='O'&&c[i][4]=='O')
                {
                    c[i][3]='+';   c[i][4]='+';   p=1;
                }

            }
        }
    }
    if(p==0)    cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<5; j++)
                    cout<<c[i][j];
                cout<<endl;
            }
        }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
