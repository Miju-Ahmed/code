#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int a1,a2,a3,a4;    cin>>a1>>a2>>a3>>a4;
    int c=0,a=0,b=0;
    while(a>-1&&b>-1)
    {
        if(a1>0)
        {
            c = c + a1;
            a = a + a1;
            b = b + a1;
            a1=0;
            cout<<c<<" ";
        }
        else if(a2>0)
        {
            if(b>0)
            {
                a++;
                b--;
                a2--;
                c++;
                cout<<"a2 "<<c<<" ";
            }
            cout<<"a2"<<" ";
        }
        else if(a3>0)
        {
            if(a>0)
            {
                a--;
                b++;
                a3--;
                c++;
                cout<<"a3 "<<c<<" ";
            }
            cout<<"a3"<<" ";
        }
        else if(a4>0)
        {
            a--;
            b--;
            c++;
            a4--;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
}

int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
