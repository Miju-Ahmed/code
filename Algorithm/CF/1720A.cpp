#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    // int r=0;
    // double s;
    // s =(double)(a/b);
    // r = c/d;
    // if(a==0||c==0)
    //     cout<<"1"<<endl;
    // else if(s==r)
    //     cout<<"0"<<endl;
    // else
    // {
    //     s = (double)((a*d)/(b*c));
    //     r = (a*d)/(c*b);
    //     if(s==r)
    //         cout<<"1"<<endl;
    //     else
    //         cout<<"2"<<endl;
    // }

    if((double)a/(double)b == (double)c/(double)d)
        cout<<"0"<<endl;
    else if(a==0||c==0)
        cout<<"1"<<endl;
    else if(((a*d)%(c*b)==0) || ((c*b)%(a*d)==0))
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}