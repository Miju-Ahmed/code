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
    int n,d,sum=0,j;    cin>>n>>d;
    string s[d];    int a[d]={0},p=0;
    for(int i=0; i<d; i++)
        cin>>s[i];
    for(int i=0; i<d; i++)
    {
        sort(s[i].begin(), s[i].end());
    }

    for(int i=0; i<d; i++)
    {
        sum=0;
        if(s[i][0]=='0')
        {
            for(j=i; j<d; j++)
            {
                if(s[j][0]=='0')
                {
                    sum++;
                }
                else
                    break;
            }
            a[p]=sum;
            p++;
            i=j;
        }
        else if(s[i][0]=='1')
            continue;

    }
    if(a[0]==0)
        cout<<"0"<<endl;
    else
    {
        sort(a,a+p);
        cout<<a[p-1]<<endl;
    }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
