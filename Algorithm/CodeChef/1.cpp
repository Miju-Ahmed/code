#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int currval=0, val=0;
    if(cin>>currval)
    {
        int cnt = 1;
        while(cin>>val)
        {
            if(val==currval)
            {
                ++cnt;
            }
            else
            {
                cout<<currval<<"occurs "<<cnt<<"time"<<endl;
                currval = val;
                cnt = 1;
            }
        }
        cout<<currval<<"occurs "<<cnt<<"times"<<endl;
    }

}
int main()
{
    solve();
    return 0;
}