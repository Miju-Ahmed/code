#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int p;
    cin>>p;
    int count = 0;
    while (p>0)
    {
        if(p>=100)
        {
            count += p/100;
            p = p%100;
            
        }
        else
        {
            count += p;
            
            break;
        }
    }
    if(count>10)
        cout<<-1<<endl;
    else
        cout<<count<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
    
}