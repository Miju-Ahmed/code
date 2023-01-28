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
    int r,g,b;  cin>>r>>g>>b;
    int s=30;
    if(r>0||g>0||b>0) r = r-2;
    if(g>0||b>0) {s+=1; g-=2;}
    if(b>0) {s+=1; b-=2;}
    int p=0;
    while(r>0||g>0||b>0)
    {
            r-=2; s++;
            if(r<=0&&g<=0&&b<=0)
            {
                p=1;
                break;
            }

            g-=2; s++;
            if(r<=0&&g<=0&&b<=0)
             {
                p=1;
                break;
             }

            b-=2; s++;
            if(r<=0&&g<=0&&b<=0)
            {
                p=1;
                break;
            }
        if(p==1)    break;
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
