#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll inf=1e18+8;
int gcd(int a, int b){return b==0?a:gcd(b,a%b);}

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]==1)
        {
            c++;
            if(c%2==0)
                cout<<"-";
        }
        else
            cout<<"+";
    }
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
